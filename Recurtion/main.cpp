#include <iostream>
#include <conio.h>

using namespace std; 
using std::cout; 
//# define FACTORIAL
//# define POWER
//# define FIBONACCI

void elevator (int floor);
int factorial(int n);
double power(double n, int a);
int Fibonacci(int n); 

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello" << endl; 
	//Stack (стопка) - модель памяти из которой последный записанный элемент записываеится первым:
	// LIFO - LastIn-FirstOut (последний зашел- первый вышел)
	// Queue(очередь) - это модель памяти, из который записанный элемент считывается первым
	// LIFO - FirstIn - FirstOut (первый зашел - первый вышел)
	//..cout << "Для выхода нажнмите Esc, для продолжения нажмите любую клавишу" << endl; 
	//if (_getch() != 27) main();
	int n; 
	//cout << "Введите номер этажa: "; cin >> n; 
	//elevator(n);

#ifdef FIBONACCI
			//_Factorial
	cout << "Введите число: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FIBONACCI


	// Power
#ifdef POWER
	double n; // основание  
	int a; //степень 
	cout << "Введите основание: "; cin >> n;
	cout << "Введите степень: "; cin >> a;
	cout << power(n, a) << endl;

#endif // POWER

	// Fibonacci
	//int n; 
	cout << "Введите предельное число: "; cin >> n; 
	cout << Fibonacci(n) << endl;
	
	for (int i = 1; i < 15; i++) // вывод на экран 
	{
		n = Fibonacci(i);
		cout << n << "\t";
	}
	cout << endl; 
	return;
	
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << "м этаже\n"; 
	
	elevator(floor-1); // рекурсивный вызов функции
	cout << "Вы на " << floor << "м этаже\n"; // рекурсивный возврат 

}
int factorial(int n)
{
	if (n == 0)return 1;
	else return n * factorial(n - 1);
	//  return n == 0 ? 1: n * factorial(n - 1); тернаный оператор 
	
}

double power(double n,int a)
{
	if (a == 0)return 1;
	else return n *= power(n,a-1);
	//return a == 1 ? n : n *= power(n, a - 1); тернаный оператор 
} 
int Fibonacci(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	else return Fibonacci(n - 1) + Fibonacci(n - 2);
}