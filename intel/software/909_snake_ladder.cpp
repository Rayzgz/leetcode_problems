class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        
        // make into 1D
        vector<int> board2;
        bool left = true;
        for(int i = board.size()-1; i >=0;i--){
            
            int start = left ? 0 : board[i].size() - 1;
            int end = left ? board[i].size() : -1;
            int inc = left ? 1 : -1;
            
            for(int j = start; j != end;j += inc){
                int num = board[i][j] == -1 ? -1 : board[i][j] - 1;
                board2.push_back(num);
            }
            left = !left;
        }

        // create queue, map
        queue<int> squares;
        squares.push(0);
        unordered_map<int,int> distance;
        distance[0] = 0;
        
        while(!squares.empty()){
            int s = squares.front();
            squares.pop();
            
            // reached end
            if(s == board2.size() - 1){
                return distance[s];
            }
            
            // enumerate possible moves at this point
            int size = board2.size() - 1;// 35
            for(int s2 = s+1; s2 <= min(size,s+6) ;s2++){
                int s2_final = board2[s2] < 0 ? s2 : board2[s2];
                if(distance.find(s2_final) == distance.end()){
                    distance[s2_final] = distance[s] + 1;
                    squares.push(s2_final); 
                }
            }
            
        }
        
        return -1;
    }
};