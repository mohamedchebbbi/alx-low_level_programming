#include "search_algos.h"

/**
 * linear_skip - skippity skip search singular linked list
 * @list: pointer to head node
 * @value: value to search for
 *
 * Return: the node found or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *hold = list;

	if (list == NULL)
		return (NULL);

	while (hold->next != NULL)
	{
		list = hold;

		if (hold->express)
		{
			hold = hold->express;
		}
		else
		{
			while (hold->next)
				hold = hold->next;
			break;
		}

		printf("Value checked at index [%lu] = [%d]\n", hold->index, hold->n);

		if (hold->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", list->index,
	       hold->index);

	while (list != NULL && list != hold->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
