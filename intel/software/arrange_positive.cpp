Q:  An array contains some random positive and negative  numbers. 
    Arrange array elements such that all positive elements are on left side, 
    dont care about negative elements. 
    Number of operations allowed - O(n)

A: use quicksort in a simple version
    pick 0 as pivot
    append 0 to the array
    apply quicksort and iterate only once
