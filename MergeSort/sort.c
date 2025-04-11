void swap(int arr[], int pos1, int pos2){
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;

    return;

}

void printarray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
}

void merge(int arr[], int left, int mid, int right){
    int track = mid;
    int temp;
    while (left < right)
    {

        if (arr[track] < arr[mid])
        {
            if (arr[track] < arr[left])
            {

                swap(arr, track, left);

                if (track < right)
                {
                    track++;
                }
                
            }
            left++;
            
        }
        else{
            if (arr[mid] < arr[left])
            {

                swap(arr, mid, left);

                if (mid < right)
                {
                    mid++;
                }
                
            }
            left++;
            
        }
        
        
    }
    
}



void mergesort(int arr[], int left, int right){
    if (left >= right){
        return;
    }

    int mid = (left + right)/2;

    mergesort(arr, left, mid);
    mergesort(arr, mid+1, right);

    merge(arr, left, mid+1, right);


}




