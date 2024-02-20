#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	float s, price1, price2, price3, fc, totalsum1, totalsum2, totalsum3;

	cout << "Введите, пожалуйста, расстояние поездки в км: ";
	cin >> s;
	cout << "\nВведите стоимость бензина 92: ";
	cin >> price1;
	cout << "\nВведите стоимость бензина 95: ";
	cin >> price2;
	cout << "\nВведите стоимость бендина ДТ: ";
	cin >> price3;
	cout << "\nВведите расход Вашего авто на 100км: ";
	cin >> fc;
	totalsum1 = s * price1 * fc / 100;
	totalsum2 = s * price2 * fc / 100;
	totalsum3 = s * price3 * fc / 100;
	cout << "| Марка бензина | Стоимость поездки |\n";
	cout << "92\t\t\t|" << totalsum1 << "\n";
	cout << "95\t\t\t|" << totalsum2 << "\n";
	cout << "ДТ\t\t\t|" << totalsum3 << "\n";


	return 0;
}
