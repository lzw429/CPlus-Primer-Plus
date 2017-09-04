//�����Sales_data������ӹ��캯����Ȼ���дһ�γ��������õ�ÿ�����캯����
#include<iostream>
#include<string>
using namespace std;

struct Sales_data
{
	Sales_data()=default;//Ĭ�Ϲ��캯��
	Sales_data(const string &s):bookNo(s){}//����bookNo
	Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}//������������
	Sales_data(istream &);//��Ա��������

	string isbn()const//��Ա��������
	{
		return bookNo;
	}
	Sales_data &combine(const Sales_data &);//��Ա��������
	double avg_price()const;

	string bookNo;//��Ա����
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//��������
Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, const Sales_data &);

//��������
double Sales_data::avg_price()const
{
	if (units_sold != 0)
	{
		return revenue / units_sold;
	}
	else
		return 0;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data)
{
	Sales_data sum = lhs;
	sum.combine(lhs);
	return sum;
}

Sales_data::Sales_data(istream &is)
{
	read(is, *this);
}

int main()
{
	Sales_data s1("Hero!I am");//���õ�һ�ֹ��캯��
	print(cout, s1);
	cout << endl;

	Sales_data s2("Hero!I am",10, 20);//���õڶ��ֹ��캯��
	print(cout, s2);
	cout << endl;

	Sales_data s3(cin);//���õ����ֹ��캯��
	print(cout, s3);
	cout << endl;
	return 0;
}
