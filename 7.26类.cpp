//��Sales_data����avg_price���������������
#include<iostream>
#include<string>
using namespace std;

struct Sales_data
{
public:
	friend istream &read(istream &, Sales_data &);
	Sales_data() = default;//Ĭ�ϵĹ��캯��
	Sales_data(string &s):bookNo(s){}
	Sales_data(string &s,unsigned n,double p):bookNo(s), unit_sold(n), revenue(p*n) {}
	Sales_data(istream &is)
	{
		read(is, *this);
	}

	string isbn()const
	{
		return bookNo;
	}
	Sales_data &combine(const Sales_data&);
	double avg_price()const;

	string bookNo;
	unsigned unit_sold = 0;
	double revenue = 0.0;
};

//��������
Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, const Sales_data &);

inline //inlineд�����ⲿ����ʽ������д�����ڲ�����ʾ����������inline��д�����ڣ���ͬ��������
double Sales_data::avg_price()const
{
	if (unit_sold != 0)
		return revenue / unit_sold;
	else
		runtime_error("The dividend must not be zero.");
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
	unit_sold += rhs.unit_sold;
	revenue += rhs.unit_sold;
	return *this;
}

istream &read(istream &is,Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.unit_sold >> price;
	item.revenue = price*item.unit_sold;
	return is;
}

ostream &print(ostream &os,Sales_data &item)
{
	os << item.isbn() << " " << item.unit_sold << " " << item.revenue << " " << item.avg_price();
	return os;

}

int main()
{
	Sales_data total(cin);
	if (total.unit_sold)
	{
		Sales_data trans;
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "No data." << endl;
	}
	return 0;
}
