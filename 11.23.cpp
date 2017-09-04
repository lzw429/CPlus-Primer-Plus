/*
 * 使用multimap保存姓与名。
 */

#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

int main()
{
	multimap<string, vector<string>>family = { {"Wang",{"yan","wei"}},{"Li",{"ke","fei"}} };
	//multimap与map的区别是，前者一个键可对应多个实例，而后者是一对一的。
	string family_name, input_name;
	vector<string>first_name;

	cout << "请输入姓：" << endl;
	cin >> family_name;
	cout << "请输入名：" << endl;
	while (cin >> input_name)
		first_name.push_back(input_name);

	//插入到multimap中
	family.insert({ family_name,first_name });

	//输出multimap的内容
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
}
