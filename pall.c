#include "monty.h"

/**
 * pall - print a double linked list
 *
 * @stack: double linked list
 * @line_number: Number to add (not used)
 * Return: Nothing
 */

void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	print_dlistint(*stack);
}
