vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> vect;
    for(int i = 0; i < nums.size();i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                vect.push_back(i);
                vect.push_back(j);
                return vect;
            }    
        }
    }
    
    return vect;
}

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int> hashmap;
    for(int i = 0; i < nums.size();i++){
        if(hashmap.find(target - nums[i]) != hashmap.end()){
            return vector<int> v{target-nums[i], nums[i]};
        }
        hashmap.insert(nums[i]);
    }
    
    return vect;
}