/*
编写程序，接受三个参数：一个输入文件和两个输出文件的文件名。
输入文件保存的应该是整数。使用istream_iterator 读取输入文件。
使用ostream_iterator将奇数写入第一个输出文件，每个值后都跟一个空格。
将偶数写入第二个输出文件，每个值都独占一行。
*/

#include<iostream>
#include<iterator>
#include<vector>
#include<fstream>

using namespace std;

int main(int argc,char **argv)
{
	//argv[0]是本程序名称。
	ifstream infile(argv[1]);//输入文件
	ofstream outfile1(argv[2]);//输出文件1，保存奇数
	ofstream outfile2(argv[3]);//输出文件2，保存偶数
	
	vector<int>integers;
	istream_iterator<int>in_iter(infile),eof;
	ostream_iterator<int>out_iter1(outfile1," ");
	ostream_iterator<int>out_iter2(outfile2,"\r\n");
	
	copy(in_iter,back_insert(integers));//读取到vector中
	for(auto it:integers)
	{
		if(it%2!=0)
			out_iter1=it;
		else
			out_iter2=it;
	}
	
	return 0;
}