/* 
File: main.c
Main program for CMINUS compiler                   
*/

#include "globals.h"

/* set NO_PARSE to TRUE to get a scanner-only compiler */
#define NO_PARSE FALSE

#include "util.h"
#if NO_PARSE
#include "scan.h"
#else
#include "parse.h"
#endif

/* allocate global variables */
int lineno = 0;
FILE * source;
FILE * listing;
FILE * code;

/* allocate and set tracing flags */
int TraceScan = TRUE;
int TraceParse = TRUE;
int TraceAnalyze = FALSE;
int TraceCode = FALSE;

main( int argc, char * argv[] ){

	TreeNode * syntaxTree;
	int ttype;
	char pgm[120]; /* source code file name */

	if(argc != 2){ 
		fprintf(stderr,"usage: %s <filename>\n",argv[0]);
		exit(1);
	}

	strcpy(pgm,argv[1]) ;
	if(strchr (pgm, '.') == NULL){
		strcat(pgm,".cm");
	}
	source = fopen(pgm,"r");

	if(source==NULL){
		fprintf(stderr,"File %s not found\n",pgm);
		exit(1);
	}
	listing = stdout; /* send listing to screen */
	fprintf(listing,"\nTINY COMPILATION: %s\n",pgm);

#if NO_PARSE
	while( (ttype=getToken())!= 0 ){
		printToken( ttype, tokenString );
	}

#else
	syntaxTree = parse();
	if (TraceParse) {
		fprintf(listing,"\nSyntax tree:\n");
		printTree(syntaxTree);
  	}
	fprintf(listing,"\n");
	printf("After syntactic analysis...\n");
	printErrors();
	printf("\n");
#endif
	fclose(source);

	printf("After semantic analysis...\n");

	/* perform semantic analyis on the parsed tree */
	postorder(syntaxTree);

//	semanticCheck();
	printf("\n");
	//printf("calling gencode()..\n");
	//genCode(syntaxTree);	
	return 0;
}
