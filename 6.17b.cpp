//编写一个函数，判断string对象中是否含有大写字母。
#include<iostream>
#include<ctype>
#include<string>
using namespace std;

void is_upper(const string &word)//只判断大写字母而不修改，类型是const string &
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