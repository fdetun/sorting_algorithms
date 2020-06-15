#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}