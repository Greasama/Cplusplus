//#include<iostream>
//using namespace std;
//
//struct student
//{
//	int index;
//	int age;
//	const char* name;
//}student4{4, 25, "大雄"};
//
//void displaystudent(student & pstudent)
//{
//	cout << "学号为" << pstudent.index << endl;
//	cout << "年龄为" << pstudent.age << endl;
//	cout << "姓名为" << pstudent.name << endl;
//}
//
//int main()
//{
//	student student1;
//	student1.index = 1;
//	student1.age = 20;
//	student1.name = "张三";
//	cout << "学号为" << student1.index << endl;
//	cout << "年龄为" << student1.age << endl;
//	cout << "姓名为" << student1.name << endl;
//	student student2 = student1;
//	cout << "学号为" << student2.index << endl;
//	cout << "年龄为" << student2.age << endl;
//	cout << "姓名为" << student2.name << endl;
//	student student3{ 3,24,"李四" };
//	cout << "学号为" << student3.index << endl;
//	cout << "年龄为" << student3.age << endl;
//	cout << "姓名为" << student3.name << endl;
//
//	cout << "学号为" << student4.index << endl;
//	cout << "年龄为" << student4.age << endl;
//	cout << "姓名为" << student4.name << endl;
//
//	cout << sizeof(student) << endl;
//}

//#include <iostream>
//using namespace std;
//#pragma pack(4)//设置默认对齐数为4
//struct student {
//	int index;
//	int age;
//	const char* name;
//	char c;
//}student1;
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	cout << sizeof(student) << endl;
//}

//#include <iostream>
//using namespace std;
//struct country{
//	char 国家名称[20];
//	double 人口;//亿为单位
//	double 面积;//万平方公里为单位
//}国家[5] ={
//	{"中国",14.63,960},{"美国",3.320,937},{"印度",14.08,298},{"日本",1.260,38},{"印尼",2.540,191}
//};
//void displayCountry(country* _country){
//	cout << "国家：" << _country->国家名称 << "\t\t"
//		<< "人口：" << _country->人口 <<"亿" << "\t\t"
//		<< "面积：" << _country->面积 <<"万平方公里" << "\t\t"
//		<< endl;
//}
//void SortCountry(country _country[], int len){
//	for (int i = 0; i <= len - 2; i++)
//		for (int j = i + 1; j <= len - 1; j++) {
//			if (_country[i].人口 < _country[j].人口) {
//				country temp = _country[i];
//				_country[i] = _country[j];
//				_country[j] = temp;
//			}
//		}
//}
//int main(){
//	SortCountry(国家, 5);
//	for (int i = 0; i < 5; i++){
//		displayCountry(&国家[i]);
//	}
//}//编程题245

//#include <iostream>
//#include<string>
//using namespace std;
//enum class day { Sunday = 7, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6 };
//void test1(day _day)
//{
//	cout << "Current day is " << (int)_day << endl;//输出
//}
//void test2(int _day)
//{
//	cout << "Current day is " << _day << endl;//输出
//}
//int main()
//{
//	test1(day::Monday);
//	test2(1);
//}//枚举

//#include<iostream>
//using namespace std;
//enum week {Mon=1,Tues,Wed,Thurs,Fri,Sat,Sun};
//int main()
//{
//	week day;
//	int temp;
//	cin >> temp;
//	//调整为1输出Mon
//	day = (week)temp;
//	switch (day)
//	{
//	case Mon:cout << "Monday";
//		break;
//	case Tues:cout << "Tuesday";
//		break;
//	case Wed:cout << "Wednesday";
//		break;
//	case Thurs:cout << "Thursday";
//		break;
//	case Fri:cout << "Friday";
//		break;
//	case Sat:cout << "Saturday";
//		break;
//	case Sun:cout << "Sunday";
//		break;
//	default:cout << "Error!";
//		break;
//	}
//	return 0;
//}
////编程120

//#include <iostream>
//#include<string>
//using namespace std;
//class student
//{
//public:
//	int index;
//	int age;
//	const char* name;
//	student(){
//		index = 1;
//		age = 23;
//		name = "1234";
//		cout << "类student被创建" << endl;
//	}
//	~student(){
//		cout << "类student被释放" << endl;
//	}
//	student(int _index, int _age, const char* _name)
//	{
//		index = _index;
//		age = _age;
//		name = _name;
//	}
//	student(int _index, int _age)
//	{
//		index = _index;
//		age = _age;
//	}
//	void display(){
//		cout << "学号:" << index << endl;
//		cout << "姓名:" << name << endl;
//		cout << "年龄:" << age << endl;
//	}
//};
//
//int main()
//{
//	{
//		student student1;//类的对象
//		//student1.index = 1;
//		//student1.age = 20;
//		//student1.name = "李四";
//		student1.display();
//		student student2(2, 25, "lisa");
//		student student3(3, 20);
//		student3.name = "大雄";
//		student2.display();
//	}//括号测试构造函数和析构函数
//	system("pause");
//}


//int main()
//{
//	student stu1(2, 22, "大雄");
//	student* pstu1 = &stu1;
//	pstu1->setname("大雄");
//	pstu1->age = 23;
//	pstu1->display();
//	student* pstu2 = new student(5, 22, "王五");//会执行构造函数
//	pstu2->display();
//	delete pstu2;
//	system("pause");
//}

//#include<iostream>
//using namespace std;
//class Complex {
//public:
//    Complex(int a = 0, int b = 0) {
//        this->a = a;
//        this->b = b;
//    }
//    void print() {
//        cout << a << "+" << b << "i" << endl;
//    }
//public:
//    int a;//实根
//    int b;//虚根
//};
//
//Complex operator+(Complex& c1, Complex& c2)
//{
//    Complex tmp(c1.a + c2.a, c1.b + c2.b);
//    return tmp;
//}
//Complex operator-(Complex& c1, Complex& c2)
//{
//    Complex tmp(c1.a - c2.a, c1.b - c2.b);
//    return tmp;
//}
//int main() {
//    Complex c1(1, 2), c2(3, 4);
//    c1.print();
//    c2.print();
//    Complex c3 = c1 + c2;//==>operator+(c1,c2);
//    c3.print();
//    Complex c4 = c1 - c2;//==>operator+(c1,c2);
//    c4.print();
//    system("pause");
//}

//#include <iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    const char* pszName = "123456";
//    char pszCamp[] = "alliance";
//    string strName;
//    string strCamp;
//    strName = pszName;
//    strCamp = pszCamp;
//    std::cout << pszName << endl;
//    std::cout << strName << endl;
//    std::cout << pszCamp << endl;
//    std::cout << strCamp << endl;
//    strName[1] = 'A';
//    strCamp[1] = 'B';
//    std::cout << "改变值后的结果：" << endl;
//    std::cout << pszName << endl;
//    std::cout << strName << endl;
//    std::cout << pszCamp << endl;
//    std::cout << strCamp << endl;
//}

#include <iostream>
using namespace std;
class Student
{
public:
	static const char* course; //类的静态变量
	static void printCourse() //类的静态成员函数
	{
		cout << "课程=" << course << endl;
	}
	void print()
	{
		cout << "课程=" << course << endl;
	}
};
const char* Student::course = "C++";
int main()
{
	Student::course = "java";
	Student::printCourse();
	Student A;
	A.course = "C++";//和下面等价
	Student::course = "C++";
	A.printCourse();//和下面等价
	Student::printCourse();
}