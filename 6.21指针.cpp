//��дһ�������������������������һ����int�͵�������һ����intָ�롣�����Ƚ�int��ֵ��ָ����ָ��ֵ�����ؽϴ���Ǹ���
#include<iostream>
using namespace std;

int compare(const int &val,const int *p)//ֻ�������޸�val
{
	return val>(*p) ? val : *p;
}

int main()
{
	int a(0),b(0);//��ʼ��a��bΪ0
	cin>>a>>b;
	cout<<"The bigger one is "<<compare(a,&b)<<endl;
	return 0;
}
