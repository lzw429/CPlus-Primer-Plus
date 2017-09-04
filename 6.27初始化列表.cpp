//编写一个函数，它的参数是initializer_list <int> 类型的对象，函数的功能是计算计算列表中所有元素的和。
#include<iostream>
#include<initializer_list>
using namespace std;

void sum(initializer_list<int> li)
{
	auto sum=0;
	for(auto it=li.begin();it!=li.end();++it)
	{
		sum+=*it;
	}
	cout<<sum<<endl;
}

int main()
{
	initializer_list<int> li{1,2,3,4,5,6,7,8,9,10};
	cout<<"The result is: ";
	sum(li);
	return 0;
}
