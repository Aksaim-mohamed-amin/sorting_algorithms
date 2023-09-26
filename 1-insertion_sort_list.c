#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 *                       order using the Insertion sort algorithm, and print
 *                       the list each time a swap happen.
 * @list: Pointer to the heade of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *key, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr)
	{
		if (curr->n < curr->prev->n)
		{
			key = curr;
			while (key->prev && key->n < key->prev->n)
			{
				tmp = key->prev;

				if (tmp->prev)
					tmp->prev->next = key;
				else
					*list = key;

				if (key->next)
					key->next->prev = tmp;

				tmp->next = key->next;
				key->prev = tmp->prev;

				tmp->prev = key;
				key->next = tmp;

				print_list(*list);
			}
		}
		curr = curr->next;
	}
}
