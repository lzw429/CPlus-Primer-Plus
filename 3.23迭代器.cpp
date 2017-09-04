//编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代期，将所有元素的值都变成原来的两倍。输出vector对象的内容，检验程序是否正确。
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>vec(10,42);
	for(auto it=vec.begin();it!=vec.end();++it)
	{
		*it*=2;
		cout<<*it<<" ";
	}
	return 0;
}