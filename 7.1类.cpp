//��дһ��Sales_data�࣬����������combine��isbn��Ա��
#include<iostream>
#include<string>
using namespace std;

struct Sales_data
{
	string bookNo;//���
	unsigned units_sold=0;//�������Ǹ���
	double revenue=0.0;//����

	string isbn()const//const���ڷǾ�̬��Ա������const���͵ĺ������ܶ����Ա�����޸Ĳ��������ܵ��÷�const���͵ĳ�Ա����
	{return bookNo;}
	Sales_data &combine(const Sales_data&);
	double avg_price() const;
};

double Sales_data::avg_price()const//�����Ա����
{
	if(units_sold!=0)
		return revenue/units_sold;
	else
		return 0;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
	units_sold+=rhs.units_sold;//�����ۼ�
	revenue+=rhs.revenue;//�����ۼ�
	return *this;//���ص��øú����Ķ���this��ָ�룬return this����ָ��
}

int main()
{
	return 0;
}
