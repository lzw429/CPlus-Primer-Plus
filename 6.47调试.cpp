//使用递归输出vector内容，使其有条件地输出与执行过程有关的信息。例如，每次调用时输出vector对象的大小。分别在打开和关闭调试器的情况下编译并执行这个程序。
#include<iostream>
#include<vector>
using namespace std;

void print(vector<string>vec,vector<string>::size_type n);
void print_debug(vector<string>vec,vector<string>::size_type n);
int main()
{
	vector<string>vec;
	string s;
	while(cin>>s)
	{
		vec.push_back(s);
	}
	vector<string>::size_type n=0;
	print(vec,n);
	cout<<endl;
	print_debug(vec,n);
	return 0;
}

void print(vector<string>vec,vector<string>::size_type n)
{
	if(n!=vec.size()-1)
		print(vec,n+1);
	cout<<vec[n]<<" ";
}

void print_debug(vector<string>vec,vector<string>::size_type n)
{
	cerr<<__func__<<":size is "<<vec.size()<<endl;
	if(n!=vec.size()-1)
		cout<<vec[n]<<" ";
	print(vec,n+1);
}
