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
	//Stack (������) - ������ ������ �� ������� ��������� ���������� ������� ������������� ������:
	// LIFO - LastIn-FirstOut (��������� �����- ������ �����)
	// Queue(�������) - ��� ������ ������, �� ������� ���������� ������� ����������� ������
	// LIFO - FirstIn - FirstOut (������ ����� - ������ �����)
	//..cout << "��� ������ �������� Esc, ��� ����������� ������� ����� �������" << endl; 
	//if (_getch() != 27) main();
	//int n; 
	//cout << "������� ����� ����a: "; cin >> n; 
	//elevator(n);


#ifdef factorial
			//_Factorial
	int n;
	cout << "������� �����: "; cin >> n;
	cout << factorial(n) << endl;
#endif // factorial

//--------------------------------------------//

#ifdef POWER
	// Power
	//double n; // ���������  
	//int a; //������� 
	//cout << "������� ��������� �������: "; cin >> n;
	//cout << "������� ���������� �������: "; cin >> a;
	//cout << power(n, a) << endl;

#endif // POWER

	// Fibonacci
	int n; 
	cout << "������� ���������� �����: "; cin >> n; 
	//cout << Fibonacci(n) << endl;
	FIB2(n);
	//int num; 
	//cout << "������� ���������� ���������: "; cin >> num; 
	//for (int i = 0; i <= num; i++) // ����� �� ����� 
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

//double power(double n,int a)
//{
//	if (a == 0)return 1;
//	else return n *= power(n,a-1); // ����� ����, ���� ���� ��� ����������� ���������;
//	//return a == 1 ? n : n *= power(n, a - 1); �������� �������� 
//} 
int Fibonacci(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	else return Fibonacci(n - 1) + Fibonacci(n - 2);
}
// ������ ������� �������
double power(double n, int a)
{
	/*if (a == 0)return 1;
	else if (a > 0) return n * power(n, a - 1);
	else return 1 / n * power(n, a + 1);*/
	// return a == 0 ? 1 : a > 0 ? n * power(n, a - 1) : 1 / n * power(n, a + 1); // ��������� 
	return a == 0 ? 1 : a > 0 ? n * power(n, a - 1) : 1 / power(n, -a); // ���������, ������ ���� �� ���������������: - �� - ����� +;
}

void FIB2(int n, int a, int b)
{
	if (a > n) return;
	cout << a << "\t";
	FIB2(n, b, a + b);
}
