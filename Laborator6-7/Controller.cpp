#include "Controller.h"
#include "RezervareCamera.h"

void Controller::addRezervare(int id, string nr, string tip, bool eliberata)
{
	RezervareCamera rc(id, nr, tip, eliberata);
	this->repo.addElem(rc);
}

void Controller::deleteRezervare(int id)
{
	this->repo.deleteElemById(id);
}

void Controller::printRezervari()
{
	vector <RezervareCamera> sir = this->repo.getAll();
	for (int i = 0; i < sir.size(); i++)
		cout << "Id:" << sir[i].getId() << ", Numar:" << sir[i].getNumar() << ", Tip:" << sir[i].getTip() << ", Eliberata:" << sir[i].getEliberata() << endl;

	cout << endl;	
}

void Controller::printRezervareById(int id)
{
	for (int i = 0; i < this->repo.getSize(); i++)
		if (this->repo.getAll()[i].getId() == id)
			cout << "Id:" << this->repo.getAll()[i].getId() << ", Numar:" << this->repo.getAll()[i].getNumar() << ", Tip:" << this->repo.getAll()[i].getTip() << ", Eliberata:" << this->repo.getAll()[i].getEliberata() << endl;

	cout << endl;
}

void Controller::updateRezervare(int id, bool newEliberata)
{
	for (int i = 0; i < this->repo.getSize(); i++)
		if (this->repo.getAll()[i].getId() == id)
			this->repo.getAll()[i].setEliberata(newEliberata);
}
