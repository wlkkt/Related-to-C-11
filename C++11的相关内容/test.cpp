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
//	Date d2 (2.15, 2.5, 50.);
//	return 0;
//};

//
//#include <iostream>
//#include <string>
//
//class Person {
//public:
//    std::string name;
//    int age;
//    int height;
//
//    // 单参数构造函数
//    Person(std::string n) : name(n), age(0) {
//        std::cout << "Person(std::string n)" << std::endl;
//    }
//
//    Person(int a) : name("Unknown"), age(a) {
//        std::cout << "Person(int a)" << std::endl;
//    }
//
//    Person(std::string n, int a) : name(n), age(a) {
//        std::cout << "Person(std::string n, int a)" << std::endl;
//    }
//
//    Person(double n, double a) : height(n), age(a) {
//        std::cout << "Person(double n, double a)" << std::endl;
//    }
//
//    Person(const char* s) : name(s) {
//        std::cout << "Person(const char * s)" << std::endl;
//    }
//};  
//
//int main() 
//{
//    Person a = { "Alice", 30}; // 直接调用 Person(std::string, int) 构造函数
//    Person b = { "fwqfq" };    // 直接调用 Person(const char * s) 构造函数
//    Person c = { 5 , 6 };      //（多参数）隐式类型转换： int -> double，然后调用 Person(double n, double a) 构造临时对象，最后将该对象拷贝给c
//   
//    Person d = (52.5);         //（单参数）隐式类型转换：double -> int，然后调用  Person(int a) 构造临时对象，最后将该对象拷贝给d
//    
//    Person e = "fewfew";       // 调用 Person(const char* s)构造临时对象，最后将该对象拷贝给e
//
//    Person f = 40;             // 调用 Person(int a) 构造临时对象，最后将该对象拷贝给f
//    return 0;
//}

//#include <iostream>
//#include <vector>
//
//
//class MyClass {
//public:
//    MyClass(int a,int b,int c,int d,int e)
//    {
//        std::cout << "MyClass(int a,int b,int c,int d,int e)" << std::endl;
//    }
//
//    MyClass(std::initializer_list<int> list) 
//    {
//        for (auto elem : list) {
//            std::cout << elem << " ";
//        }
//        std::cout << std::endl;
//    }
//  
//};
//
//int main() 
//{
//    MyClass obj = { 1, 2, 3, 4, 5 }; 
//    return 0;
//}


//#include <iostream>
//using namespace std;

//int func1()
//{
//	static int x = 0;
//	return x;//x是右值
//}
//
//
//int main()
//{
//	//左值引用不能给右值取别名，但是const左值可以
//	int& r1 = func1();
//	const int& r2 = func1();
//
//	//右值引用不能给左值取别名，但是可以给move后的左值起别名
//	int x = 1;
//	int&& rr1 = x;
//	int&& rr2 = move(x);
//	move(x);
//
//	return 0;
//}

//#include <iostream>
//
//int& getLocalVar() 
//{
//    int localVar = 42;
//    return localVar; // 返回局部变量的引用（错误）
//}
//
//int main() {
//
//    int& ref = getLocalVar();
//    std::cout << ref << std::endl; // 未定义行为
//    return 0;
////}
//#include <iostream>
//#include <cstring>
//
//class Array {
//private:
//    int* data;
//    size_t size;
//
//public:
//    // 构造函数
//    Array(size_t sz) : size(sz) {
//        data = new int[size];
//        std::cout << "Array created.\n";
//    }
//
//    // 深拷贝构造函数
//    Array(const Array& other) : size(other.size) {
//        data = new int[size];
//        std::memcpy(data, other.data, size * sizeof(int));
//        std::cout << "Deep copy constructor.\n";
//    }
//
//    // 浅拷贝构造函数（这是一种错误的做法）
//    Array shallow_copy(const Array& other)
//    {
//        this->size = other.size;
//        this->data = other.data; // 仅复制指针，两个对象共享同一块内存
//        std::cout << "Shallow copy.\n";
//        return *this;
//    }
//
//    // 移动构造函数
//    Array(Array&& other) noexcept : size(other.size), data(other.data) {
//        other.data = nullptr; // 释放所有权
//        other.size = 0;
//        std::cout << "Move constructor.\n";
//    }
//
//    // 析构函数
//    ~Array() {
//        delete[] data;
//        std::cout << "Array destroyed.\n";
//    }
//
//    void print() const {
//        for (size_t i = 0; i < size; ++i) {
//            std::cout << data[i] << " ";
//        }
//        std::cout << "\n";
//    }
//
//    // 填充数组数据
//    void fill(int value) {
//        for (size_t i = 0; i < size; ++i) {
//            data[i] = value;
//        }
//    }
//};
//
//int main() {
//    Array arr1(5);
//    arr1.fill(10);
//    std::cout << "Original Array: ";
//    arr1.print();
//
//    // 深拷贝
//    Array arr2 = arr1; // 使用深拷贝构造函数
//    std::cout << "Deep Copied Array: ";
//    arr2.print();
//
//    // 修改原数组，不影响深拷贝的数组
//    arr1.fill(20);
//    std::cout << "Modified Original Array: ";
//    arr1.print();
//    std::cout << "Deep Copied Array after modifying original: ";
//    arr2.print();
//
//    // 浅拷贝
//    Array arr3(5);
//    arr3 = arr3.shallow_copy(arr1); // 使用浅拷贝方法
//    std::cout << "Shallow Copied Array: ";
//    arr3.print();
//
//    // 修改原数组，浅拷贝的数组也被影响
//    arr1.fill(30);
//    std::cout << "Modified Original Array: ";
//    arr1.print();
//    std::cout << "Shallow Copied Array after modifying original: ";
//    arr3.print();
//
//    return 0;
//}



//void modify(int&& r) {
//    r = 20; // 这里 r 是一个左值
//    std::cout << "r: " << r << std::endl;
//}
//
//int main() {
//    modify(10); // 10 是右值，但在函数中被绑定到右值引用 r
//    return 0;
//}

#include <iostream>
using namespace std;
void Fun(int& x) { cout << "左值引用" << endl; }
void Fun(const int& x) { cout << "const 左值引用" << endl; }
void Fun(int&& x) { cout << "右值引用" << endl; }
void Fun(const int&& x) { cout << "const 右值引用" << endl; }

template<typename T>
void PerfectForward(T&& t)
{
   /* Fun(t);*/
    Fun(forward<T>(t));
}

int main()
{
    PerfectForward(10);//右值，预计调用void Fun(int&& x) { cout << "右值引用" << endl; }
    int a;
    PerfectForward(a); //左值
    PerfectForward(move(a)); // 右值，预计调用void Fun(int&& x) { cout << "右值引用" << endl; }
    const int b = 8;
    PerfectForward(b);//左值
    PerfectForward(move(b)); // const 右值，预计调用void Fun(const int&& x) { cout << "const 右值引用" << endl; }
    return 0;
}

