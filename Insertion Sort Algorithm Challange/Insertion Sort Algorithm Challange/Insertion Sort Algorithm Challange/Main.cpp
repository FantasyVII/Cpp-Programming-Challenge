#include <iostream>

#define ARRAY_SIZE 10

void Swap(int* a, int* b);

void Sort(int* unsortedArray, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (unsortedArray[i] < unsortedArray[j])
				Swap(&unsortedArray[i], &unsortedArray[j]);
		}
	}
}

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int unsortedArray[ARRAY_SIZE] = { 5, 2, 6, 23, 14, 3, 35, 11, 8, 7 };

	std::cout << "Unsorted array: " << std::endl;
	for (size_t i = 0; i < ARRAY_SIZE; i++)
		std::cout << unsortedArray[i] << ", ";
	
	Sort(unsortedArray, ARRAY_SIZE);

	std::cout << std::endl << std::endl << "Sorted array: " << std::endl;
	for (size_t i = 0; i < ARRAY_SIZE; i++)
		std::cout << unsortedArray[i] << ", ";

	std::cout << std::endl << std::endl;
	return 0;
}