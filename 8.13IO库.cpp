//重写本节的电话号码程序，从一个命名文件而非cin读取数据。
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
	ifstream is("person_data.txt");
	ofstream os("person_data_save.txt");//文件输出流
	while(getline(cin, line))
	{
		PersonInfo info;
		istringstream record(line);//字符输入流record
		record >> info.name;
		os << info.name << " ";
		cout << info.name << endl;
		while(record>>word)
		{
			info.phones.push_back(word);
			os << word << " ";
			cout << word << endl;
		}
		os << endl;
		people.push_back(info);
	}
}
