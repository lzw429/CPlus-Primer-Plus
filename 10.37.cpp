/*
 *给定一个包含10个元素的vector，将位置3到7之间的元素按逆序拷贝到一个list中。
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

	cout << "vec中的值为";
	copy(vec.cbegin(), vec.cend(), out_iter);//将vec中的元素拷贝到输出流中
	cout << endl;

	auto reverseBegin = vec.rbegin() + 3;//位置7
	auto reverseEnd = vec.rend() - 2;//位置3
	for(;reverseBegin!=reverseEnd;++reverseBegin)
		intlist.push_back(*reverseBegin);

	cout << "intlist中的值为";
	copy(intlist.cbegin(), intlist.cend(), out_iter);
	cout << endl;

	return 0;
}
