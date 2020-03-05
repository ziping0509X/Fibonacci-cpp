#include <iostream>

using namespace std;

class Solution {
public:
    int Fibonacci(int n) {
        if(n==0)
            return 0;
        if(n==1||n==2)
            return 1;
        if(n>2){
            int Fibonacci[n+1];
            Fibonacci[0]=0;
            Fibonacci[1]=1;
            Fibonacci[2]=1;
            for(int i=3;i<=n;i++){
                Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
            }
            return Fibonacci[n];
        }
    }
};

class Solution2 {
public:
    int Fibonacci(int n) {
       if(n==0)
           return 0;
       if(n==1)
           return 1;
       if(n>1)
           return Fibonacci(n-1)+Fibonacci(n-2);
    }
};

int main(void){
    int n=5;
    Solution2 solution;
    cout<<solution.Fibonacci(n)<<endl;
    }

//调试成功！但是存疑：if（n==1||n==2）在牛客网报错