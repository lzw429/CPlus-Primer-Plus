/*
重写统计长度小于等于6的单词数量的程序，使用函数代替lambda。
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>

using namespace std;

bool checkSize(const string& s, string::size_type size)
{
	return s.size() <= size;
}

int main()
{
	vector<string> vec = {"the", "quick", "According", "jumps", "over", "the", "slow", "red", "turtle","environment"};
	auto checkSize6 = bind(checkSize, placeholders::_1, 6); //_1是占位符。
	auto count = count_if(vec.begin(), vec.end(), checkSize6);
	cout << "长度不大于6的单词数量为：" << count << endl;
	return 0;
}
