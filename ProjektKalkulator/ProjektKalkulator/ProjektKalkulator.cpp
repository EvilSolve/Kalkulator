#include "pch.h"
#include<iostream>
#include "Dodawanie.hpp"
#include "mnozenie.hpp"
#include "odejmowanie.hpp"
#include "Dzielenie.hpp"
using namespace std;
int main()
{
	int wybor, a, b;
	wybor = 0;

	do {
		cout << "[1] Dodawanie"
			<< endl << "[2] Odejmowanie"
			<< endl << "[3] Mnozenie"
			<< endl << "[4] Dzielenie"
			<< endl << "[5] Rezygnuj"
			<< endl << "Twoje polecenie:";

		cin >> wybor;

		switch (wybor) {
		case 1:
			cout << "Podaj pierwsza liczbe:";
			cin >> a;
			cout << "Podaj druga liczbe:";
			cin >> b;
			cout << "Wynik: " << dodajLiczby(a, b) << endl;
			break;

		case 2:
			cout << "Podaj pierwsza liczbe:";
			cin >> a;
			cout << "Podaj druga liczbe:";
			cin >> b;
			cout << "Wynik: " << a - b << endl;
			break;

		case 3:
			cout << "Podaj pierwsza liczbe:";
			cin >> a;
			cout << "Podaj druga liczbe:";
			cin >> b;
			cout << "Wynik: " << a * b << endl;
			break;

		case 4:
			cout << "Podaj pierwsza liczbe:";
			cin >> a;
			cout << "Podaj druga liczbe:";
			cin >> b;
			cout << "Wynik: " << a / b << endl;

			break;

		case 5:
			break;

		default:
			cout << "Nieprawidlowe polecenie." << endl;
		}
	} while (wybor != 5);
	return 0;

}
