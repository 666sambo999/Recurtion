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
	//Stack (������) - ������ ������ �� ������� ��������� ���������� ������� ������������� ������:
	// LIFO - LastIn-FirstOut (��������� �����- ������ �����)
	// Queue(�������) - ��� ������ ������, �� ������� ���������� ������� ����������� ������
	// LIFO - FirstIn - FirstOut (������ ����� - ������ �����)
	//..cout << "��� ������ �������� Esc, ��� ����������� ������� ����� �������" << endl; 
	//if (_getch() != 27) main();
	int n; 
	//cout << "������� ����� ����a: "; cin >> n; 
	//elevator(n);

#ifdef FIBONACCI
			//_Factorial
	cout << "������� �����: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FIBONACCI


	// Power
#ifdef POWER
	double n; // ���������  
	int a; //������� 
	cout << "������� ���������: "; cin >> n;
	cout << "������� �������: "; cin >> a;
	cout << power(n, a) << endl;

#endif // POWER

	// Fibonacci
	//int n; 
	cout << "������� ���������� �����: "; cin >> n; 
	cout << Fibonacci(n) << endl;
	
	for (int i = 1; i < 15; i++) // ����� �� ����� 
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
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << "� �����\n"; 
	
	elevator(floor-1); // ����������� ����� �������
	cout << "�� �� " << floor << "� �����\n"; // ����������� ������� 

}
int factorial(int n)
{
	if (n == 0)return 1;
	else return n * factorial(n - 1);
	//  return n == 0 ? 1: n * factorial(n - 1); �������� �������� 
	
}

double power(double n,int a)
{
	if (a == 0)return 1;
	else return n *= power(n,a-1);
	//return a == 1 ? n : n *= power(n, a - 1); �������� �������� 
} 
int Fibonacci(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	else return Fibonacci(n - 1) + Fibonacci(n - 2);
}