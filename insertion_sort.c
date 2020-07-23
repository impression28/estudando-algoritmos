#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *arr, int size)
{
	for (int i = 1; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

void print_array(int *arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	if (size > 0)
	{
		printf("%d", arr[size-1]);
	}

}
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Uso: ./insertion_sort [valores]\n");
		return 0;
	}
	int size = argc - 1;
	int *arr = malloc(size*sizeof(int));
	for (int i = 0; i < size; i++)
	{
		arr[i] = atoi(argv[i+1]);
	}

	insertion_sort(arr, size);
	print_array(arr, size);
	printf("\n");

	free(arr);
	return 0;
}
