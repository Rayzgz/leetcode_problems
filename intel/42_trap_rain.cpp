class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() == 0){
            return 0;
        }
        
        vector<int> left(height.size()), right(height.size());
        int cur_height = 0;
        for(int i = 0; i < height.size();i++){
            if(cur_height > height[i]){
                left[i] = cur_height - height[i];
            } else {  
                cur_height = height[i];
                left[i] = 0;
            }
        }
        cur_height = 0;
        for(int i = height.size() - 1; i >= 0; i--){
            if(cur_height > height[i]){
                right[i] = cur_height - height[i];
            } else {  
                cur_height = height[i];
                right[i] = 0;
            }
        }
        int total_area = 0;
        for(int i = 0; i< left.size();i++){
            total_area += min(left[i],right[i]);
        }
        return total_area;
        
    }
};