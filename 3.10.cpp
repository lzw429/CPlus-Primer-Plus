//��дһ�γ��򣬶���һ�����������ŵ��ַ�������������ȥ��������ַ���ʣ��Ĳ��֡�
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		string result;
		for(auto &c:s)
		{
			if(!ispunct(c))
				result+=c;
		}
		cout<<result<<endl;
	}
	return 0;
}