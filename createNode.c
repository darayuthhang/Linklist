#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"

extern Node *head;

Node *createNode(){
	Node *ptr = (Node*)malloc(sizeof(Node));
	return ptr; //return pointer Node to the caller;
}