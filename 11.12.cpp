/*
 *编写程序，读入string 和int 的序列，将每个string和int存入一个pair中，pair保存在一个vector中。
 */

#include<iostream>
#include<vector>
#include<utility>	//pair所需的库
#include<string>

using namespace std;

int main()
{
	//pair是一种简单的关联模型，map是一种存储pair的容器。
	vector<pair<string, int>>pairvec;
	string str;
	int i;
	cout << "请输入string和int序偶，以空格或回车隔开" << endl;
	while (cin >> str >> i)
		pairvec.push_back(make_pair(str, i));
	for (const auto &pairvec_it : pairvec)
		cout << pairvec_it.first << " " << pairvec_it.second << endl;
	return 0;
}
