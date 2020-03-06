//areas.cpp
//NICHOLAS KRANZ
#include <iostream>
#include <string>
using namespace std;

double pi;
int shape;
double base;
double height;
double side;
double radius;

void displaymenu() {

	cout << "Program to calculate areas of objects. \n" << endl;
	cout << "\n" << endl;
	cout << "1 -- Square. \n 2 -- Circle.\n 3 -- Right Triangle.\n 4 -- Exit. \n" << endl;

	cin >> shape;

}

void findSquareArea() {
	cout << "choose side length " << endl;
	cin >> side;
	double areaSq = (side * side);
	cout << "the area of your square is: " << areaSq << "\n" << endl;
}

void findCircleArea() {
	pi = 3.14;
	cout << "enter radius " << endl;
	cin >> radius;
	double areaCirc = (pi * radius * radius);
	cout << "the area of your circle is: " << areaCirc << "\n" << endl;
}

void findTriangleArea() {
	cout << "choose base length: " << endl;
	cin >> base;
	cout << "choose height length: " << endl;
	cin >> height;
	double areaTri = (base / 2) * height;
	cout << "the area of your triangle is: " << areaTri << "\n" << endl;
}

int main() {

	do {
		displaymenu();

		if (shape == 1) {
			findSquareArea();
		}

		else if (shape == 2) {
			findCircleArea();
		}

		else if (shape == 3) {
			findTriangleArea();
		}

		else if (shape == 4) {
			cout << "Exit" << endl;
		}
	} while (shape != 4);
}
