//编写一个main函数，令其接受两个实参，把实参的内容连接成一个string对象并输出出来。
#include<iostream>
#include<string>
#include<cctype>
#include<cstring>

using namespace std;

int main(int argc,char *argv[])
{
	cout<<argv[0]<<'\n'<<argv[1]<<'\n'<<argv[2]<<'\n';
	strcat(argv[1],argv[2]);
	cout<<argv[1]<<endl;
	return 0;
}
