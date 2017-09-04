//编写你自己的Account类。 
#include<iostream>
#include<vector>
using namespace std;

class Account
{
public:
	void calculate()
	{
		amount += amount*interestRate;
	}
	static double rate()//类的静态成员和类本身直接相关，而不是与类的各个对象保持关联。
	{
		return interestRate;
	}
	static void rate(double);//函数声明
private:
	string owner;
	double amount;
	static double interestRate;//所有账户的利率都是相同的，利率是类的静态成员变量。
	static double initRate();//函数声明
};

void Account::rate(double newRate)
{
	interestRate = newRate;
}

double Account::initRate()
{
	return 0.02;
}

double Account::interestRate = initRate();

int main()
{
	return 0;
}