if(arr[mid] > arr[0]){
            // that means left part of the array is sorted and minimum element would be present at the right side of the array
            start = mid + 1;
        } else if(arr[mid] < arr[0]){
            // that store the current minimum and looking for next min ele, here right part of the array is sorted and minimum element would be present at the left side of the array
            ans = arr[mid];
            end = mid - 1;
        } else if(arr[mid] == arr[0]){
            start = mid + 1;
        }