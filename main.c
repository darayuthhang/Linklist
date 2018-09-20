#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"




//create head to keep track Node Link List.
Node *head = NULL;

int main(int argc, char const *argv[])
{
	int inputNode, inputNumb, i;
	
	//Asking User To Enter How Many Node They want to insert.
	printf("How Many Node to Insert\n");
	scanf("%d", &inputNode);

	//Try Loop Through all the function inside the loop 
	//to create ,insert and display nodes.
	for(i=0;i<inputNode;i++){

		printf("\nFill In The Number You Want to Insert\n");
		scanf("%d", &inputNumb);
		//Allocate Memory Storage For New Node.
		Node *NewNode = createNode();
		//Call the function insert to Insert the Number into Node.
		Insert(inputNumb, NewNode);
		//Print of the content of the Node Data.
		Display();
	}


	free(head);

		return 0;
}
























