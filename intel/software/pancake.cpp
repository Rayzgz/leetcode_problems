// The main function that  
// sorts given array using  
// flip operations 
int pancakeSort(int *arr, int n) 
{ 
    // Start from the complete 
    // array and one by one  
    // reduce current size  
    // by one 
    for (int curr_size = n; curr_size > 1; --curr_size) 
    { 
        // Find index of the  
        // maximum element in  
        // arr[0..curr_size-1] 
        int mi = findMax(arr, curr_size); 
  
        // Move the maximum 
        // element to end of  
        // current array if 
        // it's not already 
        // at the end 
        if (mi != curr_size-1) 
        { 
            // To move at the end, 
            // first move maximum  
            // number to beginning  
            flip(arr, mi); 
  
            // Now move the maximum  
            // number to end by  
            // reversing current array 
            flip(arr, curr_size-1); 
        } 
    } 
} 