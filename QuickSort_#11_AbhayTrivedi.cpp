//Submitted by AbhayTrivedi
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastIO {ios_base::sync_with_stdio(false); cin.tie(NULL);}

void swap(int* a, int* b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

int main(){
	int n;
	cout << "Enter Size: ";
	cin >> n;
	int a[n];
	cout << "Enter Elements of array: ";
	
	for(int i=0; i<n; i++)
		cin >> a[i];
	
	quickSort(a, 0, n);
	
	cout << "Sorted Array: "; 
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << endl;
	

	return 0;
}

void swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low;

	for (int j = low; j < high; j++){
		if (arr[j] < pivot){
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[high]);
	return (i);
} 

void quickSort(int arr[], int low, int high){
	if (low < high){
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	} 
} 
