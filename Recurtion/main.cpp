#include <iostream>
#include <conio.h>

using namespace std; 
using std::cout; 
//#define FACTORIL
//#define POWER


void elevator (int floor);
int factorial(int n);
double power(double n, int a);
int Fibonacci(int n); 
void FIB2(int n, int a = 0, int b = 1);

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
	//int n; 
	//cout << "Введите номер этажa: "; cin >> n; 
	//elevator(n);


#ifdef factorial
			//_Factorial
	int n;
	cout << "Введите число: "; cin >> n;
	cout << factorial(n) << endl;
#endif // factorial

//--------------------------------------------//

#ifdef POWER
	// Power
	//double n; // основание  
	//int a; //степень 
	//cout << "Введите основание степени: "; cin >> n;
	//cout << "Введите показатель степени: "; cin >> a;
	//cout << power(n, a) << endl;

#endif // POWER

	// Fibonacci
	int n; 
	cout << "Введите предельное число: "; cin >> n; 
	//cout << Fibonacci(n) << endl;
	FIB2(n);
	//int num; 
	//cout << "Введите количество фиббоначи: "; cin >> num; 
	//for (int i = 0; i <= num; i++) // вывод на экран 
	//{
	//	n = Fibonacci(i);
	//	cout << n << "\t";
	//}
	//cout << endl; 
	//return;
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

//double power(double n,int a)
//{
//	if (a == 0)return 1;
//	else return n *= power(n,a-1); // вызов идет, счет идет при рекурсивных возвратах;
//	//return a == 1 ? n : n *= power(n, a - 1); тернаный оператор 
//} 
int Fibonacci(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	else return Fibonacci(n - 1) + Fibonacci(n - 2);
}
// второй вариант степени
double power(double n, int a)
{
	/*if (a == 0)return 1;
	else if (a > 0) return n * power(n, a - 1);
	else return 1 / n * power(n, a + 1);*/
	// return a == 0 ? 1 : a > 0 ? n * power(n, a - 1) : 1 / n * power(n, a + 1); // тернарник 
	return a == 0 ? 1 : a > 0 ? n * power(n, a - 1) : 1 / power(n, -a); // тернарник, меняем знак на противоположный: - на - будет +;
}

void FIB2(int n, int a, int b)
{
	if (a > n) return;
	cout << a << "\t";
	FIB2(n, b, a + b);
}
