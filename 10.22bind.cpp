/*
��дͳ�Ƴ���С�ڵ���6�ĵ��������ĳ���ʹ�ú�������lambda��
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
	auto checkSize6 = bind(checkSize, placeholders::_1, 6); //_1��ռλ����
	auto count = count_if(vec.begin(), vec.end(), checkSize6);
	cout << "���Ȳ�����6�ĵ�������Ϊ��" << count << endl;
	return 0;
}
