#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	/*float f1 = 3.14f;
	cout << "f1=  " << f1 << endl;

	double d1 = 3.14;
	cout << "d1=  " << d1 << endl;*/



	//����Ŀǰc++��������ʾ�����6λ��Ч���֡���������������float����double��
	//�����Ҫ����ʾ��Ч���֣���Ҫ����������á�������cout.precision��������
	//cout.precision(10);
	float f1 = 3.1415926f;
	cout << "f1=  " << f1 << endl;

	double d1 = 3.141592657;
	cout << "d1=  " << d1 << endl;


	//��ѧ��������ʾ
	float  f2 = 3e2;
	cout << "f2 =  " << f2 << endl;


	//�ַ��ͱ���
	//һЩ�򵥵�ASIIC���Ӧ
	//a - 97
	//A - 65
	char ch = 'a';
	cout << ch << endl;
	cout << "ռ�õ��ڴ�ռ� �� " << sizeof(char) << endl;
	cout << (int)ch << endl;

	//ת���ַ�

	// ���з�\n

	cout << "Hello world!\n";

	 
	// ��б�� \\

	cout << "\\\n";


	// ˮƽ�Ʊ�� \t
	//����ô����ܹ�����
	//һ��ˮƽ�Ʊ����8���ַ�
	
	cout << "aaa\thelloworld" << endl;
	cout << "aaaaa\thelloworld" << endl;
	cout << "aaaaaa\thelloworld" << endl;

	cout << "aaaaaaaa\theoolworld " << endl;


	system("pause");
	return 0;
}