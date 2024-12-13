#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *insert_list = NULL;
	listint_t *swap_nodes = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	insert_list = *list;

	while (insert_list != NULL)
	{
		swap_nodes = insert_list;
		while (swap_nodes->prev != NULL && swap_nodes->prev->n > swap_nodes->n)
		{
			if (swap_nodes->next == NULL)
			{
				swap_nodes->prev->next = NULL;
			}
			else
			{
				swap_nodes->next->prev = swap_nodes->prev;
				swap_nodes->prev->next = swap_nodes->next;
			}
			swap_nodes->next = swap_nodes->prev;
			swap_nodes->prev = swap_nodes->prev->prev;
			swap_nodes->next->prev = swap_nodes;
			if (swap_nodes->prev == NULL)
			{
				*list = swap_nodes;
			}
			else
			{
				swap_nodes->prev->next = swap_nodes;
			}
			print_list(*list);
		}
		insert_list = insert_list->next;
	}
}
