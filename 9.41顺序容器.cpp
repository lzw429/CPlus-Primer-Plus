//编写程序，从一个vector<char>初始化一个string。
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