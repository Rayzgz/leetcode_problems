class Solution {
public:
    bool isHappy(int n) {
        vector<int> prev;
        return helper(n, prev);
    }
    
    bool helper(int n, vector<int>& prev){
        if(n == 1){
            return true;
        }
        
        vector<int> digits;
        int m = n;
        while(m > 0){
            digits.push_back(m % 10);
            m = (int) (m / 10);
        }
        int next = 0;
        for(int i = 0; i < digits.size(); i++){
            next += digits[i] * digits[i]; 
        }
        
        if(next == 1){
            return true;
        }
        
        if(find(prev.begin(), prev.end(), next) != prev.end()) {
            return false;
        }
        
        prev.push_back(next);
        
        return helper(next, prev);
    }
};