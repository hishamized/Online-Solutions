/*
  Selection Sort algorithm implemented using C++\
*/
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;
	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
     int n, k;
     cout<<"Enter the length of your array.\n";
     cin>>n;
     int arr[n];
     cout<<"Enter "<<n<<" integers in your array.\n";
     for(k=0; k<n; k++){
        cin>>arr[k];
     }
     cout<<"Your array before sorting is as follows : \n";
     printArray(arr, n);
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}


