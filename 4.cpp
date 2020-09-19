#include <iostream>
#include <string>
#include <vector>


using namespace std;

int t()
{
	char str1[] = "hello_world";
	cout << str1 << endl;


	string str2 = "hello_world";
	cout << str2 << endl;


	bool flag = true; //此时给flag指定为true， 实际flag为1
	cout << flag << endl;

	flag = false; //此时给flag重新赋值
	cout << flag << endl;

	cout << "The size of bool = " << sizeof(bool) << endl; //bool占用空间大小为 1 


	//整型
	int a = 0;
	cout << "请给a赋值 ： " << endl;
	cin >> a;
	cout << "a的值为： " << a << endl;

	//浮点型
	float b;
	cout << "请给b赋值 ： " << endl;
	cin >> b;
	cout << "b的值为： " << b << endl;

	//字符型
	char ch = 'd';
	cout << "请给字符型变量ch赋值：" << endl;
	cin >> ch;
	//cout << "字符型变量ch的值是 ： " << ch << endl;

	//字符串型
	string str = "hello world";
	cout << str << endl;
	cout << "请给字符串赋值： " << endl;
	/*cin >> str;*/
	getline(cin, str);
	cout << "字符串变量str的值是： " << str << endl;
	//bool类型
	cout << "请给布尔类型flag赋值： " << endl;
	cin >> flag;
	cout << "布尔类型flag= " << flag << endl;

	int r = 10;
	//int u = 4;
	double u = 4.56;


	cout << r + u << endl;
	cout << r - u << endl;
	cout << r * u << endl;
	cout << r / u << endl;


	system("pause");
	return 0;
}