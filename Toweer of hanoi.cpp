/* Fareez Borhanudin 
Tower Of Hanoi
Feel free for pr this code. 
*/

#include <iostream>
#include <string>

using namespace std;

void hanoi(int n, string a, string b, string c);

main() {
int disks;
cout << "-----------------" << endl;
cout << " How many disks? "<< endl;
cout << "-----------------" << endl;
cin >> disks;
hanoi(disks, "Pole 1", "Pole 2", "Pole 3");
system("PAUSE > NUL");
}

void hanoi(int n, string a, string b, string c) {
if (n == 1) {
cout << "||Move 1 disk from " << a << " to ||" << b << endl;
} else {
hanoi(n - 1, a, c, b);
cout << "||Move 1 disk from " << a << " to ||" << b << endl;
hanoi(n - 1, c, b, a);
}
}
