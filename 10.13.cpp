/*
��׼�ⶨ������Ϊpartition���㷨��������һ��ν�ʣ����������ݽ��л��֣�ʹ��ν��Ϊtrue��ֵ������������ǰ��ֲ�����ʹν��Ϊfalse��ֵ�����ں�벿�֡�
�㷨����һ����������ָ�����һ��ʹν��Ϊtrue��Ԫ��֮���λ�á�
��д����������һ��string������һ��boolֵ��ָ��string�Ƿ���5��������ַ���ʹ�ô˺�������words����ӡ�����ȴ��ڵ��ں͵�Ԫ�ء�
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

void ModVecString(vector<string> &vec)//ɾ������С��5���ַ���
{
	auto false_start = partition(vec.begin(), vec.end(), LenMoreFive);
	vec.erase(false_start, vec.end());
}

int main()
{
	vector<string>vec = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };

	cout << "vectorԭʼԪ������Ϊ��\n";

	for (const auto &it : vec)
		cout << it << " ";
	cout << endl;

	ModVecString(vec);

	cout << "vector�г��ȴ��ڵ���5��Ԫ������Ϊ��\n";
	for (const auto &it : vec)
		cout << it << " ";
	cout << endl;

	return 0;
}
