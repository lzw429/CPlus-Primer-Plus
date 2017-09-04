//定义一对类X和Y，其中X包含一个指向Y的指针，而Y包含一个类型为X的对象。
#include<iostream>
#include<string>
using namespace std;

class X;
class Y;

class X
{
public:
	X() = default;
	void print(ostream &os)
	{
		os << "This is a member of class X." << endl;
	}
private:
	Y *p;//指向Y的指针p
};

class Y
{
public:
	Y() = default;
	void print(ostream &os)
	{
		os << "This is a member of class Y." << endl;
	}
private:
	X x;//X类型的对象x
};

int main()
{
	X a;
	a.print(cout);
	Y b;
	b.print(cout);
	return 0;
}