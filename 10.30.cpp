/* 
使用流迭代器、sort和copy从标准输入读取一个整数序列，将其排序，并将结果写到标准输出。 
*/  
#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>

using namespace std;

int main()
{
	istream_iterator<int>in_iter(cin), eof;
	ostream_iterator<int>out_iter(cout, " ");
	vector<int>vec(in_iter, eof);//通过输入流新建向量
	
	sort(vec.begin(), vec.end());
	copy(vec.cbegin(), vec.cend(), out_iter);//拷贝到输出流
	cout << endl;
	return 0;
}