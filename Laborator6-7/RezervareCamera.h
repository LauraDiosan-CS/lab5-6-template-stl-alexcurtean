#pragma once
#include <iostream>
#include <string>
using namespace std;
class RezervareCamera
{
private:
	int id;
	string numar;
	string tip;
	bool eliberata;
public:
	RezervareCamera();
	RezervareCamera(int id, string nr, string tip, bool eliberata);
	RezervareCamera(const RezervareCamera& rc);
	int getId();
	string getNumar();
	string getTip();
	bool getEliberata();
	void setId(int id);
	void setNumar(string nr);
	void setTip(string t);
	void setEliberata(bool e);
	bool operator==(const RezervareCamera& rc);
	RezervareCamera& operator=(const RezervareCamera& rc);
};

