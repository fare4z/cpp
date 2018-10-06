#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

/* Fareez Borhanudin */

void main()
{
   int matrix[3][3]={{11,12,13},{14,15,16},{17,18,19}};
   int temp;

   cout<<"Matrix BEFORE..." <<endl;
   for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      cout << setw(3) <<matrix[i][j] <<" ";
    }
    cout << endl;
  }

  //Excluded middle row
 for (int i=0; i<3/2; i++)
 {
   for (int j=0; j<3; j++)
  {

      temp = matrix[i][j];
      matrix[i][j] = matrix[2-i][2-j];
      matrix[2-i][2-j] = temp;
  }
}

   //Middle row
   int i=1;
     for(int j=0; j<=3/2; j++)
  {
      temp = matrix[i][j];
      matrix[i][j] = matrix[2-i][2-j];
      matrix[2-i][2-j] = temp;

    }


    cout<<"Matrix AFTER..." <<endl;
   for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      cout << setw(3) <<matrix[i][j] <<" ";
    }
    cout << endl;

   }
   getch();

   }

