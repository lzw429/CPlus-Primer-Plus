//��д���Լ���Account�ࡣ 
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
	static double rate()//��ľ�̬��Ա���౾��ֱ����أ�����������ĸ������󱣳ֹ�����
	{
		return interestRate;
	}
	static void rate(double);//��������
private:
	string owner;
	double amount;
	static double interestRate;//�����˻������ʶ�����ͬ�ģ���������ľ�̬��Ա������
	static double initRate();//��������
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