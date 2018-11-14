#include<iostream>

using namespace std;

class Solution
{
public:
	/**
	 * 我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。
	 * 请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？
	 * 1. n=1     .....   1
	 * 2. n=2     .....   2
	 * 3. n=3     .....   3
	 * ....       .....   ..
	 * 
	 * @param  n [description]
	 * @return   [description]
	 */
	int rectCover(int n)
	{
		if(n == 0)
			return 0;
		if(n == 1)
			return 1;
		if(n == 2)
			return 2;
		return rectCover(n-2)+rectCover(n-1);

	}
	
};