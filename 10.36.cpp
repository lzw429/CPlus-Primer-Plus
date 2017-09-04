/*
 使用find在一个int的list中查找最后一个值为0的元素。
*/

#include<iostream>
#include<iterator>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	list<int>listInt = { 1,2,3,4,5,6,7,8,9 };
	list<int>::const_reverse_iterator iter = find(listInt.crbegin(), listInt.crend(), 0);//逆向查找第一个为零的元素。
	cout << *iter << endl;
	
	return 0;
}