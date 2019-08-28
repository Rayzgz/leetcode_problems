class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int size = nums.size();
        // empty array, 0
        if(size == 0){
            return 0;
        }
        
        // single element, at front or back of the single element
        if(size == 1){
            return target > nums[0] ? 1 : 0;
        }
        
        // greater than last element
        if(target > nums[size - 1]){
            return size;
        }
    
        // less than first element
        if(target < nums[0]){
            return 0;
        }
        
        // larger array
        int position = 0;
        for(int i = 0; i < size; i++){
            if(nums[i] == target){
                return i;
            }
            if(target < nums[i]){
                position = i;
                break;
            }

        }
        
        return position;
    }
};