//�ô�ͳ��forѭ����дһ�γ��򣬽��ַ����ڵ������ַ���X���档 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		decltype(s.size())index=0;
		while(index!=s.size())
		{
			s[index]='X';
			++index;
		}
		cout<<s<<endl;
	}
	return 0;
}