/*
 *����һ������10��Ԫ�ص�vector����λ��3��7֮���Ԫ�ذ����򿽱���һ��list�С�
 */

#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<iterator>

using namespace std;

int main()
{
	vector<int>vec = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };
	list<int>intlist;
	ostream_iterator<int>out_iter(cout, " ");

	cout << "vec�е�ֵΪ";
	copy(vec.cbegin(), vec.cend(), out_iter);//��vec�е�Ԫ�ؿ������������
	cout << endl;

	auto reverseBegin = vec.rbegin() + 3;//λ��7
	auto reverseEnd = vec.rend() - 2;//λ��3
	for(;reverseBegin!=reverseEnd;++reverseBegin)
		intlist.push_back(*reverseBegin);

	cout << "intlist�е�ֵΪ";
	copy(intlist.cbegin(), intlist.cend(), out_iter);
	cout << endl;

	return 0;
}
