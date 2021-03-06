#include "globals.h"
#include "util.h"


void printToken(int token, const char* tokenString){
	switch(token){
		case LSQBRK:
			fprintf(listing,"FOUND A <\n");
			break;
		case RSQBRK:
			fprintf(listing,"FOUND A >\n");
			break;
		case EQ:
			fprintf(listing,"FOUND A =\n");
			break;
		case QUOTE:
			fprintf(listing,"FOUND A \"\n");
			break;
		case ENDFILE:
			break;
		case WORD:
			fprintf(listing,"WORD(%s)\n",tokenString);
			break;
		case NUMBER:
			fprintf(listing,"NUMBER(%s)\n",tokenString);
			break;
		case OPENTAG:
			fprintf(listing,"OPENTAG\n");
			break;
		case CLOSETAG:
			fprintf(listing,"CLOSETAG\n");
			break;
		case HYPHEN:
			fprintf(listing,"HYPHEN(%s)\n",tokenString);
			break;
		case APOST:
			fprintf(listing,"APOST(%s)\n",tokenString);
		default:
			fprintf(listing,"This should never happen! ===> %s\n",tokenString);
	}	
}
