/* Insertion of Nodes into a linked list. 
	1. At the beginning
	2. After an element
	3. At the end.
*/
#include <stdio.h>
#include <stdlib.h>

struct item
{
	int data;
	struct item *next;
};

struct item *insertAtFront(struct item *start, int number)
{
	struct item *temp = (struct item *) malloc(sizeof(struct item));
	temp -> data = number;
	temp -> next = start;
	
	return temp;
}

int main(int argc, char **argv)
{
	int choice, number, previous;
	struct item *start = NULL;
	
	do
	{
		printf("<-- Linked list insertion menu -->\n");
		printf("\t1. At the beginning \n");
		printf("\t2. After an element \n");
		printf("\t3. At the end \n");
		printf("\t4. Display the linked list.\n");
		printf("\t5. Exit\n");
		printf("<-- Enter choice -->\n");
		
		scanf("%d", &choice);
		
		printf("<-- Enter the number to be inserted -->\n");
		scanf("%d", &number);
		
		switch(choice)
		{
			case 1:
				start = insertAtFront(start, number);
				break;
			case 2:
				printf("<-- Enter the number after which %d is to be inserted -->\n", number);
				scanf("%d", &previous);
				//start = insertAfter(start, previous, number);
				break;
			case 3:
				//start = insertAtEnd(start, number);
				break;
			case 4:
				//displayList();
				break;
			case 5:
				break;
			default:
				printf("<-- Invalid choice! -->\n");
		}
	}while(choice != 5);
	
	return 0;
}
	
	