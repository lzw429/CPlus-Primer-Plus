/*
����unique֮�⣬��׼�⻹��������Ϊunique_copy�ĺ����������ܵ�������������
��ʾ�������ظ�Ԫ�ص�Ŀ��λ�á�
��дһ������ʹ��unique_copy��һ��vector�в��ظ���Ԫ�ؿ�����һ����ʼΪ�յ�list�С�
*/

#include <iostream>  
#include <iterator>  
#include <vector>  
#include <list>  
#include <string>  
#include <algorithm> 

using namespace std;

int main()
{
	vector<string>vec = { "hello", "c++", "c++", "world", "my", "love", "love", "like","this","this" };
	list<string>list;

	unique_copy(vec.begin(), vec.end(), inserter(list, list.begin()));//������������inserter���ص�����
	for_each(list.begin(), list.end(), [](const string &str) {cout << str << " "; });
	cout << endl;
	return 0;
}