//��д�������Զ�ģʽ��һ���ļ����������ݶ��뵽һ��string��vector�У���ÿһ��������Ϊһ��������Ԫ�ش���vector�С�
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
	ifstream in(filename);//input file stream �������ȡ���ļ�����

	while(!in.eof())//��ȡ��EOF֮ǰ
	{
		getline(in, line);//��ȡ�ļ���in�е�һ��
		istringstream sin(line);//���캯������line�������𵥴ʵش���sin��sin��һ���ַ���������
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
