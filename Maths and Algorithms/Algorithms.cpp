#include "Algorithms.h"

int* Algorithms::BubbleSort(int* Data, size_t Size)
{
	for (int step = 0; step < Size - 1; step++)
	{
		int swap = 0;

		for (int i = 0; i < Size - 1; i++)
		{
			if (i > Data[i + 1])
			{
				int oldI = i;
				i = Data[i + 1];
				Data[i + 1] = oldI;

				swap = 1;
			}
		}

		if (swap == 0)
			break;
	}

	return Data;
}

int* Algorithms::InsesrtionSort(int* Data, size_t Size)
{
	int j;
	
	for (int i = 1; i < Size; i++) 
	{	
		j = i - 1;
		
		while (j >= 0 && Data[j] > Data[i]) 
		{
			Data[j + 1] = Data[j];
			j = j - 1;
		}

		Data[j + 1] = Data[i];
	}
}

int* Algorithms::SelectionSort(int* Data, size_t Size)
{
	return nullptr;
}

int* Algorithms::HeapSort(int* Data, size_t Size)
{
	return nullptr;
}

int* Algorithms::MergeSort(int* Data, size_t Size)
{
	return nullptr;
}

int* Algorithms::QuickSort(int* Data, size_t Size)
{
	return nullptr;
}

int* Algorithms::BinSort(int* Data, size_t Size)
{
	return nullptr;
}
