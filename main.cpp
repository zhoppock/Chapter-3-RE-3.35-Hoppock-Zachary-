#include <iostream>

using namespace std;

int main()
{  

int quarters;
cout << "Enter the number of quarters: "; 
cin >> quarters;
cout << quarters << endl;
if (cin.fail()) { cout << "Input error."; }


return 0;
}