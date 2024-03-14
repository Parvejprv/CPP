/*  
Question:-  Write a Program to find the peak element of the given array using the binary search.

int arr[] = {2, 3, 4, 10, 8, 9};

*/

#include<iostream>
using namespace std;
int peakIndexInMountainArray(int arr[], int n){
    int start = 0, end = n-1;

    while(start <= end){
        int mid = end + (start-end)/2;

        // peak element
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }
        // Less than peak element, then go right side
        else if(arr[mid] < arr[mid-1]){
            start = mid + 1;
        }
        // Greater than the peak element, then go left side
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[1000];

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Input the elements into the array
    cout << "Enter the element of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }



    // Find the peak index of the mountain array
    int res = peakIndexInMountainArray(arr, n);
    cout << "peak element index in mountain array is: " << res ;
    return 0;
}




/*  
Output:-
----------
Enter the size of the array: 5
Enter the element of the array: 2 4 10 6 8
peak element index in mountain array is: 2


Enter the size of the array: 6
Enter the element of the array: 1 2 3 7 5 6
peak element index in mountain array is: 3


Enter the size of the array: 6
Enter the element of the array: 4 6 8 10 1 2
peak element index in mountain array is: 3
*/
