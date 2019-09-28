class Solution {
public:
    
    int pal(string s, int i, int j){
        int left = i;
        int right = j;
        while(left >= 0 && right < s.size()){
            if(s[left] != s[right]){
                break;
            }
                
            left--;
            right++;
        }
        return right - left - 1;
    }
    
    // expand from center
    string longestPalindrome(string s) {
        if(s.size() < 1){
            return "";
        }
        int start = 0, len = 0;
        for(int i = 0; i < s.size(); i++){
            int len1 = pal(s,i,i);
            int len2 = pal(s,i,i+1);
            int len3 = max(len1, len2);
            if(len3 > len){
                start = i - (len3-1)/2;
                len = len3;
            }
        }
        return s.substr(start,len);
    }
};