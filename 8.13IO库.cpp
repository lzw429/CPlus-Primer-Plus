//��д���ڵĵ绰������򣬴�һ�������ļ�����cin��ȡ���ݡ�
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
	ofstream os("person_data_save.txt");//�ļ������
	while(getline(cin, line))
	{
		PersonInfo info;
		istringstream record(line);//�ַ�������record
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
