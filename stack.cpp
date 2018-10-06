/* Fareez Borhanundin */

#include <stdio.h>
#include <conio.h>
#include <iostream>
#define MAX 5
int top, status;


//POP FUNCTION*/
int pop (int stack[])
{
int ret;
if (top == -1)
{ ret = 0;
status = 0;
}
else
{ status = 1;
ret = stack [top];
--top;
}
return ret;
}

/*PUSH FUNCTION*/
void push (int stack[], int item)
{ if (top == (MAX-1))
status = 0;
else
{ status = 1;
++top;
stack [top] = item;
}
}


/*FUNCTION TO DISPLAY STACK*/
void display (int stack[])
{ int i;
cout<< ("\nAngka giliran yang dimasukkan ialah: ")<<endl;
if (top == -1)
cout<< ("tiada")<<endl;
else
{ for (i=top; i>=0; --i)
cout<< ("%3d |\n--------",stack[i])<<endl;
}
cout<< ("\n")<<endl;
}

/*MAIN PROGRAM*/
void main()
{
int stack [MAX], item;
int angka;
clrscr ();
top = -1;
cout << ("\nSistem Angka Giliran bank")<<endl;
do
{ do
{ cout << ("\nMAIN MENU")<<endl;
cout << ("***********************************************")<<endl;
cout << ("*\Tekan 1 : Masukkan Giliran                   *")<<endl;
cout << ("*\Tekan 2 : Buang giliran yang paling belakang *")<<endl;
cout << ("*\Tekan 3 : Tutup Sistem                       *")<<endl;
cout << ("*\Sila Masukkan Pilihan Anda:                  *")<<endl;
cout << ("***********************************************")<<endl;
cin>>angka;
if (angka<1 || angka>3)
cout << ("\nInvalid Choice, Please try again")<<endl;
}while (angka<1 || angka>3);
switch (angka)
{case 1:
cout << ("\nTekan angka yang ingin dimasukkan : ")<<endl;
cin>>item;
cout<<item;
cout<<endl;
push (stack, item);
if (status)
{
cout << ("\nLepas dibuang ")<< endl;
display (stack);
if (top == (MAX-1))
cout<< ("\nSistem Overload")<<endl;
}
else
cout<< ("\nStack overflow on Push")<<endl;
break;
case 2:
item = pop (stack);
if (status)
{ cout<< ("\nThe Popped item is %d. After Popping: ")<<endl;
display (stack);
}
else
cout << ("\nStack underflow on Pop")<<endl;
break;
default:
cout << ("\nEND OF EXECUTION")<<endl;
}
}while (angka != 3);
getch();
}
