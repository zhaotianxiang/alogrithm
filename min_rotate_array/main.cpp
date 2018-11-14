#include"Solution.cpp"
int main()
{
	std::vector<int> v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(3);
	Solution s;
	int result = s.minNumberInRotateArray(v);
	cout << result << endl;
	return 0;
}