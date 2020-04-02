#include "RezervareCamera.h"

RezervareCamera::RezervareCamera()
{
	this->id = 0;
	this->numar = "";
	this->tip = "";
	this->eliberata = true;
}

RezervareCamera::RezervareCamera(int id, string nr, string tip, bool eliberata)
{
	this->id = id;
	this->numar = nr;
	this->tip = tip;
	this->eliberata = eliberata;
}

RezervareCamera::RezervareCamera(const RezervareCamera& rc)
{
	this->id = rc.id;
	this->numar = rc.numar;
	this->tip = rc.tip;
	this->eliberata = rc.eliberata;
}

int RezervareCamera::getId()
{
	return this->id;
}

string RezervareCamera::getNumar()
{
	return this->numar;
}

string RezervareCamera::getTip()
{
	return this->tip;
}

bool RezervareCamera::getEliberata()
{
	return this->eliberata;
}

void RezervareCamera::setId(int id)
{
	this->id = id;
}

void RezervareCamera::setNumar(string nr)
{
	this->numar = nr;
}

void RezervareCamera::setTip(string t)
{
	this->tip = t;
}

void RezervareCamera::setEliberata(bool e)
{
	this->eliberata = e;
}

bool RezervareCamera::operator==(const RezervareCamera& rc)
{
	return this->id == rc.id;
}

RezervareCamera& RezervareCamera::operator=(const RezervareCamera& rc)
{
	this->setId(rc.id);
	this->setNumar(rc.numar);
	this->setTip(rc.tip);
	this->setEliberata(rc.eliberata);

	return *this;
}
