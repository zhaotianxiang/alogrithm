#include<iostream>

using namespace std;

// how to do?
class Solution {

public:
/**
 * [一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。]
 * @param  n [description]
 * @return   [description]
 */
    int jumpFloor(int n) 
    {
    	if(n <1)
    		return -1; // wrong ret
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;

        return jumpFloor(n-1)+jumpFloor(n-2);
    }
/**
 * [一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。]
 * @param  n [台阶]
 * @return   [跳法]
 */
    int jumpFloorII(int n) 
    {
    	if(number==0)
            return 0;
        int total=1;
        for(int i=1;i<number;i++)
            total*=2;
        return total;
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