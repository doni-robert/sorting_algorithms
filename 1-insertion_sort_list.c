#include "sort.h"
#include <stdio.h>


/**
 * insert_node - inserts a node in its rightful sorted position
 *
 * @node1: node to insert
 * @list: the list to insert the node in
 *
 * Return: the inserted list
 */
/*
listint_t **insert_node(listint_t **list, listint_t *node1)
{
	listint_t *head, temp;

	head = *list;
	temp = node1->prev
	while (node1->n < temp->n)
		temp = temp->prev;

	if (node1->next = NULL)
	{
		temp2 = node1->prev;
		temp2->next = NULL;
	}
	else


	if (temp == NULL)
	{
		node1->next = head;
		node1->prev = NULL;
		head->prev = node1;
	}
	else
	{
*/
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order
 *
 * @list: the list of integers
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *temp, *h, *forward, *node1, *node2, *node3, *back;

	printf("1");
	head = h = *list;
	while (head != NULL)
	{
		printf("1");

		temp = head;
		while (h != NULL)
		{
			printf("1");

			forward = h->next;
			if (forward == NULL)
				break;
			if ((temp->n > forward->n))
			{
				temp = forward;
				break;
			}
			else
				h = h->next;
		}
		printf("Now1");

		back = temp->prev;
		while (back != NULL && (temp->n < back->n))
		{
			back = back->prev;
		}
		node1 = temp->prev;
		node2 = temp->next;
		printf("1");

		if (node2 == NULL)
			node1->next = NULL;
		else
		{
			node1->next = node2;
			node2->prev = node1;
		}

		node3 = back->prev;
		printf("1");
		if (back->prev == NULL)
		{
			temp->prev = NULL;
			temp->next = back;
		}
		else
		{
			printf("1");

			temp->prev = back->prev;
			temp->next = back;
			node3->next = temp;
		}
		back->prev = temp;
		
		print_list(*list);
		head = head->next;
	}
}
