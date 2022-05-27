#include <iostream>
using namespace std;

int main()
{
	//int start = 1;
	//int end = 100;

	//while (start != end)
	//{
	//	start++;
	//	if (start % 2 == 0)
	//	{
	//		cout << start << " ";
	//	}
	//}

	//setlocale(0, "UKR");
	//int temp = 0;

	//cout << "Укажите начало диапазона: ";
	//int start;
	//cin >> start;

	//cout << "Укажите конец диапазона: ";
	//int end;
	//cin >> end;

	//while (start != end)
	//{
	//	start++;
	//	temp += start;
	//}
	// 
	//cout << "\nСумма чисел в диапазоне: " << temp + 1 << "\n";


	//setlocale(0, "UKR");

	//cout << "Укажите начало диапазона: ";
	//float start;
	//cin >> start;

	//cout << "Укажите конец диапазона: ";
	//float end;
	//cin >> end;

	//cout << "C        F\n\n";

	//while (start != end)
	//{
	//	cout << start << "        " << (start * 9/5) + 32 << "\n";
	//	start++;
	//}

	//setlocale(0, "UKR");

	//cout << "Введите число: ";
	//int num;
	//cin >> num;

	//int temp = 1;
	//int factorial = num;

	//while (temp != num)
	//{
	//	factorial *= temp;
	//	temp++;
	//}
	// 
	//cout << "\nФакториал введённого числа: " << factorial << "\n";

	setlocale(0, "UKR");

	cout << "Введите число: ";
	int num;
	cin >> num;

	int sum = num % 10;
	int counter = 1;

	while ((num /= 10) > 0)
	{
		counter++;
		sum += num % 10;
	}

	cout << "\nКоличество цифр в числе: " << counter << "\nСумма цифр в числе: " << sum << "\n";
}
