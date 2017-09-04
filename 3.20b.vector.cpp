//读入一组整数并把它们存入一个vector对象，要求先输出第一个和最后1个元素的和，接着输出第2个和倒数第2个元素的和，以此类推。
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int v1;
	vector<int>vec;
	while (cin >> v1)
		vec.push_back(v1);
	for (decltype(vec.size())i = 0; i != vec.size() - 1; ++i)
	{
		auto sum = vec[i] + vec[vec.size()-1-i];
		cout << sum << " ";
	}
	cout << endl;
	return 0;
}