/*#include<iostream>
using namespace std; 
class Point
{
public:
	int P1P2();
	int GetP1();
	int GetP2();
	void Longth();
private:
	int A, B, C, D, L;
};
int Point::P1P2()
{
	int a; int b; int c; int d;
	cout << "设两点P1(a,b)和P2(c,d)，输入他们的坐标：" << endl;
	cout << "P1:";
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "P2:";
	cout << "c=";
	cin >> c;
	cout << "d=";
	cin >> d;
	A = a;
	B = b;
	C = c;
	D = d;
	return (a, b, c, d);
}
int Point::GetP1()
{
	cout << "P1（" << A << "," << B << ")" << endl;
	return (A, B);
}
int Point::GetP2()
{
	cout << "P2（" << C << "," << D << ")" << endl;
	return (C, D);
}
void Point::Longth()
{ 
	int s;
	s = (A - C) * (A - C) + (B - D) * (B - D);
	L = sqrt(s);
	cout << "两点间的距离L：" << L << endl;
}
int main()
{
	Point p;
	p.P1P2();
	p.GetP1();
	p.GetP2();
	p.Longth();
	return 0;
}*/