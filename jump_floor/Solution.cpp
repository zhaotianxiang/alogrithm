#include<iostream>

using namespace std;

// how to do?
class Solution {

public:

    int jumpFloor(int n) {
    	if(n <1)
    		return -1; // wrong ret
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        if(n >= 3)
        {
        	int count = 0;
        	count = 
        }
    }

    int C(int M,int N)
    {// Math
        int m = 1;
        int n = 1;
        for(int i = N; i>0; i--)
        {
            m = m*i;
            n = n*(M-(N-i));
        }
        return n/m;
    }
};