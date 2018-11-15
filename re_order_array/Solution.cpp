#include<iostream>

using namespace std;

class Solution
{
public:
	/**
	 * 输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部.
	 * 所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
	 * @param array [description]
	 */
	void reOrderArray(vector<int> &array) {
		int left = 0;
		int right = 0;

		while(right < array.size())
		{
			if(array[right] % 2 == 1)
			{
				//suitable
				right++;
			}
			if(array[left] % 2 == 1)
			{
				left ++;
			}
			else if(array[right] % 2 == 0)
			{
				//no
				while(array[right] % 2 == 0)
					right++;
				rightShiftOne(array, left, right);
				left++;
				right++;
			}
		}
	}
	void rightShiftOne(vector<int> &v, int left, int right)
	{
		for(int i = right-1; i >= left; i--)
		{
			v[i+1] = v[i];
		}
	}
};