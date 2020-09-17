#include <iostream>
#include <string>
#include <vector>

using namespace std;

int t() {

	//标识符的命名规则
	//1.标识符不能是关键字
	//2.标识符只能由字母、数字、下划线组成
	//3.第一个字符必须为字母或者下划线
	//4.标识符中字母区分大小写

	int a = 10;
	int a_ = 10;
	int a_1 = 10;
	int A_1 = 10;

	short b = 13;
	short c = 34;

	long d = 46423;
	long e = 74937;

	long long f = 432789;

	// 关键字sizeof
	//可以用sizeof求出数据所占内存大小
	cout << "short 所占内存空间是 " << sizeof(short) << endl;
	cout << "int 所占内存空间是 " << sizeof(int) << endl;
	cout << "long所占内存空间是 " << sizeof(long) << endl;
	cout << "long long 所占内存空间是 " << sizeof(long long) << endl;

	cout << sizeof(a) << endl;




	system("pause");
	return 0;
}