//���ڵĳ��������whileѭ���ж�����istringstream�������record��������ѭ��֮�⣬����Ҫ�Գ�������������޸ģ���д���򣬽�record�Ķ����Ƶ�whileѭ��֮�⣬��֤����޸ķ����Ƿ���ȷ��
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
	ofstream os("person_data_save.txt");//�ļ������
	getline(cin, line);//��׼����line
	istringstream record(line);//�ַ�������
	while(!record.eof())//�ַ�����eof֮ǰ
	{
		PersonInfo info;
		record >> info.name;
		os << info.name << " ";//������ļ�
		cout << info.name << endl;//��׼���
		while(record>>word)
		{
			info.phones.push_back(word);
			os << word << " ";
			cout << word << endl;
		}
		people.push_back(info);
	}
}
