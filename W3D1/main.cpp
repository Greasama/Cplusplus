//#include<iostream>
//using namespace std;
//
//struct student
//{
//	int index;
//	int age;
//	const char* name;
//}student4{4, 25, "����"};
//
//void displaystudent(student & pstudent)
//{
//	cout << "ѧ��Ϊ" << pstudent.index << endl;
//	cout << "����Ϊ" << pstudent.age << endl;
//	cout << "����Ϊ" << pstudent.name << endl;
//}
//
//int main()
//{
//	student student1;
//	student1.index = 1;
//	student1.age = 20;
//	student1.name = "����";
//	cout << "ѧ��Ϊ" << student1.index << endl;
//	cout << "����Ϊ" << student1.age << endl;
//	cout << "����Ϊ" << student1.name << endl;
//	student student2 = student1;
//	cout << "ѧ��Ϊ" << student2.index << endl;
//	cout << "����Ϊ" << student2.age << endl;
//	cout << "����Ϊ" << student2.name << endl;
//	student student3{ 3,24,"����" };
//	cout << "ѧ��Ϊ" << student3.index << endl;
//	cout << "����Ϊ" << student3.age << endl;
//	cout << "����Ϊ" << student3.name << endl;
//
//	cout << "ѧ��Ϊ" << student4.index << endl;
//	cout << "����Ϊ" << student4.age << endl;
//	cout << "����Ϊ" << student4.name << endl;
//
//	cout << sizeof(student) << endl;
//}

//#include <iostream>
//using namespace std;
//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//struct student {
//	int index;
//	int age;
//	const char* name;
//	char c;
//}student1;
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	cout << sizeof(student) << endl;
//}

//#include <iostream>
//using namespace std;
//struct country{
//	char ��������[20];
//	double �˿�;//��Ϊ��λ
//	double ���;//��ƽ������Ϊ��λ
//}����[5] ={
//	{"�й�",14.63,960},{"����",3.320,937},{"ӡ��",14.08,298},{"�ձ�",1.260,38},{"ӡ��",2.540,191}
//};
//void displayCountry(country* _country){
//	cout << "���ң�" << _country->�������� << "\t\t"
//		<< "�˿ڣ�" << _country->�˿� <<"��" << "\t\t"
//		<< "�����" << _country->��� <<"��ƽ������" << "\t\t"
//		<< endl;
//}
//void SortCountry(country _country[], int len){
//	for (int i = 0; i <= len - 2; i++)
//		for (int j = i + 1; j <= len - 1; j++) {
//			if (_country[i].�˿� < _country[j].�˿�) {
//				country temp = _country[i];
//				_country[i] = _country[j];
//				_country[j] = temp;
//			}
//		}
//}
//int main(){
//	SortCountry(����, 5);
//	for (int i = 0; i < 5; i++){
//		displayCountry(&����[i]);
//	}
//}//�����245

//#include <iostream>
//#include<string>
//using namespace std;
//enum class day { Sunday = 7, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6 };
//void test1(day _day)
//{
//	cout << "Current day is " << (int)_day << endl;//���
//}
//void test2(int _day)
//{
//	cout << "Current day is " << _day << endl;//���
//}
//int main()
//{
//	test1(day::Monday);
//	test2(1);
//}//ö��

//#include<iostream>
//using namespace std;
//enum week {Mon=1,Tues,Wed,Thurs,Fri,Sat,Sun};
//int main()
//{
//	week day;
//	int temp;
//	cin >> temp;
//	//����Ϊ1���Mon
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
////���120

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
//		cout << "��student������" << endl;
//	}
//	~student(){
//		cout << "��student���ͷ�" << endl;
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
//		cout << "ѧ��:" << index << endl;
//		cout << "����:" << name << endl;
//		cout << "����:" << age << endl;
//	}
//};
//
//int main()
//{
//	{
//		student student1;//��Ķ���
//		//student1.index = 1;
//		//student1.age = 20;
//		//student1.name = "����";
//		student1.display();
//		student student2(2, 25, "lisa");
//		student student3(3, 20);
//		student3.name = "����";
//		student2.display();
//	}//���Ų��Թ��캯������������
//	system("pause");
//}


//int main()
//{
//	student stu1(2, 22, "����");
//	student* pstu1 = &stu1;
//	pstu1->setname("����");
//	pstu1->age = 23;
//	pstu1->display();
//	student* pstu2 = new student(5, 22, "����");//��ִ�й��캯��
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
//    int a;//ʵ��
//    int b;//���
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
//    std::cout << "�ı�ֵ��Ľ����" << endl;
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
	static const char* course; //��ľ�̬����
	static void printCourse() //��ľ�̬��Ա����
	{
		cout << "�γ�=" << course << endl;
	}
	void print()
	{
		cout << "�γ�=" << course << endl;
	}
};
const char* Student::course = "C++";
int main()
{
	Student::course = "java";
	Student::printCourse();
	Student A;
	A.course = "C++";//������ȼ�
	Student::course = "C++";
	A.printCourse();//������ȼ�
	Student::printCourse();
}