//�޸�����������ĳ���ʹ���ڶ�����Ϊ0ʱ�׳��쳣��
#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	int val1=0,val2=0;
	while(cin>>val1>>val2)
	{
		if(val2==0)
			throw runtime_error("The val2 couldn't be zero!");
		double val3=(double)val1/val2;
		cout<<"The result is:"<<val3<<endl;
	}
	return 0;
}