/*
使用普通迭代器逆序打印一个vector。
*/

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
	vector<int>vec={1,2,3,4,5,6,7,8,9};
	vector<int>::iterator vec_it=vec.end();//不能是cend。
	do
	{
		vec_it--;
		cout<<*vec_it<<" ";
	}
	while(vec_it!=vec.cbegin());
	cout<<endl;

	return 0;
}
