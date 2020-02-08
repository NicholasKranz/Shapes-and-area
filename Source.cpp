// Lab 4 areas.cpp 
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM. 
// NICHOLAS KRANZ.
#include <iostream>
#include <string>

using namespace std;

 int main()
{
     double pi;
     int shape;
     double base;
     double height;
     double side;
     double radius;
     
     cout << "Program to calculate areas of objects.\n" << endl;
     cout << "\n" << endl;
     cout << " 1 -- Square.\n 2 -- Circle.\n 3 -- Right Triangle.\n 4 -- Exit.\n" << endl;
 
          cin >> shape;

          if (shape == 1) {
              cout << "choose side length: " << endl;
              cin >> side;
              double areaSq = (side * side);
              cout << "the area of your square is: "<< areaSq << endl;
          }
          else if (shape == 2) {
              pi = 3.14;
              cout << "Enter radius: " << endl;
              cin >> radius;
              double areaCirc = (pi * radius * radius);
              cout << "the area of your circle is: " << areaCirc << endl;
          }
          else if (shape == 3) {
              cout << "choose base length: " << endl;
              cin >> base;
              cout << "chose height length: " << endl;
              cin >> height;
              double areaTri = (base / 2) * height;
              cout << "the area of your triangle is: " << areaTri << endl;
          }  
          else if (shape == 4) {
              cout << "Exit" << endl;

          }
          else {
              cout << "Only integers 1 - 4 are accepted" << endl;

          }
            return 0;
     }




