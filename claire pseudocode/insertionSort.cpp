/* C++ program to implement insertion sort */

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1],
		// that are greater than key, to one
		// position ahead of their
		// current position
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	 int N, k;
     cout<<"Enter the length of your array.\n";
     cin>>N;
     int arr[N];
     cout<<"Enter "<<N<<" integers in your array.\n";
     for(k=0; k<N; k++){
        cin>>arr[k];
     }
     cout<<"Your array before sorting is as follows : \n";
     printArray(arr, N);
	insertionSort(arr, N);
	printArray(arr, N);

	return 0;
}

