/*
	File: util.c
	Desc: contains all the utility functions (parsing and semantic analysis algorithms, along with associated
	data structure functions.
*/

#include "globals.h"
#include "util.h"
#include "y.tab.h"

/* macros to increase/decrease indentation */
#define INDENT indentno+=2
#define UNINDENT indentno-=2
static indentno = 0;

static int fFlag=0, vFlag=0, pFlag=0; /* flags for function, variable, parameter */
static int cmpdFlag=0;
static int printSize=0;
static int arrFlag=0;
static int ignore=0;
static Entry * temp;

static char * errors[100];
static int errLineNo[100];
static int errCtr=0;

void printTree( TreeNode * tree ){
	int i;
	INDENT;
	while(tree != NULL){
		printSpaces();
		if(tree->nodekind==StmtK){
			switch (tree->kind.stmt){
				case IfK:
          				fprintf(listing,"If...\n");
          				break;
				case WhileK:
					fprintf(listing,"While...\n");
					break;
				case ReturnK:
					fprintf(listing,"Returning ");
					if(tree->child[0]==NULL){
					   fprintf(listing,"VOID");
					}
					fprintf(listing,"\n");
					break;
				case CmpdK:
					cmpdFlag=1;
					fprintf(listing,"Entering Compound Statement...\n");
					break;
				case AssignK:
					fprintf(listing,"Assigning...\n");
					break;
				default:
					fprintf(listing,"Unknown ExpNode kind\n");
					break;
			}
		}
		else if (tree->nodekind==ExpK){
			switch (tree->kind.exp) {
				case OpK:
					fprintf(listing,"Operator: ");
					printToken(tree->attr.op,"\0");
					break;
				case ConstK:
					if(fFlag){
						if(tree->attr.val==0){
							fprintf(listing,"Function returns VOID\n");
						}
						else if(tree->attr.val==1){
							fprintf(listing,"Function returns INT\n");
						}
						else{
							fprintf(listing,"CONST OUT OF BOUNDS\n");
						}
						fFlag=0;
					}
                                        else if(pFlag){
						if(arrFlag){
							fprintf(listing,"Param type: INT []\n");
							ignore=1; /* flag raised to ignore/bypass next child node */
							arrFlag=0;
						}
                                                else if(tree->attr.val==0){
                                                        fprintf(listing,"Param type: VOID\n");
                                                }
                                                else if(tree->attr.val==1){
                                                        fprintf(listing,"Param type: INT\n");
                                                }
                                                else{
                                                        fprintf(listing,"CONST OUT OF BOUNDS\n");
                                                }
                                                pFlag=0;
                                        }
					else if(vFlag){
						if(arrFlag){
							fprintf(listing,"Var type: INT ARRAY\n");
							ignore=1;
							printSize=1;
							arrFlag=0;
						}
						else if(tree->attr.val==0){
                                                        fprintf(listing,"Var type: VOID\n");
                                                }
                                                else if(tree->attr.val==1){
                                                        fprintf(listing,"Var type: INT\n");
                                                }
                                                else{
                                                        fprintf(listing,"CONST OUT OF BOUNDS\n");
                                                }
						vFlag=0;
					}
					else{
						if(!ignore && !cmpdFlag){
							printf("Function has no parameters.\n");
							//printf("Deal with this const: %d\n",tree->attr.val);				
						}
						else{
							if(printSize){
								fprintf(listing,"Size: %d\n",tree->attr.val);
								printSize=0;
							}
							else{
								fprintf(listing,"Const: %d\n",tree->attr.val);
							}
							ignore=0;
						}

					}
					break;
				case IdK:
					fprintf(listing,"Id: %s\n",tree->attr.name);
					if(tree->child[0] != NULL){
						printf("*** VAR HAS AN EXPRESSION. i.e. x[i+1]\n");
					}
					break;
				case CallK:
					fprintf(listing,"Calling function %s(); ",tree->attr.name);
					if(tree->child[0]==NULL){
						fprintf(listing,"Arguments: NONE\n");
					}
					else{
						fprintf(listing,"Arguments...\n");
					}

					break;
				case SubsK:
					// FIX THIS
					fprintf(listing,"Subs:\n");
					break;
				default:
					fprintf(listing,"Unknown ExpNode kind\n");
					break;
			}
		}
		else if (tree->nodekind==DecK){
			switch(tree->kind.dec){

				case VarK:
					fprintf(listing,"Var: %s\n",tree->attr.name);
					if(tree->child[1] != NULL){
						arrFlag=1;
						//printf("[%d]\n",tree->child[1]->attr.val);
					}
					else{
						//printf("\n");
					}
					vFlag=1;
					break;
                                case FunK:
					fprintf(listing,"Function: %s\n",tree->attr.name);
					fFlag=1;
					cmpdFlag=0;
                                        break;
                                case ParamK:
                                        fprintf(listing,"Parameter: %s\n",tree->attr.name);
					if(tree->attr.val==0){
						fprintf(listing,"None.\n");
					}
					else{
						if(tree->child[1] != NULL){
							arrFlag=1;
						}
					}
					pFlag=1;
                                        break;
				default:
					fprintf(listing,"Unknown DecNode kind\n");
					break;
			}
		}
		else{
			fprintf(listing,"Unknown node kind\n");
		}
		for (i=0;i<MAXCHILDREN;i++){
			printTree(tree->child[i]);
		}
		tree = tree->sibling;
	}
	UNINDENT;
}


void printErrors(void){
        int x;
        if(errCtr>0){
                for(x=0;x<errCtr;x++){
                        fprintf(listing,"Error on line (%d) : %s\n",errLineNo[x],errors[x]);
                }
        }
        else{
                fprintf(listing,"No errors to report!\n");
        }
}

void addErrMsg(char* errMsg, int lineno){
        errors[errCtr] = errMsg;
        errLineNo[errCtr] = lineno;
        errCtr++;
}

static void printSpaces(void){
        int i;
        for(i=0;i<indentno;i++){
                fprintf(listing," ");
        }
}

/* allocates and makes a new copy of an existing string */
char* copyString(char* toCopy){
	int n;
	char* newString;

	if(toCopy==NULL){
		return NULL;
	}
	n = strlen(toCopy)+1;
	newString = malloc(n);

	if(newString==NULL){
		fprintf(listing,"Out of memory error at line %d\n",lineno);
	}	
	else{
		strcpy(newString,toCopy);
	}
	return newString;
}

/* creates a new declaration node for syntax tree construction */
TreeNode* newDecNode(DecKind kind){
	TreeNode* t = (TreeNode*)malloc(sizeof(TreeNode));
	int i;
	if(t==NULL){
		fprintf(listing,"Out of memory! Error at line: %d\n",lineno);
	}
	else{
		for(i=0;i<MAXCHILDREN;i++){
			t->child[i]=NULL;
		}
		t->sibling = NULL;
		t->nodekind = DecK;
		t->kind.dec = kind;
		t->lineno = lineno;
	}
	return t;
}


/* creates a new expression node for syntax tree construction */
TreeNode* newExpNode(ExpKind kind){
	TreeNode* t = (TreeNode*)malloc(sizeof(TreeNode));
	int i;
	if(t==NULL){
		fprintf(listing,"Out of memory! Error at line: %d\n",lineno);
	}
	else{
		for(i=0;i<MAXCHILDREN;i++){
			t->child[i]=NULL;
		}
		t->sibling = NULL;
		t->nodekind = ExpK;
		t->kind.exp = kind;
		t->lineno = lineno;
	}
	return t;
}

/* creates a new statement node for syntax tree construction */
TreeNode* newStmtNode(StmtKind kind){
	TreeNode* t = (TreeNode*)malloc(sizeof(TreeNode));
	int i;
	if(t==NULL){
		fprintf(listing,"Out of memory! Error at line: %d\n",lineno);
	}
	else{
		for(i=0;i<MAXCHILDREN;i++){
			t->child[i]=NULL; /* set each of the node's children to NULL */
		}
		t->sibling = NULL;
		t->nodekind = StmtK; /* WHERE IS StmtK STORED ??? */
		t->kind.stmt = kind;
		t->lineno = lineno;
	}
	return t;
}

/* prints a token and its lexeme to the listing file */
void printToken( int token, const char* tokenString ){ 
	switch (token){ 
		case IF:
		case ELSE:
		case INT:
		case RETURN:
		case VOID:
		case WHILE:
			fprintf(listing,"reserved word: %s\n",tokenString);
			break;
		case ASSIGN: fprintf(listing,"=\n"); break;
		case EQ: fprintf(listing,"==\n"); break;
		case LT: fprintf(listing,"<\n"); break;
		case LTEQ: fprintf(listing,"<=\n"); break; 
		case GT: fprintf(listing,">\n"); break;
		case GTEQ: fprintf(listing,">=\n"); break;
		case NEQ: fprintf(listing,"!=\n"); break;
		case LPAREN: fprintf(listing,"(\n"); break;
		case RPAREN: fprintf(listing,")\n"); break;
		case LSQ: fprintf(listing,"[\n"); break;
		case RSQ: fprintf(listing,"]\n"); break;
		case LCURLY: fprintf(listing,"{\n"); break;
		case RCURLY: fprintf(listing,"}\n"); break;
		case COMMA: fprintf(listing,",\n"); break;
		case SEMI: fprintf(listing,";\n"); break;
		case PLUS: fprintf(listing,"+\n"); break;
		case MINUS: fprintf(listing,"-\n"); break;
		case TIMES: fprintf(listing,"*\n"); break;
		case OVER: fprintf(listing,"/\n"); break;
		case 0: fprintf(listing,"EOF\n"); break;
		case NUM: fprintf(listing,"NUM, val= %s\n",tokenString); break;
		case ID: fprintf(listing,"ID, name= %s\n",tokenString); break;
		case ERROR: fprintf(listing,"ERROR: %s\n",tokenString); break;
		default: /* should never happen */
			fprintf(listing,"Unknown token: %d\n",token);
	}
}



