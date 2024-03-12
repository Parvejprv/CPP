#include<iostream>
using namespace std;

// startElement
int startElement (int arr[], int n){
  int start = 0;
  for(int i=0; i<n; i++){
    if(arr[i] > start){
      start = arr[i];
    }
  }
  return start;
}

// endElement
int endElement (int arr[], int n){
  int end = 0;
  for (int i = 0; i < n; i++){
    end += arr[i];
  }
  return end;
}

int pageAllocationBetweenMStudent(int arr[], int n, int m){
  int start = startElement(arr,n), 
  end = endElement(arr,n);
  int ans = -1;
  
  cout << "start=" << start << endl;
  cout << "end=" << end << endl;

  while(start <= end){
    int mid = start + (end-start)/2;
    int count = 1, page = 0;    // initially
    
    // run a loop till the number of array
    for(int i=0; i<n; i++){
      page += arr[i];
      if(page > mid){
        count ++;   // chance to give the pages to next student, and assign them the number of pages
        page = arr[i];
      }
    }

    // Check if the count is equals to m
    if(count <= m){
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }

  }
  return ans;
}

int main() {
  int arr[1000];

  int n;      // size of the array
  cout << "Enter the size of the array: ";
  cin >> n;

  // n elements input into the array,
  cout << "Input the Number of pages into the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Enter the number of m students
  int m;
  cout << "Enter the number of student to distribute to: ";
  cin >> m;

  // Function to Distribute the number of pages to the student 
  int pageAlloactionRes = pageAllocationBetweenMStudent(arr, n, m);
  cout << "Page allocation result: " << pageAlloactionRes;
  
  return 0;

}


/*  
Output:-
-----------
Enter the number of student to distribute to: 2
start=90
end=203
Page allocation result: 113


Enter the size of the array: 3
Input the Number of pages into the array: 15 17 20
Enter the number of student to distribute to: 2
start=20
end=52
Page allocation result: 32
*/
















/* 
Java Solution:-
----------------

class BookAllocationPage 
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

*/