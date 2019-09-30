find a missing element in array B compare to array A.

// XOR all elements from A,B, remianing value is missing value
vector<int> both = {A, B}
int val;
for( iterate through both){
    val = val^ cur
}
return val;