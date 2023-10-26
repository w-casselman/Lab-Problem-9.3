// P9-3
// Wesley Casselman
// October 26th of 2023

#include <iostream>

using namespace std;

void displayRun(int array[], int size);
bool hasRun(int array[], int size);

int main(void)
{
	const int SIZE = 20;

	int arr[SIZE] = { 1, 3, 2, 3, 2, 3, 5, 4, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3 };

	hasRun(arr, SIZE) ? cout << "has run: " : cout << "no run: ";
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

bool hasRun(int array[], int size)
{
	for (int i = 1; i < size; i++)
	{
		if (array[i - 1] == array[i])
		{
			return true;
		}
	}
	return false;
}