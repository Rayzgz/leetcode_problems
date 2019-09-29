class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            int target = -nums[i];
            int front = i + 1;
            int back = nums.size() - 1;
            while(front < back){
                int sum = nums[front] + nums[back];
                if(sum > target){
                    // smaller
                    back--;
                } else if(sum < target){
                    // bigger
                    front++;
                } else {
                    // found
                    vector<int> v = {nums[i],nums[front],nums[back]};
                    result.push_back(v);
                    
                    // skipp all same front
                    while(front < back && nums[front] == v[1]){
                        front++;
                    }
                    
                    // skip all same back
                    while(front < back && nums[back] == v[2]){
                        back--;
                    }
                }
            }
            
            // skip all same first number
            while(i+1 < nums.size()){
                if(nums[i+1] == nums[i]){
                    i++;
                } else {
                    break;
                }
            }
            
        }
        return result;
    }
};