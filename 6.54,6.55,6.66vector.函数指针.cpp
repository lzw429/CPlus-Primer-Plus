//��д�����������������������int�ββ��ҷ�������Ҳ��int��Ȼ������һ��vector��������Ԫ����ָ��ú�����ָ�롣
//��д4���������ֱ������intִֵ�мӡ������ˡ������㣻����һ�ⴴ����vector�����б�����Щ������ָ�롣
//��������vector�����ÿ��Ԫ�ز����������

#include<iostream>
#include<vector>
using namespace std;

int calc(int,int);//��������int�βεķ���������int�ĺ�������
typedef int (*pc)(int,int);//*pc��һ��ָ������calc�ĺ�����ָ��
vector<pc>vec;//����һ����Ϊvec��pc���͵Ķ���

int Add(int a,int b)
{
	return a+b;
}

int Sub(int a,int b)
{
	return a-b;
}

int Multiply(int a,int b)
{
	return a*b;
}

int Divide(int a,int b)
{
	if(b!=0)
		return a/b;
	else
		throw runtime_error("The dividend can not be zero.");
}

int main()
{
	int x(1),y(1);
	pc p1=Add;//pc��ָ������ָ��
	pc p2=Sub;
	pc p3=Multiply;
	pc p4=Divide;
	
	vec.push_back(p1);
	vec.push_back(p2);
	vec.push_back(p3);
	vec.push_back(p4);
	
	for(auto i=0;i!=vec.size();++i)
	{
		cout<<"The result is:"<<(vec[i])(x,y)<<endl;
	}
	return 0;
}