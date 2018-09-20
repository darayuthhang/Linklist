
//
//  problem.1
//

#ifndef LinkList_h
#define LinkList_h

typedef struct Node{
	int data;
	struct Node *next;
}Node;
 
Node *createNode();
void Insert(int inputNumb, Node *insert);
void Display();


#endif /* LinkList_h */
