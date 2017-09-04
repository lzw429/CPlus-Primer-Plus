/*
设计一个类，它有三个unsigned成员，分别表示年、月、日。为其编写构造函数，接受一个表示日期的string参数。
你的构造函数应该能处理不同的数据格式，如 January 1, 1900、1/1/1900、Jan 1 1900 等。
*/

#include<string>
#include<iostream>
#include<vector>

using namespace std;

class Date
{
public:
	Date() = default;//默认的构造函数。
	Date(const string& date)//构造函数。
	{
		string::size_type pos = date.find_first_of(", /");//找到第一个是逗号、空格或斜杠的字符位置。
		if (pos == string::npos)
		{
			init();
			cout << "Error format: the date has been initialized." << endl;
			return;
		}

		// 1/1/1900
		string::size_type slash1 = date.find_first_of('/');
		string::size_type slash2 = date.find_first_of('/', slash1 + 1);
		if (slash1 != string::npos)
		{
			setDay(stoi(date.substr(0, slash1)));//substr用于获取子串。
			setMonth(stoi(date.substr(slash1 + 1, slash2)));
			setYear(stoi(date.substr(slash2 + 1, date.size() - 1)));
			return;
		}

		// Januray 1, 1900 和 Jan 1 1900
		string::size_type space1 = date.find_first_of(' ');
		string::size_type space2 = date.find_first_of(' ', space1 + 1);
		string::size_type comma = date.find_first_of(',');
		if (comma != string::npos && space1 != string::npos)// Januray 1, 1900
		{
			string month_str = date.substr(0, space1);
			vector<string>::size_type month_it;
			for (month_it = 0; month_it != fullMonth.size(); ++month_it)
			{
				if (fullMonth[month_it].compare(month_str) == 0)//月份字符串匹配。
					break;
			}
			if (month_it == fullMonth.size())
			{
				init();
				cout << "format eg.(January 1, 1900) error:the date has been initialized." << endl;
				return;
			}
			else
				setMonth(month_it + 1);
			setDay(stoi(date.substr(space1 + 1, comma)));
			setYear(stoi(date.substr(comma + 1, date.size() - 1)));
			return;
		}
		else if (space2 != string::npos)// Jan 1 1900
		{
			string month_str = date.substr(0, space1);
			vector<string>::size_type month_it;
			for (month_it = 0; month_it != abbrMonth.size(); ++month_it)
			{
				if (abbrMonth[month_it].compare(month_str) == 0)//月份字符串匹配。
					break;
			}
			if (month_it == abbrMonth.size())
			{
				init();
				cout << "format eg.(Jan 1 1900) error:the date has been initialized." << endl;
				return;
			}
			else
				setMonth(month_it + 1);
			setDay(stoi(date.substr(space1 + 1, space2)));
			setYear(stoi(date.substr(space2 + 1, date.size() - 1)));
			return;
		}

		init();
		return;
	}

	void display() const
	{
		cout << Year << "年" << Month << "月" << Day << "日" << endl;
	}

	int getYear() const
	{
		return Year;
	}

	int getMonth() const
	{
		return Month;
	}

	int getDay() const
	{
		return Day;
	}

	void setYear(int input)
	{
		Year = input;
	}

	void setMonth(int input)
	{
		Month = input;
	}

	void setDay(int input)
	{
		Day = input;
	}

private:
	unsigned Year;
	unsigned Month;
	unsigned Day;

	void init()
	{
		setYear(1900);
		setMonth(1);
		setDay(1);
	}

	vector<string> fullMonth//月份全称
	{"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	vector<string> abbrMonth//月份缩写
	{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Sep", "Oct", "Nov", "Dec"};
};

int main()
{
	string str1 = "27/3/2017";
	string str2 = "March 27, 2017";
	string str3 = "Mar 27 2017";
	Date date1(str1);
	Date date2(str2);
	Date date3(str3);
	date1.display();
	date2.display();
	date3.display();
	getchar();
	return 0;
}
