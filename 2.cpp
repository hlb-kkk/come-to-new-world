#include <iostream>
#include <string>
#include <vector>

using namespace std;

int t() {

	//��ʶ������������
	//1.��ʶ�������ǹؼ���
	//2.��ʶ��ֻ������ĸ�����֡��»������
	//3.��һ���ַ�����Ϊ��ĸ�����»���
	//4.��ʶ������ĸ���ִ�Сд

	int a = 10;
	int a_ = 10;
	int a_1 = 10;
	int A_1 = 10;

	short b = 13;
	short c = 34;

	long d = 46423;
	long e = 74937;

	long long f = 432789;

	// �ؼ���sizeof
	//������sizeof���������ռ�ڴ��С
	cout << "short ��ռ�ڴ�ռ��� " << sizeof(short) << endl;
	cout << "int ��ռ�ڴ�ռ��� " << sizeof(int) << endl;
	cout << "long��ռ�ڴ�ռ��� " << sizeof(long) << endl;
	cout << "long long ��ռ�ڴ�ռ��� " << sizeof(long long) << endl;

	cout << sizeof(a) << endl;




	system("pause");
	return 0;
}