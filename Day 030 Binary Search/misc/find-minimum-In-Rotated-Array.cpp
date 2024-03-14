
/* 
Question: 
Find Minimum in Rotated Array using the Binary Search 
*/

#include<iostream>
using namespace std;

int minimumElementInRoatedArray(int arr[], int n){
    int start = 0, end = n-1, mid, ans = arr[0];

    while(start <= end){
        mid = start + (end-start)/2;

        // if(arr[mid] > arr[0]){
        //     // that means left part of the array is sorted and minimum element would be present at the right side of the array
        //     start = mid + 1;
        // } else if(arr[mid] < arr[0]){
        //     // that store the current minimum and looking for next min ele, here right part of the array is sorted and minimum element would be present at the left side of the array
        //     ans = arr[mid];
        //     end = mid - 1;
        // } else if(arr[mid] == arr[0]){
        //     start = mid + 1;
        // }


        // OR
        // if arr[mid] is greater than or equals to the arr[0] that means left side array is sorted and need to search the in right side
        if(arr[mid] >= arr[0]){
            // that means left part of the array is sorted and minimum element would be present at the right side of the array
            start = mid + 1;
        } else{
            // that store the current minimum and looking for next min ele, here right part of the array is sorted and minimum element would be present at the left side of the array
            ans = arr[mid];
            end = mid - 1;
        }

    }

    return ans;
}

int main() {
    int arr[1000];

    int n;

    cout << "Enter the size of the array:";
    cin >> n;

    cout << "Input the elements into the array:";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // findMinimumInRotatedArray
    int minimumElement = minimumElementInRoatedArray(arr,n);
    cout << "Find Minimum in Rotated array: " << minimumElement << endl; 
    
    return 0;
}


/*  
Output:-
--------
Enter the size of the array:2
Input the elements into the array:2 1
Find Minimum in Rotated array: 1


Enter the size of the array:6
Input the elements into the array:1 2 3 4 5 6
Find Minimum in Rotated array: 1
*/