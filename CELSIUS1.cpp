# include <iostream>
using namespace std;
int main()
{
float C,F; 
cout << "\n Enter celsius  :    ";
cin >> C;
cout << "Fahrenheit = " << C * 1.800 + 32.00  << endl;
F = C * 1.800 + 32.00;
cout << "\n Now weather in Thailand is " ;
cout << ((F < 70 ) == 0 ? " Hot " : "Cool");
	return (0);
}