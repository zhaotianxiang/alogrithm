#include<iostream>
#include<stack>

using namespace std;
/**
 * 主要思想：
 * 1: 一个栈用来当队列， 一个栈用来逆序 
 * 2: 注意C++栈的pop操作不会返回任何值
 */
class Solution
{
private:
	stack<int> stack1;
	stack<int> stack2;

public:
	void push(int node)
	{
		stack1.push(node);
	}

	int pop()
	{
		int temp = 0;
		while (!stack1.empty())
		{
			temp = stack1.top();
			stack1.pop();
			stack2.push(temp);
		}
		temp = stack2.top();
		stack2.pop();
		while (!stack2.empty())
		{
			int value = stack2.top();
			stack2.pop();
			stack1.push(value);
		}
		return temp;
	}
};