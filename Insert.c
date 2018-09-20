#include "LinkList.h"

extern Node *head;
void Insert(int inputNumb, Node *insert){
	//Fill In The Datas in The Node.
	insert->data = inputNumb;
	insert->next = head;
	head = insert;
}