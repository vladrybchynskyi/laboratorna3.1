// labcode31.cpp
// Рибчинський Владислав
// Лабораторна робота №3.1
// Варіант 12
#include <iostream>
#include <cmath>
using namespace std;
int main() {
 double x; // вхідний параметр
 double y; // результат обчислення
 double A; // проміжний результат 
 double B; // проміжний результат
 cout << "x= ", cin >> x;
 A = ((2+x)/x*x) + 1;
   //Розгалуження в скороченій формі
   if (x < 0)
   B = x *x - 2 *x *x *x *x;
   if (x >= 0 && 2 >= x) 
   B = (fabs(x) + exp(x))* (fabs(x) + exp(x)) * (fabs(x) + exp(x));
   if (x > 2)
   B = 4 *cos(x *x -2);
   y = A + B;
   cout << endl;
   cout << "1) y =" << y << endl;
   // Повне розгалуження
   if (x < 0)
   B = x *x *x -2;
     else
     if (x >=  0 && 2 >= x)
     B = (fabs(x) + exp(x)) * (fabs(x) + exp(x)) * (fabs(x) + exp(x)) ;
       else 
         if (x >= 2)
         B = 4 *cos(x *x -2);
         y = A + B;
         cout << endl;
         cout << "2) y=" << y << endl;
         cin.get();
    return 0;
}
