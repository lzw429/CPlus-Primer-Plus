/*
编写程序，首先查找string "ab2c3d7R4E6" 中的每个数字字符，然后查找其中每个字母字符。
编写两个版本的程序，第一个要使用find_first_of，第二个要使用find_first_not_of。
*/

#include<iostream>
#include<string>

using namespace std;

string find_numbers(const string &str)
{
	string numbers("0123456789");
	string ret;
	string::size_type pos = 0;//下标position

	while((pos=ret.find_first_of(numbers,pos))!=string::npos)//npos是一个常数,用来表示不存在的位置
	{
		ret+=ret[pos];
		++pos;
	}
	return ret;
}

string find_letters(const string &str)
{
	string numbers("0123456789");
	string ret;
	string ::size_type pos=0;
	while((pos=ret.find_first_not_of(numbers,pos))!=string::npos)
	{
		ret+=ret[pos];
		++pos;
	}
	return ret;
}

int main()
{
	string str("ab2c3d7R4E6");
	string str_numbers=find_numbers(str);
	string str_letters=find_letters(str);
	return 0;
}
