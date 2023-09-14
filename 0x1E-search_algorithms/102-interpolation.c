#include "search_algos.h"

/**
 * interpolation_search - performs jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	int low = 0;
	int high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}
		else
		{
			if (array[pos] > value)
				high = pos - 1;
			else
				low = pos + 1;
		}
	}

	return (-1);
}
