// P9-3
// Wesley Casselman
// October 26th of 2023

#include <iostream>

using namespace std;

void displayRun(int array[], int size);

int main(void)
{
	const int SIZE = 20;

	int arr[SIZE] = { 1, 3, 2, 3, 3, 3, 4, 4, 2, 4, 5, 5, 1, 5, 5, 6, 6, 6, 6, 1 };

	displayRun(arr, SIZE);

	return 0;
}

void displayRun(int array[], int size)
{
	bool inRun = false;

	for (int i = 0; i < size; i++)
	{
		if (!inRun)
		{
			if (array[i] == array[i + 1])
			{
				cout << "(";
				inRun = true;
			}
		}

		cout << array[i];

		if (inRun)
		{
			if (array[i] != array[i + 1])
			{
				cout << ")";
				inRun = false;
			}
		}

		cout << " ";
	}
}