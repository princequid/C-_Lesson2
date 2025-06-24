/*
 If 1 == Monday
 If 2 == Tuesday
 If 3 == Wednesday
 If 4 == Thursday
 If 5 == Friday
 If 6 == Saturday
 If 7 == Sunday
 */

#include <iostream>
using namespace std;

int main() {
 int day;

 //Day of the week inputted
 cout<< "Enter the number of your day: "<< endl;
 cin >> day;

 switch (day) {
  case 1:
   cout<< "Monday"<<endl;
   break;
   case 2:
   cout<< "Tuesday"<<endl;
   break;
   case 3:
   cout<< "Wednesday"<<endl;
   break;
   case 4:
   cout << "Thursday"<<endl;
   break;
   case 5:
   cout<< "Friday"<<endl;
   break;
   case 6:
   cout<< "Saturday"<<endl;
   break;
   case 7:
   cout<< "Sunday"<<endl;
   break;
 }
 // if (day == 1) {
 //  cout<< "The Day is Monday";
 // }else if (day == 2) {
 //  cout << "The Day is Tuesday";
 // }else if (day == 3) {
 //  cout << "The Day is Wednesday";
 // }else if (day == 4) {
 //  cout << "The Day is Thursday";
 // }else if (day == 5) {
 //  cout << "The Day is Friday";
 // }else if (day == 6) {
 //  cout << "The Day is Saturday";
 // }else if (day == 7) {
 //  cout << "The Day is Sunday";
 // }

 return 0;
}