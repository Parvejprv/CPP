/*  
Question:- Search in a Sorted Rotated array.


*/

#include<iostream>
using namespace std;
int rotatedArray(int arr[], int n){
    int start = 0, end = n-1, mid, ans = arr[0];

    while(start <= end){
        mid = start + (end-start)/2;
        
        // Method 1.
        // // Left side sorted, when arr[mid] is greater than the arr[0] || arr[0] < arr[mid]
        // if(arr[mid] > arr[0]){
        //     start = mid + 1;
        // }
        // // right side sorted, when arr[mid] is less than the arr[0] || arr[0] > arr[mid]
        // else if(arr[mid] < arr[0]){
        //     ans = arr[mid];
        //     end = mid - 1;
        // }
        // // arr[mid] == arr[0]
        //  else {
        //     start = mid +1;
        // }


        // Method 2.
        // here if arr[mid]>arr[0] that means array left side ko sorted hai,
        // if(arr[mid] > arr[0]){
        //     start = mid + 1;
        // } else if(arr[mid] < arr[0]){
        //     ans = arr[mid];
        //     end = mid - 1;
        // } else if(arr[mid] == arr[0]) {
        //     start = mid + 1;
        // }


        // Method 3. Here if the arr[mid] >= arr[0], that means left side part is sorted and need to move to the rigth side (i.e. start = mid + 1), otherwise arr[mi]<arr[0] and in such a case and check for the min ele

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        } else{
            ans = arr[mid];
            end = mid - 1;
        }
    }

    return ans;
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

    // rotatedArray
    int res = rotatedArray(arr, n);
    cout << "Minimum element: " << res << endl;

    return 0;
}



/*  
Output:-
--------
Enter the size of the array: 6
Enter the element of the array: 1 2 3 4 5 6
Result: 1


Enter the size of the array: 6
Enter the element of the array: 4 6 8 0 1 2
Result: 0

Enter the size of the array: 6
Enter the element of the array: 4 6 8 10 1 2
Result: 1


Enter the size of the array: 6
Enter the element of the array: 4 6 8 10 0 1
Result: 0

Enter the size of the array: 5    
Enter the element of the array: 2 3 0 1 4
Minimum element: 0


Enter the size of the array: 6
Enter the element of the array: 4 6 8 0 1 2
Minimum element: 0


Enter the size of the array: 5
Enter the element of the array: 2 3 0 1 4
Minimum element: 0

*/