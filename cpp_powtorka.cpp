// Powtórka z c++
//
/*
komentarz
wielowierszowy
*/

#include <iostream>
using namespace std;
int main()
{
	//std::cout << "fhdksh"; //bez przestrzeni nazw
	cout << "dfsjdhg" << endl; //z definicja przestrzeni nazw
	//cout -> strumien wyjsciowy (domyslnie leci na ekran)
	//cin -> strumien wejsciowy (domyślne startuje z klawiatury)
	cout << "Podaj liczbe: ";
	int a; //deklaracja zmiennej: nazwa_typu nazwa_zminnej
	//przyklady typow: int, float, char, string
	//deklaracja typu bez znaku np. unsigned int
	cin >> a;
	cout << "wprowadziles wartosc: " << a << endl;
	a = 13; //instrukcj przypisania (wartosc zapisana dziesietnie)
	a = 037; //osemkowo
	a = 0x12; //szesnastkowo
	cout << a << endl;
	//INSTRUKCE STERUJACE
	//instrukcja warunkowa
	if (a > 0) {
		cout << "liczba dodatnia"<<endl;//wykona sie jezeli warunek a>0 jest prawdziwy
	}
	else {//else jest opcjonalne
		cout << "liczb ujemna" << endl;//wykona sie w przeciwnym wypadku
	}
	//petla for
	int b = 0; //deklaracja z inicjalizacja zmiennej
	for (int i=1;i<10;i++) {//for (inicjal_zm.ster.;warunek_zakon.;krok) ...
		b += i; //b=b+i
	}
	//petla while
	b = 0;
	int y = 1;
	while (y < 10) {
		b += y;
		y++;
	}
	//petla do..while -> przynajmniej raz sie wykona
	b = 0;
	y = 1;
	do {
		b += y;
		y++;
	} while (y < 10);
	//instrukcje warunkowa lub operator trojkowy
	a = -10;
	y = (a > 0) ? 1 : -1; // warunek ? do_zwrotuJesliPrawda : do zwrotuJesliFalsz
	cout << y << endl;
	//instrukcja switch
	switch (a) {
	case 10: 
		cout << "zmienna ma wartosc 10" << endl;
		break;//instrukcja wyjscia z bloku, przerwania dalszego wykonywania
	case 12:
		cout << "zmienna ma wartosc 12" << endl;
		break;
	default://opcjonalnie
		cout << "?????" << endl;
	}
	//instrukcje continue -> przerwanie danej iteracji petli i wykonywanie kolejnego kroku
	for (int i = 1; i <= 20; i++) {
		if (i % 2)
			cout << i << endl;
		else continue;
		cout << endl;
	}
}

