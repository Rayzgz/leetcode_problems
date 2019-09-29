class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums(nums1.size() + nums2.size());
        int a = nums1.size() - 1, b= nums2.size() - 1;
        int i = a + b+ 1;
        while(a>=0 || b>=0){
            if(a < 0){
                nums[i] = nums2[b];
                b--;
            } else if(b < 0){
                nums[i] = nums1[a];
                a--;
            } else if(nums1[a] < nums2[b]){
                nums[i] = nums2[b];
                b--;
            } else {
                nums[i] = nums1[a];
                a--;
            }
            i--;
            if(i < 0){
                break;
            }
        }
        int size = nums.size();
        if(size == 1){
            return nums[0];
        }
        for(auto it : nums){
            cout <<it<<" ";
        }
        double med = size %2 == 1 ? nums[size/2]: (nums[size/2] + nums[size/2 - 1])/2.0; 
        return med;
    }
};