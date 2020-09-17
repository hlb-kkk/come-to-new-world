#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	/*float f1 = 3.14f;
	cout << "f1=  " << f1 << endl;

	double d1 = 3.14;
	cout << "d1=  " << d1 << endl;*/



	//但是目前c++中正常显示最多是6位有效数字。无论数据类型是float还是double。
	//如果需要多显示有效数字，需要另外进行配置。可以用cout.precision（）函数
	//cout.precision(10);
	float f1 = 3.1415926f;
	cout << "f1=  " << f1 << endl;

	double d1 = 3.141592657;
	cout << "d1=  " << d1 << endl;


	//科学计数法表示
	float  f2 = 3e2;
	cout << "f2 =  " << f2 << endl;


	//字符型变量
	//一些简单的ASIIC码对应
	//a - 97
	//A - 65
	char ch = 'a';
	cout << ch << endl;
	cout << "占用的内存空间 ： " << sizeof(char) << endl;
	cout << (int)ch << endl;

	//转义字符

	// 换行符\n

	cout << "Hello world!\n";

	 
	// 反斜杠 \\

	cout << "\\\n";


	// 水平制表符 \t
	//这个用处是能够对其
	//一般水平制表符是8个字符
	
	cout << "aaa\thelloworld" << endl;
	cout << "aaaaa\thelloworld" << endl;
	cout << "aaaaaa\thelloworld" << endl;

	cout << "aaaaaaaa\theoolworld " << endl;


	system("pause");
	return 0;
}