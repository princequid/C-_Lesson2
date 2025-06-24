#include <iostream>
using namespace std;
/*base salary
firstBonus is based on number of years worked at the store
years <= 5 firstBonus = years * $10
years > 5 firstBonus = years * $20
secondBonus is based on sales made within the month
sales >= $5000 & sales < 10000 secondBonus = 0.03 * sales
sales >= 10000 secondBonus = sales * 0.06
 */

int main() {
 //Declare variables
 float baseSalary;
 int years;
 float sales;
 float firstBonus;
 float secondBonus;
 float netSalary;
 string fullName;


 cout<<"Enter your full name \n";
 getline(cin,fullName);
 //The base salary of the salesperson
 cout<<"Enter your base salary:\n";
 cin>>baseSalary;
 // The number of years the salesperxon has worked there
 cout<<"Enter your years:\n";
 cin>>years;
 //The sales made within the month
 cout<<"Enter your monthly sales:\n";
 cin>>sales;
 //Finding the firstBonus based on the number of years
 if (years <= 5) {
  firstBonus = 10 * years;
 } else {
  firstBonus = 20 * years;
 }
 //secondBonus is based on sales made within the month
 if (sales >= 5000 && sales < 10000 ) {
  secondBonus = 0.03 * sales;
 } else if (sales >= 10000) {
  secondBonus = 0.06 * sales;
 }else {
  secondBonus = 0 * sales;
 }
 netSalary = baseSalary + firstBonus + secondBonus;



 cout<<"___________________ Paycheck_______________\n";
 cout<<"__________________Simon And Sons_____________\n";
 cout<<"Full name   : "<<fullName<<endl;
 cout<<"Base Salary : $"<<baseSalary<<endl;
 cout<<"First Bonus : $"<<firstBonus<<endl;
 cout<<"Second Bonus: $"<<secondBonus<<endl;
 cout<<"Net Salary  : $"<<netSalary<<endl;





}