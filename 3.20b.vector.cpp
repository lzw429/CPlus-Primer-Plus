//����һ�������������Ǵ���һ��vector����Ҫ���������һ�������1��Ԫ�صĺͣ����������2���͵�����2��Ԫ�صĺͣ��Դ����ơ�
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
		auto sum = vec[i] + vec[vec.size()-1-i];
		cout << sum << " ";
	}
	cout << endl;
	return 0;
}