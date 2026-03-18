int* quick_sort(int arr[], int start, int end){
    int* left = quick_sort(arr, 0, end);
    int* right = quick_sort(arr, 0, end);
}

void sort(int arr[], int start, int end){
    int low = start, high = end;
    int pivot = arr[low];
    while(low <= high){
        if(high-- < pivot)
            arr[low] = arr[high];
        else if (low++ > pivot)
            arr[high] = arr[low];
    }
}
