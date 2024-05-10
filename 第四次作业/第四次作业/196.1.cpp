#include<iostream>
using namespace std;
class Box
{
public:
	void seta();
	int getvolume();
	int getarea();
	void disp();
private:
	int a;
	int volume;
	int area;
};
void Box::seta()
{
	cout << "设定边长为:";
	cin >> a;
}
int Box::getvolume()
{
	int  b, c;
	b = a;
	c = a;
	volume = a * b * c;
	return volume;
}
int Box::getarea()
{
	 int b;
	 b = a;
	 area = 6 * a * b;
	 return area;
}
void Box::disp() 
{
	cout << "立方体的边长为：" << a << ",";
	cout << "立方体的体积为:" << volume << ",";
	cout << "立方体的表面积为：" << area << endl;
}
int main()
{
	Box X;
	X.seta();
	X.getvolume();
	X.getarea();
	X.disp();
		return 0;
}