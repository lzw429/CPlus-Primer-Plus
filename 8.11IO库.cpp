//本节的程序在外层while循环中定义了istringstream对象。如果record对象定义在循环之外，你需要对程序进行怎样的修改？重写程序，将record的定义移到while循环之外，验证你的修改方法是否正确。
#include<iostream>
#include<fstream>//file stream
#include<sstream>//string stream
#include<string>
#include<vector>
using namespace std;

struct PersonInfo
{
	string name;
	vector<string>phones;
};

int main()
{
	string line, word;
	vector<PersonInfo>people;
	ofstream os("person_data_save.txt");//文件输出流
	getline(cin, line);//标准输入line
	istringstream record(line);//字符输入流
	while(!record.eof())//字符读到eof之前
	{
		PersonInfo info;
		record >> info.name;
		os << info.name << " ";//输出到文件
		cout << info.name << endl;//标准输出
		while(record>>word)
		{
			info.phones.push_back(word);
			os << word << " ";
			cout << word << endl;
		}
		people.push_back(info);
	}
}
