// P9-3
// Wesley Casselman
// October 26th of 2023

#include <iostream>
#include <ctime>

using namespace std;

void displayRun(int array[], int size);
bool hasRun(int array[], int size);

int main(void)
{
	srand(time(0));
	
	const int SIZE = 20;

	while(true)
	{
		int arr[SIZE];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = rand() % 6 + 1;
		}

		hasRun(arr, SIZE) ? cout << "has run: " : cout << "no run: ";
		displayRun(arr, SIZE);
		if (hasRun(arr, SIZE))
		{
			break;
		}
	}

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

	cout << endl;
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