#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

extern FILE* source; /* source code text file */
extern FILE* listing; /* listing output text file */
extern int lineno; /* source line number for listing */

typedef enum{ 
	// UNKNOWN = 0
	OPENTAG=1, 
	CLOSETAG, //=2 
	WORD,  //=3
	NUMBER, 
	APOSTROPHIZED, 
	HYPHENATED, 
	PUNCTUATION
}TokenType;
