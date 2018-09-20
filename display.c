#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"


extern Node *head;
void Display(){
	Node *display = head;

	printf("The List is : ");
	while(display != NULL){
		//print the data output.
		printf(" %d", display->data);
		//traverse the link until null in order to break loop.
		display = display->next;
	}
}