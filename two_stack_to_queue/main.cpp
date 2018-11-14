#include<iostream>
#include"solution.cpp"

int main()
{
	Solution solution;
	solution.push(2);
	solution.push(3);
	cout << solution.pop()<< endl;
	cout << solution.pop()<< endl;
	return 0;
}
