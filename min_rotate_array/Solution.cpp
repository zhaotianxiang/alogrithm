#include<iostream>
#include<vector>
/**
 * one rotateArray split in center 
 * you got one order array and one rotate array
 */
using namespace std;

class Solution
{
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		return min(rotateArray, 0, rotateArray.size() - 1);
	}

	int min(vector<int> v, int low, int high)
	{
		// has only one emements
		if(high == low)
		{
			return v[high];
		}
		// has two elements
		if(high - low == 1)
		{
			return v[high]>v[low]?v[low]:v[high];
		}

		// has three+
		if(high - low > 1)
		{
			int middle = (high + low) / 2;

			// binary 
			if (v[low] <= v[middle] && v[middle] <= v[high])
			{// all order
				return v[low];
			}
			else if(v[low] <= v[middle] && v[middle] > v[high])
			{// lef is order
				return min(v,middle,high);
			}
			// right is order
			return min(v, low, middle);
		}
		// some wrong happen
		return -1
	}

};