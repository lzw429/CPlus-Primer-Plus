/*
 ʹ��find��һ��int��list�в������һ��ֵΪ0��Ԫ�ء�
*/

#include<iostream>
#include<iterator>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	list<int>listInt = { 1,2,3,4,5,6,7,8,9 };
	list<int>::const_reverse_iterator iter = find(listInt.crbegin(), listInt.crend(), 0);//������ҵ�һ��Ϊ���Ԫ�ء�
	cout << *iter << endl;
	
	return 0;
}