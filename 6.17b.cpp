//��дһ���������ж�string�������Ƿ��д�д��ĸ��
#include<iostream>
#include<ctype>
#include<string>
using namespace std;

void is_upper(const string &word)//ֻ�жϴ�д��ĸ�����޸ģ�������const string &
{
	int cnt=0;
	for(auto &j:word)
	{
		if(isupper(j))
		{
			cout<<"First upper letter is:"<<j<<endl;
			break;
		}
		else
		{
			cnt++;
			continue;
		}
	}
	if(cnt==word.length())
		cout<<"No upper letter existing."<<endl;
}

int main()
{
	string word;
	cin>>word;
	is_upper(word);
	return 0;
}