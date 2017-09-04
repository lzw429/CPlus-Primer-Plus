//使用你为8.1.2节（第281页）第一个练习所编写的函数打印一个istringstream对象的内容。
#include<iostream>
#include<sstream>//string stream
#include<string>
#include<vector>
using namespace std;

istream &is_input(istream &in)
{
	auto old_state = in.rdstate();//记住流的当前状态
	string s;
	while (in >> s)
		cout << s << " ";
	in.setstate(old_state);
	return in;
}

int main()
{
	string line = "This is a test.";
	istringstream sin(line);//定义字符输入流对象sin，它的内容是line。
	is_input(sin);
	return 0;
}
