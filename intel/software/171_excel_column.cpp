class Solution {
public:
    int titleToNumber(string s) {
        int column = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            column += pow(26, s.size() - i - 1)* int(s[i] - 'A' + 1);
        }
        return column;
    }
};