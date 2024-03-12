#include<iostream>
using namespace std;
int searchInRotatedSortedArray(int arr[], int target, int n){
    int start = 0, end = n-1, mid, ans = -1;

    while(start <= end){
        mid = start + (end-start)/2;

        // Element found
        if(arr[mid] == target)
            return mid;
        // Left side array's part is sorted
        else if(arr[mid] >= arr[0]) {
            // Check if target is leis between it or not, i.e. it is ready to go left side too
            if(arr[start] <= target && arr[mid] > target){
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        // Right side array's part is sorted
        else {
            // Check if target is leis between it or not, i.e. it is ready to go right side too
            if(arr[mid] < target && arr[end] >= target){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    int arr[1000];
    
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    // input the elements into the array
    cout << "Input the elements into the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    cout << "Enter the target element:";
    cin >> target;
    

    // Function call
    int res = searchInRotatedSortedArray(arr, target, n);
    cout << "Target Element at index: " << res << endl;


    return 0;
}



/*  
Output:-
---------
Enter the size of the array: 7
Input the elements into the array: 4 5 6 7 0 1 2
Enter the target element:4
Target Element at index: 0


Enter the size of the array: 7
Input the elements into the array: 4 5 6 7 0 1 2
Enter the target element:7
Target Element at index: 3



Enter the size of the array: 7
Input the elements into the array: 4 5 6 7 0 1 2
Enter the target element:8
Target Element at index: -1

*/