/*
编写程序，使用一个流迭代器读取一个文本文件，存入一个vector中的string里。
*/
#include<iostream>
#include<iterator>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int main()
{
	vector<string>words;
	ifstream inputstream("input.txt");//文件输入流

	ostream_iterator<string>out_iter(cout, " ");//以空格为间隔
	istream_iterator<string>in_iter(inputstream), eof;

	while (in_iter != eof)
		words.push_back(*in_iter++);

	copy(words.cbegin(), words.cend(), out_iter);
	cout << endl;

    return 0;
}
