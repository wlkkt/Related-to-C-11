////#include <iostream>
////using namespace std;
////
//////ʹ��()�����û��Զ��幹�캯�����Զ������ͽ��г�ʼ��
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
////	//ʹ��()��ʼ���Զ�������
////	Date d2(2024);//����������,���õ��������캯��
////	Date d3(2024, 5, 26);//���������,���ö�������캯��
////
////	//ʹ��()���������ͽ��г�ʼ��
////	int i(5);//����������
////	double f(3.14);//����������
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
////		cout << "Date()" << endl;//����ӡ��Date()Ӧ��ֻ��һ��
////	}
////};
////
////int main()
////{
////	Date d();//�������������ǳ�ʼ������
////	cout << endl;
////	cout << "������Date()��" << endl;
////	Date d1;//��ʼ�����󣬵����޲ι��캯��
////	cout << "������Date()��" << endl;
////	return 0;
////}
//
//
////���Զ������ͳ�ʼ��
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
//	//Date d20(2024);		//C++98��()
//	//Date d2{ 2024 };	//C++11��()
//
//	//Date d30(2024, 5, 6);	//C++98��()
//	//Date d3{ 2024,5,26 };	//C++11��()
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
////    Point p = { 1, 2 }; // ֻ��ʼ���� x �� y��z �ᱻĬ�ϳ�ʼ��Ϊ 0
////    std::cout << "Point: (" << p.x << ", " << p.y << ", " << p.z << ")" << std::endl; // �����Point: (1, 2, 0)
////    return 0;
////}


////���Զ������ͳ�ʼ��
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

    // ���������캯��
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
    Person p{ "Alice", 30}; // ֱ�ӵ��� Person(std::string, int) ���캯������Ϊ{}�ҵ���һ�����ʵĹ��캯��
    Person s = 40;          // ֱ�ӵ��� Person(int a) ���캯������Ϊ��һ��֧��int�Ĺ��캯��

    Person q{ 5 , 6 };      // �����������ʽ����ת����int -> double��Ȼ����� Person(double n, double a) ���캯��
    Person r = {"fwqfq"};   // ������������ʽ����ת����const char* -> std::string��Ȼ����� Person(std::string n) ���캯��
    
    Person a = "fewfew";    //��

    

    
 


    return 0;
}
