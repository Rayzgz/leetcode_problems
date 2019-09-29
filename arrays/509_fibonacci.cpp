class Solution {
public:
    int fib(int N) {
    if(N < 2) 
        return N;
    int a = 0, b = 1, c = 0;

    // store only fib(N-1) and fib(N-2) in each iteration
    // fib(N-2) = a, fib(N-1) = b, c = fib(N) = a + b
    for(int i = 1; i < N; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
    }
};

class Solution {
public:
    unordered_map<int,int> fib_num;
    
    int fib(int N) {
        if(N == 0){
            return 0;
        }
        if(N == 1){
            return 1;
        }
        if(fib_num.find(N) != fib_num.end()){
            return fib_num[N];
        } else{
            int num = fib(N-1) + fib(N-2);
            fib_num[N] = num;
            return num;
        }
    }
};