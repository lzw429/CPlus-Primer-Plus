//��whileѭ����дһ�γ��򣬽��ַ����ڵ������ַ���X���档 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		for(decltype(s.size())index=0;index!=s.size();++index)
		{
			s[index]='X';
		}
		cout<<s<<endl;		
	}
	return 0;
}

//decltype��Ϊ�����������ڲ�ѯ���ʽ���������͡�decltype��C++11��׼�ƶ�ʱ���룬��Ҫ��Ϊ���ͱ�̶���ƣ��Խ�����ͱ���У�������Щ������ģ��������������������������ܱ�ʾ֮�����⡣