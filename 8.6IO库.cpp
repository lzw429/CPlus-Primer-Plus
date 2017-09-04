//再写书店程序，将文件名作为一个参数传递给main。
#include <iostream>
#include <string>
#include <fstream>
#include <sstream> 
using namespace std;

class Sales_data
{
public:
    friend istream &read(istream &, Sales_data &);//友元函数，便于Sales_data类直接访问。
    friend ostream &print(ostream &os, const Sales_data &item);
    Sales_data() = default;//默认构造函数 
    Sales_data(const std::string &s) : bookNo(s){}
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n){}
    Sales_data(std::istream &is){
        read(is,*this);
    }

    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;

private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

//函数声明
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		runtime_error("The dividend must not be zero.");
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is; 
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

int main()
{
    ifstream in("Sales_data.txt");
    Sales_data total;           
    if(read(in, total))//in是文件输入流，total是对象。
	{           
        Sales_data trans;
        while(read(in,trans))
		{     
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout,total) << endl;
                total = trans;
            }
        }
    print(cout,total) << endl;
    } 
	else
	{
        cerr << "No data." << endl;
    }
}
