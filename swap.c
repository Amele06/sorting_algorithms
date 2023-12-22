#include "sort.h"

/**
 * swap_num - swaps two numbers in an array
 * @num1: first number
 * @num2: second number
 */

void swap_num(int *num1, int *num2)
{
	int temp;

	temp = num1;
	num1 = num2;
	num2 = temp;
}

/**
 * swap_node - swaps two 
