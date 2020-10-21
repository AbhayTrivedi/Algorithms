//Submitted by AbhayTrivedi
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastIO {ios_base::sync_with_stdio(false); cin.tie(NULL);}

int bSearch(int arr[], int l, int h, int x){
	while(l<=h){ 
		int mid = l + (h - l) / 2;

		if(arr[mid] == x) 
			return mid;
		
		if(arr[mid] < x)		// If x greater
			l = mid + 1;

		else		// If x is smaller
			h = mid - 1; 
	}
	return -1; 
} 

int main(){
  //fastIO
	int n, x;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	cout << "Enter elements of array: ";
	for(int i=0; i<n; i++)
		cin >> arr[i];

	cout << "Enter the Element to be founded: ";
	cin >> x; 
	int result = bSearch(arr, 0, n-1, x);

	if(result != -1)
		cout << "Element is present at index: " << result << endl;
	else
		cout << "Element is not present in array!" << endl;

	return 0; 
}
