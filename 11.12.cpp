/*
 *��д���򣬶���string ��int �����У���ÿ��string��int����һ��pair�У�pair������һ��vector�С�
 */

#include<iostream>
#include<vector>
#include<utility>	//pair����Ŀ�
#include<string>

using namespace std;

int main()
{
	//pair��һ�ּ򵥵Ĺ���ģ�ͣ�map��һ�ִ洢pair��������
	vector<pair<string, int>>pairvec;
	string str;
	int i;
	cout << "������string��int��ż���Կո��س�����" << endl;
	while (cin >> str >> i)
		pairvec.push_back(make_pair(str, i));
	for (const auto &pairvec_it : pairvec)
		cout << pairvec_it.first << " " << pairvec_it.second << endl;
	return 0;
}
