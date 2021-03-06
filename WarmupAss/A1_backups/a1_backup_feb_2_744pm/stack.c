#include "stack.h"

StackNode* createStack(){
	StackNode* newStack = malloc(sizeof(StackNode));
	newStack->next = NULL;
	newStack->tagName = NULL;
	return newStack;
}

StackNode* createNode(char* tagName){
	StackNode *newNode = malloc(sizeof(StackNode));
	newNode->next = NULL;
	newNode->tagName = malloc(sizeof(char)*strlen(tagName));
	strcpy(newNode->tagName,tagName);
	return newNode;
}

void push(StackNode* theStack,StackNode* toPush){
	if(theStack->next != NULL){
		toPush->next = theStack->next;
	}
	theStack->next = toPush;
}

StackNode* pop(StackNode* theStack){
	StackNode* topNode = theStack->next;
	if(topNode != NULL){
		theStack->next = theStack->next->next;
		return topNode;
	}	
	printf("Cannot pop! Stack is empty.\n");
	return NULL;
}

char* top(StackNode* theStack){
	if(theStack->next != NULL){
		return theStack->next->tagName;
	}
	return NULL; //error; stack is empty  
}

void printStack(StackNode* theStack){
	StackNode* iter = theStack->next;
	printf("\n---TOP----\n");
	while(iter != NULL){
		printf("%s\n",iter->tagName);
		iter = iter->next;
	}
	printf("--BOTTOM--\n\n");
}

int stackSize(StackNode* theStack){
	int size=0;
	StackNode* iter = theStack;
	while(iter->next != NULL){
		size++;
		iter = iter->next;
	}
	return size;
}

