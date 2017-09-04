/*
 * 编写的孩子姓到名的map，添加一个pair的vector，保存孩子的名和生日。
 */

#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<utility>//pair

using namespace std;

int main()
{
	map < string, vector < string >>family = { { "Wang", { "yan", "wei" } }, { "Li",{ "ke", "fei" } } };//姓与名
	string family_name, first_name, birthday;
	vector<pair<string, string>>name_birthday;//名和生日

	cout << "请输入姓、名和生日，以空格或回车隔开"<<endl;

	while (cin >> family_name >> first_name >> birthday)
    {
        family[family_name].push_back(first_name);
		name_birthday.push_back(make_pair(first_name, birthday));
    }

	//输出保存姓到名的map的内容
	for (const auto &family_it : family)
	{
		cout << family_it.first << "家有";
		for (auto person = family_it.second.begin(); person != family_it.second.end(); ++person)
			if (person != family_it.second.end() - 1)//不是vector的最后一个元素
				cout << family_it.first << *person << "、";
			else//是vector的最后一个元素
				cout << family_it.first << *person << "。";
		cout << endl;
	}

	//输出保存名与生日的pair的内容
	for (const auto &it : name_birthday)
		cout << it.first << "的生日是" << it.second << endl;

	return 0;
}
