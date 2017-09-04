//编写函数，以读模式打开一个文件，将其内容读入到一个string的vector中，将每一个单词作为一个独立的元素存于vector中。
#include<iostream>
#include<fstream>//file stream
#include<sstream>//string stream
#include<string>
#include<vector>

using namespace std;

void test_ifstream(string filename)
{
	string line, word;
	vector<string>vec;
	ifstream in(filename);//input file stream 定义需读取的文件流。

	while(!in.eof())//读取到EOF之前
	{
		getline(in, line);//获取文件流in中的一行
		istringstream sin(line);//构造函数，将line中内容逐单词地存入sin；sin是一个字符输入流。
		while (sin >> word)
				vec.push_back(word);

	}

	for (auto i=0; i != vec.size(); ++i)
		cout << vec[i] << endl;
}

int main()
{
	test_ifstream("test.txt");
	return 0;
}
