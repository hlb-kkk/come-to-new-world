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


	bool flag = true; //��ʱ��flagָ��Ϊtrue�� ʵ��flagΪ1
	cout << flag << endl;

	flag = false; //��ʱ��flag���¸�ֵ
	cout << flag << endl;

	cout << "The size of bool = " << sizeof(bool) << endl; //boolռ�ÿռ��СΪ 1 


	//����
	int a = 0;
	cout << "���a��ֵ �� " << endl;
	cin >> a;
	cout << "a��ֵΪ�� " << a << endl;

	//������
	float b;
	cout << "���b��ֵ �� " << endl;
	cin >> b;
	cout << "b��ֵΪ�� " << b << endl;

	//�ַ���
	char ch = 'd';
	cout << "����ַ��ͱ���ch��ֵ��" << endl;
	cin >> ch;
	//cout << "�ַ��ͱ���ch��ֵ�� �� " << ch << endl;

	//�ַ�����
	string str = "hello world";
	cout << str << endl;
	cout << "����ַ�����ֵ�� " << endl;
	/*cin >> str;*/
	getline(cin, str);
	cout << "�ַ�������str��ֵ�ǣ� " << str << endl;
	//bool����
	cout << "�����������flag��ֵ�� " << endl;
	cin >> flag;
	cout << "��������flag= " << flag << endl;

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