//��д���򣬽�����һ���ļ��е��б�����һ��vector<string>�У�Ȼ��ʹ��һ��istringstream��vector��ȡ����Ԫ�ء�ÿ�ζ�ȡһ�����ʡ�
#include<iostream>
#include<sstream>//string stream
#include<string>
#include<fstream>//file stream
#include<vector>

using namespace std;

void test_stream(string filename)
{
	string line, word;
	ifstream in(filename);//�����ļ�����������in��
	vector<string> line_vec, word_vec;

	while(!in.eof())//�����ļ�EOF֮ǰ
	{
		getline(in, line);//��in�е�һ�ж���line��
		line_vec.push_back(line);//��line���������С�
	}

	for(auto i=0;i!=line_vec.size();++i)
	{
		istringstream sin(line_vec[i]);//���ж�ȡ��������ʷ�����sin��
		while(sin>>word)//�����ȡ����
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
