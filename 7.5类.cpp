//编写一个名为Person的类。
#include<iostream>
#include<string>
using namespace std;

struct Person
{
	string name;
	string address;
	
	string getName()const{return name;}
	string getAddress()const{return address};
}

int main()
{
	return 0;
}