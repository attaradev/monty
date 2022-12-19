#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pint - print the value at the top of the stack
 * @stack: stack of data
 * @line_cnt: amount of lines
 *
 * Description: this function prints the value at the top of the
 * stack
 *
 * Return: void
 */

void pint(stack_t **stack, unsigned int line_cnt)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_cnt);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
