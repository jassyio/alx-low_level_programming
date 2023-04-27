#include "lists.h"
/**
 * list_len - returns the length list.
 * @h: singly linked list.
 * Return: size of the list.
 */

size_t list_len(const list_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
