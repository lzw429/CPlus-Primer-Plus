/*
标准库定义了名为partition的算法，它接受一个谓词，对容器内容进行划分，使得谓词为true的值会排在容器的前半分部，而使谓词为false的值会排在后半部分。
算法返回一个迭代器，指向最后一个使谓词为true的元素之后的位置。
编写函数，接受一个string，返回一个bool值，指出string是否有5个或更多字符。使用此函数划分words。打印出长度大于等于和的元素。
*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

bool LenMoreFive(const string &s)
{
	return s.size() >= 5;
}

void ModVecString(vector<string> &vec)//删除长度小于5的字符串
{
	auto false_start = partition(vec.begin(), vec.end(), LenMoreFive);
	vec.erase(false_start, vec.end());
}

int main()
{
	vector<string>vec = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };

	cout << "vector原始元素内容为：\n";

	for (const auto &it : vec)
		cout << it << " ";
	cout << endl;

	ModVecString(vec);

	cout << "vector中长度大于等于5的元素内容为：\n";
	for (const auto &it : vec)
		cout << it << " ";
	cout << endl;

	return 0;
}
