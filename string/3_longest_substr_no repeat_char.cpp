class Solution {
public:
    // hash O(n^2)
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        for(int i = 0; i< s.size();i++){
            unordered_set<char> set;
            int sub_max = 0;
            for(int j = i; j < s.size(); j++){
                if(set.find(s[j]) != set.end()){
                    break;
                } else {
                    set.insert(s[j]);
                    sub_max++;
                }
            }
            if(sub_max > max){
                max = sub_max;
            }
        }
        
        return max;
    }
};

class Solution {
public:
    // slide window optimized hash O(n))
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash_map;
        int ans = 0;
        int left = 0;
        for(int right = 0; right< s.size();right++){
            if(hash_map.find(s[right]) != hash_map.end()){
                // found, move left
                left = max(hash_map[s[right]], left);
            }
            ans = max(ans, right - left + 1);
            hash_map[s[right]] = right + 1;
        }
        
        return ans;
    }
};