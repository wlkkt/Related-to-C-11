#include <iostream>
using namespace std;

//使用()对自定义类型初始化
class Date
{
public:
	Date(int year)
		:_year(year)
	{
		cout << "Date(int year)" << endl;
	}

	Date(int year, int month, int day)
		:_year(year)
		, _month(month)
		, _day(day)
	{
		cout << "Date(int year, int month, int day)" << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};



int main()
{
	Date d1(2024);
	Date d2(2024, 5, 6);
	Date d3{ 2024 };
	Date d4{2024,5,6};
	return 0;
}