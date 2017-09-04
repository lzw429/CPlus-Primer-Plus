//修改你的Person类使其隐藏实现的细节。
#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person() = default;
	Person(string name, string address) :name(name), address(address) {}//初始化
	string getName()const { return name; }//成员函数
	string getAddress()const { return address; }
private:
	string name;//成员变量
	string address;
};

istream &read (istream &is,Person &p)
{
	is >> p.name >> p.address;
	return is;
}

ostream &print(ostream &os,const Person &p)
{
	os << "Name:" << p.name << "\n" << "Address:" << p.address;
	return os;
}

int main()
{
	Person p1("Syh", "Chongqing");
	print(cout, p1) << endl;

	Person p2;
	read(cin, p2);
	print(cout, p2) << endl;
	return 0;
}
