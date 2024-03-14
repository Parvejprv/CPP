#include<iostream>
using namespace std;

int searchInRotatedArray(int arr[], int target, int n){
     int start = 0, end = n-1, mid, index = -1;

     while(start <= end){
        mid = start + (end-start)/2;

        // found 
        if(arr[mid] == target){
            index = mid;
            return index;
        }
        // left side array sorted, while arr[0] <= arr[mid] --> then check if target is lies between the arr[start] to arr[mid]
        else if(arr[mid] >=  arr[0]){
            if(arr[start] <= target && arr[mid] > target){
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } 
        // else, right side array sorted, while arr[0] > arr[mid], that means arr[mid] is less than the arr[0], and check if the target is lies between the arr[mid] to arr[end]
        // else if(arr[mid] < arr[0])
        else {
            if(arr[mid] < target && arr[end] >= target){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
     }
     return index;
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

    // target
    int target;
    cout << "Enter the target element: ";
    cin >> target;


    // Search in rotatedArray
    int res = searchInRotatedArray(arr, target, n);
    cout << "Result: " << res << endl;

    return 0;
}


/*  
Output:-
----------
Enter the size of the array: 4
Enter the element of the array: 2 4 0 1
Enter the target element: 1
Result: 3


Enter the size of the array: 5
Enter the element of the array: 2 4 0 1 3 
Enter the target element: 3
Result: 4
*/