int binarySearch(int arr[], int size, int target) {
    int start = 0; int end= size-1; int mid = start+(end-start)/2; 

            while(start<=end) {
              int element = arr[mid];
              if(element == target) {
                    return mid;
              }else if(arr[mid]<element) {
                end = mid-1;
              }else {
                start = mid+1;
              }
              int mid = start+(end-start)/2;
            }
        return -1;
}