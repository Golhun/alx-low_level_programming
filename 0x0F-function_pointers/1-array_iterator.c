#include "function_pointers.h"

/**
*array_iterator - Entry point
*Description: executes a function on each element of an array
*@array: pointer to array
*@size: size of array
*@action: pointer to function to execute on each element of array
*Return: void
*/
void array_iterator(int *array, size_t size, void (action)(int))
{
/* Check if array and function pointer are valid */
if (array && action)
{
size_t i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
}
