/*
��д�������Ȳ���string "ab2c3d7R4E6" �е�ÿ�������ַ���Ȼ���������ÿ����ĸ�ַ���
��д�����汾�ĳ��򣬵�һ��Ҫʹ��find_first_of���ڶ���Ҫʹ��find_first_not_of��
*/

#include<iostream>
#include<string>

using namespace std;

string find_numbers(const string &str)
{
	string numbers("0123456789");
	string ret;
	string::size_type pos = 0;//�±�position

	while((pos=ret.find_first_of(numbers,pos))!=string::npos)//npos��һ������,������ʾ�����ڵ�λ��
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
