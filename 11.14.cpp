/*
 * ��д�ĺ����յ�����map�����һ��pair��vector�����溢�ӵ��������ա�
 */

#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<utility>//pair

using namespace std;

int main()
{
	map < string, vector < string >>family = { { "Wang", { "yan", "wei" } }, { "Li",{ "ke", "fei" } } };//������
	string family_name, first_name, birthday;
	vector<pair<string, string>>name_birthday;//��������

	cout << "�������ա��������գ��Կո��س�����"<<endl;

	while (cin >> family_name >> first_name >> birthday)
    {
        family[family_name].push_back(first_name);
		name_birthday.push_back(make_pair(first_name, birthday));
    }

	//��������յ�����map������
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

	//��������������յ�pair������
	for (const auto &it : name_birthday)
		cout << it.first << "��������" << it.second << endl;

	return 0;
}
