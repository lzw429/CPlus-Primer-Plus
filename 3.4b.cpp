//��дһ�γ�����������ַ������Ƚ�����������ַ����Ƿ�ȳ���������ȳ���������Ƚϴ���Ǹ��ַ�����
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	while(cin>>s1>>s2)
	{
		if(s1.size()==s2.size())
			cout<<"s1 and s2 have the same size"<<endl;
		else if(s1.size()>s2.size())
			cout<<"The size of s1 is bigger:"<<s1<<endl;
		else
			cout<<"The size of s2 is bigger:"<<s2<<endl;
	}
	return 0;
}
