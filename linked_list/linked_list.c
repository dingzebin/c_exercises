#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"

// add node
int add(struct Node *list, int value)
{
	struct Node *new_node;
	new_node = malloc(sizeof(struct Node));
	if (new_node == NULL) 
	{
		printf("Error: malloc failed in add\n");
		exit(EXIT_FAILURE);
	}
	new_node->value = value;
	struct Node *pre = list;
	while (pre->next != NULL) 
	{
		pre = pre->next;
	}
	pre->next = new_node;
	return 1;
}

// remove node by value
int delete_node(struct Node *list, int value) 
{
  struct Node *prev = list;
	struct Node *cur = NULL;
	while (prev->next != NULL) 
	{
		if (prev->next->value == value)
		{
			cur = prev->next;
			break;
		}
		prev = prev->next;
	}
	if (cur == NULL) 
	{
		return -1;
	}
	prev->next = cur->next;
	free(cur);
	return 1;
}

// get by index
struct Node *get_node(struct Node *list, int index) 
{
  struct Node *cur = list->next;
	for (int i = 0; i < index && cur != NULL; i++) 
	{
  	cur = cur->next;
	}
	return cur;
}


