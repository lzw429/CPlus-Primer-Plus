//��дһ����������������string����s��oldVal��newVal��ʹ�õ�������insert��erase������s������oldVal�滻ΪnewVal��
#include<iostream>
#include<string>
using namespace std;

void replace(string &s,const string &oldVal,const string &newVal)
{
	if (s.empty() || oldVal.empty() || newVal.empty())
	{
		cout << "s or oldVal or newVal Ϊ�գ�����" << endl;
		return;
	}
	if(s.size()<oldVal.size())
	{
		cout << "Ҫ���ҵ��ַ���̫����" << endl;
		return;
	}
	string::iterator iter = s.begin();
	string substring;//substring�����ַ�����
	while(iter!=s.end())
	{
		if (*iter == *oldVal.begin())//�ַ�����λƥ��
		{
			substring = s.substr(iter - s.begin(), oldVal.size());
			if(substring==oldVal)//���Ӵ�ƥ��
			{
				unsigned cur = iter - s.begin();
				iter = s.erase(iter, iter + oldVal.size());
				s.insert(iter, newVal.begin(), newVal.end());
				iter = s.begin() + cur + oldVal.size() - 1;
			}
		}
		else
			++iter;
	}
}
int main()
{
	string str = { "mtho my C++ tho,Primer" };
	string oldVal("tho"), newVal("though");
	cout << "�滻ǰ���ַ���Ϊ:" << str << endl;
	replace(str, oldVal, newVal);

	cout << "�滻����ַ���Ϊ��" << str << endl;

	return 0;
}
