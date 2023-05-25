#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @left: left index of array to print from
 * @right: right index of array to print to
 */
void print_array(int *array, int left, int right)
{
	int i;/*Index variable*/

	printf("Searching in array: ");/*Start printing the message*/

	/*Iterate over the array within the given bounds*/
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);/*Print each element followed by a comma*/
	printf("%d\n", array[i]);/*Print the last element followed by a newline*/
}
