/*
给定一个string，使用bind和check_size在一个int的vector中查找第一个大于string长度的值。
*/

#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool checkSize(const string& s, string::size_type size)
{
	return s.size() < size;
}

vector<int>::const_iterator EqualSize(const vector<int>& vec, const string& s)
{
	auto iter = find_if(vec.begin(), vec.end(), bind(checkSize, s, _1));
	return iter;
}

int main()
{
	vector<int> vec = {1, 1, 2, 3, 5, 8 ,13};
	string str = "C++C++";
	auto iter = EqualSize(vec, str);
	if (iter == vec.cend())
	{
		cout << "未找到大于string长度的值." << endl;
	}
	else
	{
		cout << "vec中第一个大于str长度的值为" << *iter << endl;
	}
	return 0;
}
