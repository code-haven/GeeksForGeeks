#include <stdio.h>
#include <stdlib.h>

struct item
{
	int data;
	struct item *next;
};

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

int getNth(struct item *start, int n)
{
	int count = n - 1;

	while(count--)
		start = start -> next;

	return start -> data;
}

int main(void)
{
	struct item *start = NULL;
	int choice, number, n;

	do
	{
		printf("1. Insert element into a linked list\n");
		printf("2. Find nth element in the linked list\n");

		printf("Enter choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Enter the number to be inserted\n");
				scanf("%d", &number);
				start = insertAtEnd(start, number);
				break;
			case 2:
				printf("Enter the value of n\n");
				scanf("%d", &n);
				number = getNth(start, n);
				printf("The %dth element in the linked list is %d\n", n, number);
				break;
			case 3:
				break;
			default:
				printf("Invalid choice\n");
		}

	}while(choice != 3);
	return 0;
}
