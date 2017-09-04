//利用一个函数输出单词success和failure的单数和复数形式，函数默认实参为's'
#include<iostream>
using namespace std;

string make_plural(size_t ctr,const string &word,const string &ending="s");

int main()
{
	cout<<make_plural(1,"success","")<<endl;//单数形式，ending被赋值为空
	cout<<make_plural(1,"failure","")<<endl;//单数形式，ending被赋值为空
	cout<<endl;
	cout<<make_plural(2,"success","es")<<endl;//复数形式
	cout<<make_plural(2,"failure")<<endl;//复数形式，ending使用默认值
	return 0;
}

string make_plural(size_t ctr,const string &word,const string &ending)//声明时已赋值，定义函数时不能重复赋值
{
	return (ctr>1)? word+ending : word;
}
