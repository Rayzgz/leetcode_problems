class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool up_digit = false;
        for(auto it = digits.end() - 1; it >= digits.begin(); it--){
            (*it)++;
            if(*it == 10){
                *it = 0;
                if(it == digits.begin()){
                    up_digit = true;
                }
            } else {
                break;
            }
        }
        if(up_digit){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};