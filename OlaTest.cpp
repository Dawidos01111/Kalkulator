#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	string imie;
	string nazwisko;
	int index;
	int semestr;
	string kierunek;
	cout << "wpisz swoje imie"<< endl;
	cin >> imie;
	cout << "podaj nazwisko" << endl;
	cin >> nazwisko;
	cout << "wpisz numer indeksu" << endl;
	cin >> index;
	cout << "podaj semestr" << endl;
	cin >> semestr;
	cout << "na jakim kierunku studiujesz" << endl;
	cin >> kierunek;
	cout << imie<<" "<< nazwisko<<" "<< index << " " << semestr << " " << kierunek << endl;

	cout << "     *     " << endl;
	cout << "    ***     " << endl;
	cout << "   *****     " << endl;
	cout << "  *******     " << endl;


	int a = 521524452;
	char b = 'h';
	float c = 2;
	double d = 5.2;
	cout << "zmienna typu int:" << a<<"  "<<sizeof(int)<<endl;
	cout << "zmienna typu char:" << b<<" "<< sizeof(char)<<endl;
	cout << "zmienna typu float:" << c<< " "<<sizeof(float)<<endl;
	cout << "zmienna typu double:" << d<<" "<< sizeof(double)<<endl;
	_getch();
	return 0;
}
