/*Equilateral triangle
 side1 = side2 = side3
 Isosceles triangle
 side1 = side2 && side3 != side1 && side 1 != side3
 Scalene triangle
 side1 != side2 != side3
*/
#include <iostream>
using namespace std;
int main() {
 float side1, side2,side3;

 cout<<"Enter side 1: \n";
 cin>>side1;
 cout<<"Enter side 2: \n";
 cin>>side2;
 cout<<"Enter side 3: \n";
 cin>>side3;
 if (side1 >0 && side2 >0 && side3 >0) {
  if (side1 == side2 && side2 == side3) {
   cout<<"This is an Equilateral Triangle";
  } else if (side1 == side2 && side3 != side1 || side1 == side3 && side2 != side1 || side2 == side3 && side1 != side2) {
   cout<<"This is an Isosceles Triangle";
  }else {
   cout<<"This is a Scalene Triangle";
  }


 }else {
  cout<<"Enter values greater than 0 \n";
 }






 return 0;
}