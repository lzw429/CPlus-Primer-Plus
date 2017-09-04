//对6种创建和初始化vector对象的方法，每一种都给出一个实例，解释每个vector包含什么值。
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string example("test");
	vector<string>vec1;
	vec1.push_back(example);

	vector<string>vec2(vec1);
	vector<string>vec3 = vec2;
	vector<string>vec4{ "This","is","a","test." };
	vector<string>vec5 = { "This","is","a","test." };

	auto iter1 = vec5.begin();
	auto iter2 = vec5.end();
	for (auto i = 0; i != vec1.size(); ++i)
		cout << vec1[i] << endl;
	for (auto i = 0; i != vec2.size(); ++i)
		cout << vec2[i] << endl;
	for (auto i = 0; i != vec3.size(); ++i)
		cout << vec3[i] << endl;
	for (auto i = 0; i != vec4.size(); ++i)
		cout << vec4[i] << " ";
	cout << endl;
	for (auto i = 0; i != vec5.size(); ++i)
		cout << vec5[i] << " ";
	cout << endl;
	return 0;
}
