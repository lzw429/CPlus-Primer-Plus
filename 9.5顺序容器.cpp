//重写上一题的函数，返回一个迭代器指向找到的元素。注意，程序必须处理未找到给定值的情况。
#include<iostream>
#include<vector>
using namespace std;

int find_value(vector<int>vec,int n)
{
	auto begin = vec.begin();
	auto end = vec.end();
	while(begin!=end)
	{
		if (*begin == n)
			return *begin;
		else
			++begin;
	}
	return 0;
}

int main()
{
	vector<int>vec = { 1,2,3,4,5,6,18 };
	for(int i=0;i!=vec.size();++i)
	{
		cout << vec[i] << " ";
		cout << endl;
	}

	cout << find_value(vec, 7) << endl;
	cout << find_value(vec, 8) << endl;
	return 0;
}
