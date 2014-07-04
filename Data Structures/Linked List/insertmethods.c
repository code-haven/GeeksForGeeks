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

struct item *insertAtEnd(struct item *start, int number)
{
	if(start == NULL)
	{
		struct item *temp = (struct item *) malloc(sizeof(struct item));
		temp -> data = number;
		temp -> next = NULL;
		return temp;
	}
	
	struct item *tempstart = start;
	
	while(tempstart -> next != NULL)
		tempstart = tempstart -> next;
		
	struct item *temp = (struct item *) malloc(sizeof(struct item));
	temp -> data = number;
	temp -> next = NULL;
	tempstart -> next = temp;
	
	return start;
}

void *insertAfter(struct item *start, int previous, int number)
{
	struct item *newnode, *temp;
	
	while(start != NULL)
	{
		if(start -> data == previous)
		{
			temp = start -> next;
			
			newnode = (struct item *) malloc(sizeof(struct item));
			newnode -> data = number;
			newnode -> next = temp;
			
			start -> next = newnode;
			return;
		}
		start = start -> next;
	}
	
	printf("<-- Element not found --> \n");
}

void displayList(struct item* start)
{
	if(start == NULL)
		printf("<-- The linked list is empty -->\n");
	else
	{
		printf("<-- The linked list is -->\n");
		printf("Start -> ");
	
		while(start != NULL)
		{
			printf("%d -> ", start -> data);
			start = start -> next;
		}
	
		printf("End\n");
	}
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
		
		
		switch(choice)
		{
			case 1:
				printf("<-- Enter the number to be inserted -->\n");
				scanf("%d", &number);
				start = insertAtFront(start, number);
				break;
			case 2:
				printf("<-- Enter the number to be inserted -->\n");
				scanf("%d", &number);
				printf("<-- Enter the number after which %d is to be inserted -->\n", number);
				scanf("%d", &previous);
				insertAfter(start, previous, number);
				break;
			case 3:
				printf("<-- Enter the number to be inserted -->\n");
				scanf("%d", &number);
				start = insertAtEnd(start, number);
				break;
			case 4:
				displayList(start);
				break;
			case 5:
				break;
			default:
				printf("<-- Invalid choice! -->\n");
		}
	}while(choice != 5);
	
	return 0;
}
	
	
