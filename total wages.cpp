#include<iostream.h>
#include<conio.h>
#include<iomanip>

/* 
Fareez Borhanudin 
Basic C++
*/

int main ()
{
double wages, hours , rate;



cout<< "Enter working hours and rate:";
cin >> hours >> rate;

if (hours > 40.0)
	wages = 40.0 * rate +
    1.5 * rate * (hours - 40.0);

else

	wages = hours * rate;



 cout << endl;
 cout << " the wages are RM : " << wages << endl;
 cout <<



getch () ;
return 0;
}
