//��дһ�����������Ĳ�����initializer_list <int> ���͵Ķ��󣬺����Ĺ����Ǽ�������б�������Ԫ�صĺ͡�
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
