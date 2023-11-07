#include <iostream>
using namespace std;
//void mySwap(int& pa, int& pb)//注意用法
//{
//    if (pa > pb){
//        int temp = pa;
//        pa = pb;
//        pb = temp;
//    }
//}
//int main()
//{
//    int a, b, c;
//    cout << "输入变量a\n";
//    cin >> a;
//    cout << "输入变量b\n";
//    cin >> b;
//    cout << "输入变量c\n";
//    cin >> c;
//    mySwap(a, b);
//    mySwap(a, c);
//    mySwap(b, c);
//    cout << "从小到大排序:" << a << "," << b << "," << c << endl;
//}

//int main()
//{
//	char s1[80] = "123", s2[80] = "456";
//	char* s3;
//	size_t len = strlen(s1) + strlen(s2) + 1;
//	s3 = new char[len] {};
//	strcpy_s(s3, len, s1);
//	strcat_s(s3, len, s2);
//	cout << s3 << endl;
//	delete[] s3;
//}//内存申请与释放（重要）

//int main()
//{
//	const int count = 5;
//	char str[count][80];
//	cout << "输入5个字符串\n";
//	for (int i = 0; i < 5; i++){
//		cin >> str[i];
//	}
//	//比较大小，排序
//	for (int i = 0; i < count - 1; i++){
//		for (int j = i + 1; j < count; j++){
//			if (strcmp(str[i], str[j]) > 0) {
//				char temp[80];
//				memcpy(temp, str[i], 80);
//				memcpy(str[i], str[j], 80);
//				memcpy(str[j], temp, 80);
//			}
//		}
//	}
//	cout << "结果为："<<endl;
//	for (int i = 0; i < 5; i++){
//		cout << str[i] << endl;
//	}
//}