#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	int t = 10;
	int r = 3;
	cout << t % r << endl;

	int a1 = 10;
	a1++;
	cout << a1 << endl;

	int b1 = 10;
	++b1;
	cout << b1 << endl;

	int a2 = 10;
	int b2;
	b2 = a2++ * 10;
	cout << "a2=:" << a2 << endl;
	cout << "b2= " << b2 << endl;

	int a3 = 10;
	int b3;
	b3 = ++a3 * 10;
	cout << "a3=:" << a3 << endl;
	cout << "b3= " << b3 << endl;


	int a4 = 6;
	cout << a4 << endl;
	
	a4 += 2;
	cout << a4 << endl;

	a4 -= 5;
	cout << a4 << endl;

	a4 *= 10;
	cout << a4 << endl;

	a4 /= 5;
	cout << a4 << endl;

	a4 %= 2;
	cout << a4 << endl;












	system("pause");
	return 0;

}