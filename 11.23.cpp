/*
 * ʹ��multimap������������
 */

#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

int main()
{
	multimap<string, vector<string>>family = { {"Wang",{"yan","wei"}},{"Li",{"ke","fei"}} };
	//multimap��map�������ǣ�ǰ��һ�����ɶ�Ӧ���ʵ������������һ��һ�ġ�
	string family_name, input_name;
	vector<string>first_name;

	cout << "�������գ�" << endl;
	cin >> family_name;
	cout << "����������" << endl;
	while (cin >> input_name)
		first_name.push_back(input_name);

	//���뵽multimap��
	family.insert({ family_name,first_name });

	//���multimap������
	for (const auto &family_it : family)
	{
		cout << family_it.first << "����";
		for (auto person = family_it.second.begin(); person != family_it.second.end(); ++person)
			if (person != family_it.second.end() - 1)//����vector�����һ��Ԫ��
				cout << family_it.first << *person << "��";
			else//��vector�����һ��Ԫ��
				cout << family_it.first << *person << "��";
		cout << endl;
	}
}
