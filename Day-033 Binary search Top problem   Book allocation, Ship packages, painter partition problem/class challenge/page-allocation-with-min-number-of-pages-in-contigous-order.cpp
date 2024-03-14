/*  
Question:-
----------
Page Allocation of the min page with the contigous allocation of the pages (min)


*/

#include<iostream>
using namespace std;

// start would be
int startElement(int arr[], int n){
  int start = arr[0];    // start
  for (int i = 0; i < n; i++){
    if(arr[i] > start){
      start = arr[i];
    }
  }
  return start;
}

// end would be
int endElement(int arr[], int n){
  int end = 0;      // end -> would be sum of the element that are present into the array
  for (int i = 0; i < n; i++){
    end += arr[i];
  }
  return end;
}
int pageAllocation(int arr[], int n, int m){
  int ans=0;
  int start =  startElement(arr, n);
  int end =  endElement(arr, n);

  // cout << "start : " << start << endl;
  // cout << "end : " << end << endl;

  while(start <= end){
    int mid = start + (end-start)/2;
    int count = 1, page = 0;   // page is the number of pages that can be allocated at a time.
    for (int i = 0; i < n; i++){
      page += arr[i];
      if(page > mid){
        count++;
        //cout << "Allocating " << page-arr[i] << " pages to student " << count - 1 << endl;
        page = arr[i];
      }
    }

    if(count <= m){
      ans = mid;
      cout << "Count: " << count << " Mid: " << mid << " (ans updated)" << endl;
      end = mid-1;
    } else {
      cout << "Count: " << count << " Mid: " << mid << " (ans not updated)" << endl;
      start = mid + 1;
    }
  }
  return  ans;
}
int main() {
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the Number of pages into the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int m;
  cout << "Enter the number of student to distribute to: ";
  cin >> m;

  // Function to Distribute the number of pages to the student 
  int res =  pageAllocation(arr, n, m);
  cout << "Result: " <<res;

  return 0;
}


/*  
Output:-
---------
Enter the size of the array: 5
Input the Number of pages into the array: 19 9 30 22 7
Enter the number of student to distribute to: 4
Result: 30


Enter the size of the array: 4
Input the Number of pages into the array: 12 34 67 90
Enter the number of student to distribute to: 2
Result: 113



Enter the size of the array: 4
Input the Number of pages into the array: 12 34 67 90
Enter the number of student to distribute to: 2
Allocating 113 pages to student 1
Count: 2 Mid: 146 (ans updated)
Allocating 113 pages to student 1
Count: 2 Mid: 117 (ans updated)
Allocating 46 pages to student 1
Allocating 67 pages to student 2
Count: 3 Mid: 103 (ans not updated)
Allocating 46 pages to student 1
Allocating 67 pages to student 2
Count: 3 Mid: 110 (ans not updated)
Allocating 113 pages to student 1
Count: 2 Mid: 113 (ans updated)
Allocating 46 pages to student 1
Allocating 67 pages to student 2
Count: 3 Mid: 111 (ans not updated)
Allocating 46 pages to student 1
Allocating 67 pages to student 2
Count: 3 Mid: 112 (ans not updated)
Result: 113
*/




/*  
Leetcode Solution:-
-----------------------
C++
----
class Solution {
public:
    int startElement(vector<int>& arr, int n) {
        int start = arr[0];
        for(int i = 0; i < n; i++) {
            if(arr[i] > start) {
                start = arr[i];
            }
        }
        return start;
    }

    int endElement(vector<int>& arr, int n) {
        int end = 0;
        for(int i = 0; i < n; i++) {
            end += arr[i];
        }
        return end;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();    // size
        int ans = 0;
        int start = startElement(nums, n);
        int end = endElement(nums, n);

        while(start <= end){
            int mid = start + (end-start)/2;
            int count = 1, page = 0;
            for(int i=0; i<n; i++){
                page += nums[i];
                if(page>mid){
                    count++;
                    page = nums[i];
                }
            }
            if(count <= k){
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};




Java
----
class Solution {

    int startElement(int[] arr, int n){
        int start = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i] > start){
                start = arr[i];
            }
        }
        return start;
    }

    int endElement(int arr[], int n){
        int end = 0;
        for(int i=0; i<n; i++){
            end += arr[i];
        }
        return end;
    }

    public int splitArray(int[] nums, int k) {
        int n = nums.length, ans = 0;
        int start = startElement(nums, n);
        int end = endElement(nums, n);

        while(start <= end){
            int mid = start + (end-start)/2;

            int count = 1, page = 0;
            for(int i=0; i<n; i++){
                page += nums[i];
                if(page > mid){
                    count++;
                    page = nums[i];
                }
            }
            if(count <= k){
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
}

*/







/*  

Book Allocation Question from  GFG:-
------------------------------------
Java:-
--------

class Solution 
{
    // Function to return the start element
    static int startElement(int A[], int n){
        int start =  A[0];
        for(int i=0; i<n; i++){
            if(A[i] > start){
                start = A[i];
            }
        }
        return start;
    }
    // Function to return the end element
    static int endElement(int A[], int n){
        int end =  0;
        for(int i=0; i<n; i++){
            end += A[i];
        }
        return end;
    }
    
    //Function to find minimum number of pages.
    public static int findPages(int A[],int N,int M) 
    {
       // Check if the  number of book is less than the number of students
       if(N < M)
        return -1;
        
        
       int start =  startElement(A, N);
       int end =  endElement(A, N);
       int ans = -1;
       
       while(start <= end){
           int mid = start + (end-start)/2;
           int count = 1, pages = 0;
           for(int i=0; i<N; i++){
               pages += A[i];
               if(pages > mid){
                   count++;
                   pages = A[i];
               }
           }
           // Check for the count variable
           if(count <= M){
               ans = mid;
               end = mid - 1;
           } else {
               start = mid + 1;
           }
       }
       return ans;
    }
};





C++
-----
class Solution 
{
    public:
    
    // Function to return the start element
    int startElement(int A[], int n){
        int start =  A[0];
        for(int i=0; i<n; i++){
            if(A[i] > start){
                start = A[i];
            }
        }
        return start;
    }
    // Function to return the end element
    int endElement(int A[], int n){
        int end =  0;
        for(int i=0; i<n; i++){
            end += A[i];
        }
        return end;
    }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
       // Check if the  number of book is less than the number of students
       if(N < M)
        return -1;
        
        
       int start =  startElement(A, N);
       int end =  endElement(A, N);
       int ans = -1;
       
       while(start <= end){
           int mid = start + (end-start)/2;
           int count = 1, pages = 0;
           for(int i=0; i<N; i++){
               pages += A[i];
               if(pages > mid){
                   count++;
                   pages = A[i];
               }
           }
           // Check for the count variable
           if(count <= M){
               ans = mid;
               end = mid - 1;
           } else {
               start = mid + 1;
           }
       }
       return ans;
    }
};

*/