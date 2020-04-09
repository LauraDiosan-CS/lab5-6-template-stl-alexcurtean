#include "Ui.h"
#include <iostream>

using namespace std;

int Ui::printMenu()
{
	int opt;

	cout << endl << endl;
	cout << "0.Exit" << endl;
	cout << "1.Adauga o rezervare." << endl;
	cout << "2.Afiseaza toate rezervarile." << endl;
	cout << "3.Afiseaza o rezervare cu un anumit id." << endl;
	cout << "4.Sterge o rezervare." << endl;
	cout << "5.Modifica o rezervare." << endl;

	cout << "Alege o optiune:";
	cin >> opt;

	cout << endl << endl;
	return opt;
}



void Ui::run()
{
	this->ctrl.addRezervare(1, "10", "dubla", true);
	this->ctrl.addRezervare(2, "20", "tripla", false);
	this->ctrl.addRezervare(3, "94", "dubla", true);
	this->ctrl.addRezervare(4, "37", "cvadrupla", true);


	int option = printMenu();
	while (option != 0) 
	{
		switch (option) 
		{
		case 1: {
			int id;
			string nr, tip;
			bool eliberata;
			cout << "Id:";
			cin >> id;
			cout << "Numar:";
			cin >> nr;
			cout << "Tip:";
			cin >> tip;
			cout << "Eliberata:";
			cin >> eliberata;
			this->ctrl.addRezervare(id, nr, tip, eliberata);
			break;
		}
		case 2: {
			this->ctrl.printRezervari();
			break;
		}
		case 3: {
			int id;
			cout << "Introduceti id-ul rezervarii pt a fi afisata:";
			cin >> id;
			this->ctrl.printRezervareById(id);
			break;
		}
		case 4: {
			int id;
			cout << "Introduceti id-ul rezervarii pt a fi stearsa:";
			cin >> id;
			this->ctrl.deleteRezervare(id);
			break;
		}
		case 5: {
			int id;
			bool newEliberata;
			cout << "Introduceti id-ul rezervarii pt a fi updatata:";
			cin >> id;
			cout << "Eliberata:";
			cin >> newEliberata;
			this->ctrl.updateRezervare(id, newEliberata);
			break;
		}

		}
		option = printMenu();

	}

	cout << "Program terminat...";
}
