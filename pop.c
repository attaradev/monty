#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pop - pops the very top element of the stack
 * @stack: stack of data
 * @line_cnt: line number for error messages
 *
 * Description: this function removes the top element from the
 * stack
 *
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_cnt)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;

	if (!*stack)
		return; /* prevents errors cause next line might assign a NULL */

	(*stack)->prev = NULL;
}
