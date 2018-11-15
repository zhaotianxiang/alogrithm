#include<iostream>

using namespace std;

class Solution
{
public:
	/**
	 * 输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
	 * 补码就是将该数字作比特反相运算（即反码），再将结果加1
	 *     0011 ( 3)
	 *   + 1111 (-1)
	 *  --------------
	 *    10010 ( 2)
	 * @param  n [input number]
	 * @return   [cout of 1]
	 */
	int  NumberOf1(int n)
	{
		if (n == 0)
			return 0;
		if (n > 0)
			return numOfPositive(n);
		if (n < 0)
		{
			n = n * (-1);
			return numOfPositive(n) + 1;
		}
		return 0;
	}

	int numOfPositive(int n)
	{
		if (n == 0)
			return 0;
		if (n == 1)
			return 1;
		if (n % 2 == 1)
			return 1 + numOfPositive(n / 2);
		if (n % 2 == 0)
			return 0 + numOfPositive(n / 2);
	}
	/**
	 * answer
	 * @param  n [description]
	 * @return   [description]
	 */
	int  NumberOf1II(int n)
	{
		int count = 0;
		unsigned int mask = 1;
		while (mask)
		{
			if (n & mask)
			{
				count++;
			}
			mask = mask << 1;
		}
		return count;
	}

};