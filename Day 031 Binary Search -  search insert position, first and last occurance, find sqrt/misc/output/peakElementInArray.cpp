/*  
Question Using the Binary search.(Optimized Approach)
*/

#include<iostream>
using namespace std;
int peakElement(int arr[], int n){
	int start =0, end = n-1, mid;

	while(start <= end){
		mid = end + (start-end)/2;

		if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
			return arr[mid];
		} else if(arr[mid] > arr[mid-1]){
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}

	return -1;
}
int main() {
	int arr[1000];

	int n;
	cout << "Enter the size of the array:";
	cin >> n;

	// elements
	cout << "Enter the elements into the array: ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	// peak element in array
	int ans = peakElement(arr, n);
	cout << "Peak element in the array is: " << ans << endl;
	return 0;
}


/*  
Output:-
---------
Enter the size of the array:6
Enter the elements into the array: 1 2 3 4 5 6
Peak element in the array is: 6

Enter the size of the array:6
Enter the elements into the array: 2 4 8 10 8 5
Peak element in the array is: 10

Enter the size of the array:7
Enter the elements into the array: 2 4 6 8 10 1 3
Peak element in the array is: 10

Enter the size of the array:3  
Enter the elements into the array: 0 1 0
Peak element in the array is: 1


Enter the size of the array:4
Enter the elements into the array: 0 2 1 0 
Peak element in the array is: 2
*/









/*  
// Method 2. Using an vector.

#include<iostream>
#include<vector>
using namespace std;
int findPeak(vector<int>& arr){
	int n = arr.size();		// size of the vector
	// Check if the first and last element is peak
	if(n == 1 || arr[0] >= arr[1]){
		return arr[0];
	}
	if(arr[n-1] >= arr[n-2]){
		return arr[n-1];
	}

	// Check all Others elements
	for(int i=1; i<n-1; i++){
		if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
			return arr[i];
		}
	}

	return -1; 		// No peak found
}
int main() {
	
	// statically
	// vector<int> arr = {1, 3, 20, 4, 1};
	// cout << "Peak Element: " << findPeak(arr) << endl;	


	int n;
	cout << "enter the size of the vector:";
	cin >> n;

	vector<int> nums(n);
	cout << "Inputs the element into the vector: ";
	for(int i=0; i<n; i++){
		cin >> nums[i];
	}

	// function call to finding minimum
	cout << "Peak Element:" << findPeak(nums) << endl;

	return 0;
}

*/

/*  
Output:-
---------
enter the size of the vector:5
Inputs the element into the vector: 2 4 20 10 5
Peak Element:20

*/





















// Method 1. Using an Integer array.

/*  
#include<iostream>
using namespace std;
int findPeakEle(int arr[], int n){
	int max = arr[0];

	for(int i=0; i<n; i++){
		if(arr[i] > max)
		max = arr[i];
	}
	return max;
}

int main() {

	int arr[1000];
	
	int n;
	cout << "Enter the size of the array:";
	cin >> n;
	
	// elements into the array
	cout << "Input the elements into the array:";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	// Find the Peak elemnet in the integer array
	int peakElement = findPeakEle(arr, n);
	cout << "Peak Element: " << peakElement << endl;

	return 0;
}


*/





/*  
Output(Brute force approach):-

Enter the size of the array:5
Input the elements into the array:10 203  3 4 50
Peak Element: 203

Enter the size of the array:5
Input the elements into the array:2 4 10 1 3
Peak Element: 10

*/