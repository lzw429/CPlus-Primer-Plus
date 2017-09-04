/*
 *定义一个map，关键字是家庭的姓，值是一个vector，保存家中孩子（们）的名字。
 *编写代码，实现添加新的家庭以及向已有家庭中添加新的孩子。
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
	cout << "请输入姓和名，以空格或回车分隔";
    cout << endl;
    while(cin >> family_name >> first_name)
        family[family_name].push_back(first_name);

	for(const auto &family_it:family)
	{
		cout << family_it.first << "家有";
		for (auto person = family_it.second.begin(); person != family_it.second.end(); ++person)
			if (person != family_it.second.end() - 1)//不是vector的最后一个元素
				cout << family_it.first << *person << "、";
			else//是vector的最后一个元素
				cout << family_it.first << *person << "。";
		cout << endl;
	}
	return 0;
}
