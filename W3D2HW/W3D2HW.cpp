//#include <iostream>
//#include<cmath>
//using namespace std;
//class Circle
//{
//private: 
//    double radius;
//public:
//    void setRadius(double r)
//    {
//        radius = r;
//    }
//    double getArea()
//    {
//        return 3.14 * radius * radius;
//    }
//};
//
//int main()
//{
//    Circle circle1, circle2;
//    circle1.setRadius(1);
//    circle2.setRadius(2.5);
//    cout << "第一个圆的面积是：" << circle1.getArea() << endl;
//    cout << "第二个圆的面积是：" << circle2.getArea() << endl;
//    return 0;
//}//习题1

//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	int v;
//	A(int n) { v = n; };
//	A(const A& a)
//	{
//		v = a.v;
//		cout << "赋值构造函数被调用" << endl;
//	}
//};
//A Func()
//{
//	A a(4);
//	return a;
//}
//int main()
//{
//	cout << Func().v << endl;
//	return 0;
//}//习题2

#include <iostream>
using namespace std;

string find(string str, char c)
{
	size_t index = str.find(c);
	string strsub = str.substr(index + 1);
	index = strsub.find(' ');
	string strResult = strsub.substr(0, index);
	return strResult;
}
int main()
{
	string str = "$OK X22.5 Y100.6 Z99.9";
	cout << find(str, 'X') << endl;
	cout << find(str, 'Y') << endl;
	cout << find(str, 'Z') << endl;
}