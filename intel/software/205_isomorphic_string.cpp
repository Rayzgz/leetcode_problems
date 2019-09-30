class Solution {
public:
    
    // hash the forward and backward mappings
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> chars1;
        unordered_map<char, char> chars2;
        for(int i = 0; i < s.size(); i++){
            if(chars1.find(s[i]) == chars1.end()){
                if(chars2.find(t[i]) != chars2.end()){
                    if(chars2[t[i]] != s[i]){
                        return false;
                    }
                }
                chars1[s[i]] = t[i];
                chars2[t[i]] = s[i];
            } else {
                if(chars1[s[i]] != t[i]){
                    return false;
                }
            }
        }
        
        return true;
        
    }
};