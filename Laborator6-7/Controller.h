#pragma once
#include "Repo.h"
#include "RezervareCamera.h"
#include <string>
using namespace std;

class Controller
{
private:
	Repo <RezervareCamera>& repo;
public:
	Controller(Repo <RezervareCamera> &repo) : repo{ repo } {}
	
	void addRezervare(int id, string nr, string tip, bool eliberata);

	void deleteRezervare(int id);

	void printRezervari();
	void printRezervareById(int id);

	void updateRezervare(int id, bool newEliberata);

	int percentageOfOccupancy(string tip);
	void printPercentageOfOcuppancy();
};

