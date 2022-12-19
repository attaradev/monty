#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack of data
 * @line_cnt: amount of lines
 *
 * this function prints the element at the top of the stack
 *
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
