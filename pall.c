#include "monty.h"
/**
 * f_pall - prints the contents of the stack
 * @head: pointer to the stack head
 * @counter: not used
 * Return: no return value
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
