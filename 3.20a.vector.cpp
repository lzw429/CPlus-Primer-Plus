//����һ�������������Ǵ���һ��vector���󣬽�ÿ�����������ĺ����������
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int v1;
	vector<int>vec;
	while (cin >> v1)
		vec.push_back(v1);
	for (decltype(vec.size())i = 0; i != vec.size() - 1; ++i)
	{
		auto sum = vec[i] + vec[i + 1];
		cout << sum << " ";
	}
	cout << endl;
	return 0;
}