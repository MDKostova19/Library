#include<iostream>
#include"MathLibrary.h"
using namespace std;
int main() {
	int a, b, c, h;
	cout << "The first side you enter is the base of the triangle" << endl;
	cout << "Enter the sides: " << endl;
	cin >> a >> b >> c;
	cout << "Enter the height: " << endl;
	cin >> h;

	triangle(a, b, c, h);
}