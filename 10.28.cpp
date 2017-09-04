/*
 һ��vector�б���1��9�����俽�����������������С�
�ֱ�ʹ��inserter��back_inserter��front_inserter��Ԫ����ӵ����������С�
��ÿ��inserter�����������������ô���ģ����г�����֤��Ĺ����Ƿ���ȷ��
*/

#include<iostream>
#include<iterator>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
	vector<int>vec = { 1,2,3,4,5,6,7,8,9 };
	list<int>list;
	string str="123456789";
	deque<int>deque;//˫�����

	copy(vec.cbegin(), vec.cend(),front_inserter(list));
	copy(vec.cbegin(), vec.cend(), back_inserter(str));
	copy(vec.cbegin(), vec.cend(), inserter(deque, deque.begin()));

	for_each(list.cbegin(), list.cend(), [](const int &num) {cout << num << " "; });
	cout << endl;
	for_each(str.cbegin(), str.cend(), [](const int &num) {cout << num << " "; });
	cout << endl;
	for_each(deque.cbegin(), deque.cend(), [](const int &num) {cout << num << " "; });
	cout << endl;

	return 0;
}
