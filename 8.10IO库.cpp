//编写程序，将来自一个文件中的行保存在一个vector<string>中，然后使用一个istringstream从vector读取数据元素。每次读取一个单词。
#include<iostream>
#include<sstream>//string stream
#include<string>
#include<fstream>//file stream
#include<vector>

using namespace std;

void test_stream(string filename)
{
	string line, word;
	ifstream in(filename);//定义文件输入流对象in。
	vector<string> line_vec, word_vec;

	while(!in.eof())//读到文件EOF之前
	{
		getline(in, line);//将in中的一行读入line。
		line_vec.push_back(line);//将line放入向量中。
	}

	for(auto i=0;i!=line_vec.size();++i)
	{
		istringstream sin(line_vec[i]);//逐行读取，逐个单词放入流sin中
		while(sin>>word)//逐个读取单词
		{
			word_vec.push_back(word);
		}
	}

	for (auto i = 0; i != word_vec.size(); ++i)
		cout << word_vec[i] << endl;
}

int main()
{
	test_stream("test.txt");
	return 0;
}
