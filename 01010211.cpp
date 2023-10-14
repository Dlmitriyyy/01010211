#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	system("chcp 1251 > nul");

	double r0,r1, r2, r3;

	cout << "Введіть 3 числа через пробіл або з нового рядку: ";	
	cin >> r1 >> r2 >> r3;

	r0 = 1 / (1 / r1 + 1 / r2 + 1 / r3);

	cout << fixed << setprecision(3) << "Відповідь: " << r0;

	return 0;
}