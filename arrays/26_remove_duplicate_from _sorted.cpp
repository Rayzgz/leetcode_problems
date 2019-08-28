class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // base case: empty array
        if(nums.size() == 0){
            return 0;
        }
        
        // loop until second last element
        for(int i = 0; i < nums.size() - 1; i++){
            
            // check next element
            int j = i + 1;
            while(nums[j] == nums[i]){
                nums.erase(nums.begin() + j);
                
                // check out of bound
                if(j >= nums.size()){
                    break;
                }
            }
            
        }
        
        return nums.size();
    }
};