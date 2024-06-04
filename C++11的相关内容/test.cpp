////#include <iostream>
////using namespace std;
////
//////使用()对有用户自定义构造函数的自定义类型进行初始化
////class Date
////{
////public:
////	Date()
////	{
////		cout << "Date()" << endl;
////	}
////
////	Date(int year)
////		:_year(year)
////	{
////		cout << "Date(int year)" << endl;
////	}
////
////	Date(int year, int month, int day)
////		:_year(year)
////		, _month(month)
////		, _day(day)
////	{
////		cout << "Date(int year, int month, int day)" << endl;
////	}
////
////private:
////	int _year;
////	int _month;
////	int _day;
////};
////
////int main()
////{
////	//使用()初始化自定义类型
////	Date d2(2024);//单参数构造,调用单参数构造函数
////	Date d3(2024, 5, 26);//多参数构造,调用多参数构造函数
////
////	//使用()对内置类型进行初始化
////	int i(5);//单参数构造
////	double f(3.14);//单参数构造
////	int z = (6);
////
////	cout << i << endl;
////	cout << f << endl;
////	cout << z << endl;
////	return 0;
////}
//
////#include <iostream>
////using namespace std;
////
////class Date
////{
////public:
////	Date()
////	{
////		cout << "Date()" << endl;//最后打印的Date()应该只有一行
////	}
////};
////
////int main()
////{
////	Date d();//函数声明，不是初始化对象
////	cout << endl;
////	cout << "上面有Date()吗？" << endl;
////	Date d1;//初始化对象，调用无参构造函数
////	cout << "上面有Date()吗？" << endl;
////	return 0;
////}
//
//
////对自定义类型初始化
//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date()
//	{
//		cout << "Date()" << endl;
//	}
//
//	Date(int year)
//		:_year(year)
//	{
//		cout << "Date(int year)" << endl;
//	}
//
//	Date(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//		cout << "Date(int year, int month, int day)" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	int z = (6,5);
//	cout << z << endl;
//	//Date d1;
//
//
//	////Date d = ("2024");
//
//
//	//Date d20(2024);		//C++98的()
//	//Date d2{ 2024 };	//C++11的()
//
//	//Date d30(2024, 5, 6);	//C++98的()
//	//Date d3{ 2024,5,26 };	//C++11的()
//
//
//	//Date* arr1 = new Date[3]{ d1, d2, d3 };
//	////Date* arr2 = new Date[3]{ {1,2,6},{23} ,{25} };
//	return 0;
//};
//
//
//
////#include <iostream>
////
////struct Point {
////    int x;
////    int y;
////    int z;
////};
////
////int main() {
////    Point p = { 1, 2 }; // 只初始化了 x 和 y，z 会被默认初始化为 0
////    std::cout << "Point: (" << p.x << ", " << p.y << ", " << p.z << ")" << std::endl; // 输出：Point: (1, 2, 0)
////    return 0;
////}


////对自定义类型初始化
//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date()
//	{
//		cout << "Date()" << endl;
//	}
//
//	Date(int year)
//		:_year(year)
//	{
//		cout << "Date(int year)" << endl;
//	}
//
//	Date(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//		cout << "Date(int year, int month, int day)" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d2 = { 2.15,2.5,50. };
//	return 0;
//};


#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;
    int height;

    // 单参数构造函数
    Person(std::string n) : name(n), age(0) {
        std::cout << "Person(std::string n)" << std::endl;
    }

    Person(int a) : name("Unknown"), age(a) {
        std::cout << "Person(int a)" << std::endl;
    }

    Person(std::string n, int a) : name(n), age(a) {
        std::cout << "Person(std::string n, int a)" << std::endl;
    }

    Person(double n, double a) : height(n), age(a) {
        std::cout << "Person(double n, double a)" << std::endl;
    }

    Person(const char * s) : name(s) {
        std::cout << "Person(const char * s)" << std::endl;
    }
};

int main() 
{
    Person p{ "Alice", 30}; // 直接调用 Person(std::string, int) 构造函数，因为{}找到了一个合适的构造函数
    Person s = 40;          // 直接调用 Person(int a) 构造函数，因为有一个支持int的构造函数

    Person q{ 5 , 6 };      // （多参数）隐式类型转换：int -> double，然后调用 Person(double n, double a) 构造函数
    Person r = {"fwqfq"};   // （单参数）隐式类型转换：const char* -> std::string，然后调用 Person(std::string n) 构造函数
    
    Person a = "fewfew";    //隐

    

    
 


    return 0;
}
