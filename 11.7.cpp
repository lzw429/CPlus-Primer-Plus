/*
 *����һ��map���ؼ����Ǽ�ͥ���գ�ֵ��һ��vector��������к��ӣ��ǣ������֡�
 *��д���룬ʵ������µļ�ͥ�Լ������м�ͥ������µĺ��ӡ�
 */

#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

int main()
{
	map<string, vector<string>>family = { {"wang",{"yan","wei"}},{"li",{"ke","fei"}} };
	string family_name, first_name;
	cout << "�������պ������Կո��س��ָ�";
    cout << endl;
    while(cin >> family_name >> first_name)
        family[family_name].push_back(first_name);

	for(const auto &family_it:family)
	{
		cout << family_it.first << "����";
		for (auto person = family_it.second.begin(); person != family_it.second.end(); ++person)
			if (person != family_it.second.end() - 1)//����vector�����һ��Ԫ��
				cout << family_it.first << *person << "��";
			else//��vector�����һ��Ԫ��
				cout << family_it.first << *person << "��";
		cout << endl;
	}
	return 0;
}
