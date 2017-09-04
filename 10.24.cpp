/*
����һ��string��ʹ��bind��check_size��һ��int��vector�в��ҵ�һ������string���ȵ�ֵ��
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
		cout << "δ�ҵ�����string���ȵ�ֵ." << endl;
	}
	else
	{
		cout << "vec�е�һ������str���ȵ�ֵΪ" << *iter << endl;
	}
	return 0;
}
