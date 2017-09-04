//编写函数，以读模式打开一个文件，将其内容读入到一个string的vector中，将每一行作为一个独立的元素存于vector中。
#include<iostream>
#include<fstream>//file stream
#include<string>
#include<vector>

using namespace std;

void test_ifstream(string filename)
{
	string line;//定义存储一行字符的字符串。
	vector<string>vec;//定义vector。
	ifstream in(filename);//input file stream 定义需读取的文件流。

	while(!in.eof())//读取到EOF之前
	{
		getline(in, line);//获取文件流in中的一行
		vec.push_back(line);
	}

	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << endl;
}

int main()
{
	test_ifstream("test.txt");
	return 0;
}
