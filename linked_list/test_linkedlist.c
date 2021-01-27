#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"

int main()
{
	struct Node *list = malloc(sizeof(struct Node));
	for (int i = 0; i < 10; i++)
	{
		add(list, i);
	}

	struct Node *cur = list->next;
	while(cur != NULL) 
	{
		printf("val: %d\n", cur->value);
		cur = cur->next;
	}
	printf("\n-------------- split line --------------\n\n");

  delete_node(list, 8);
	cur = list->next;
	while(cur != NULL) 
	{
		printf("val: %d\n", cur->value);
		cur = cur->next;
	}

	printf("\n-------------- split line --------------\n\n");
	struct Node *node = get_node(list, 7);
	if (node == NULL) 
	{
		printf("node is NULL at index %d\n", 7);
	} 
	else
	{
		printf("value is %d\n", node->value);
	}
	
	return 0;
}

