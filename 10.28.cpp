/*
 一个vector中保存1到9，将其拷贝到三个其它容器中。
分别使用inserter、back_inserter和front_inserter将元素添加到三个容器中。
对每种inserter，估计输出序列是怎么样的，运行程序验证你的估计是否正确。
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
	deque<int>deque;//双向队列

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
