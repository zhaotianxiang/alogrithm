#include<iostream>

using namespace std;

class Solution
{
public:
	// this out of time
	int Fibonacci(int n) 
	{
		if(n == 0)
			return 0;
		if(n == 1)
			return 1;
		return Fibonacci(n-1)+Fibonacci(n-2);
    }

    // this is a math formule
    // calc the An = ...
    int FibonacciSimplify(int n)
    {
    	if(n == 0)
			return 0;
		if(n == 1)
			return 1;
        int a = 0,b = 1;
        int m = 0;
        int i;
        for(i = 2;i <= n;i++){
            m = a + b;
            a = b;
            b = m;
        }
        return m;
    }
	
};