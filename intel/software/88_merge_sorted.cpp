class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m - 1;
        int b = n - 1;
        int i = m + n - 1;
        
        // if b is used up first, dont neet to change
        while(a >= 0 && b >= 0){
            if(nums1[a] > nums2[b]){
                nums1[i] = nums1[a];
                i--;
                a--;
            } else {
                nums1[i] = nums2[b];
                i--;
                b--;
            }
        }
        
        // if a used up first, copy b to rest
        while(b >= 0){
            nums1[i] = nums2[b];
            b--;
            i--;
        }
        
    }
};