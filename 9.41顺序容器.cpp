//��д���򣬴�һ��vector<char>��ʼ��һ��string��
#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
int main()
{
    vector<char>ch = { '1', '2', '3' };
    string str(ch.begin(),ch.end());
    cout << str << endl;
 
    return 0;
}