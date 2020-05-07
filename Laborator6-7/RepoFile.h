#pragma once
#include "Repo.h"
#include "RezervareCamera.h"
#include <fstream>
#include <string>


template <class T>
class RepoFile :public Repo<T>
{
public:
	RepoFile<T>();
	void loadFromFile();
	void saveToFile();
	~RepoFile();
};

template<class T>
inline void RepoFile<T>::loadFromFile()
{
	ifstream fin("RezervareCamera.txt");
	int id;
	string nr, t;
	bool e;
	while (fin >> id >> nr >> t >> e) 
	{
		this->elem.push_back(RezervareCamera(id, nr, t, e));
		
	}
		

}

template<class T>
inline void RepoFile<T>::saveToFile()
{
	ofstream fout("Output.txt");
	for (int i = 0; i < this->getSize(); i++)
		fout << "Id camera:" << this->getAll()[i].getId() << ", Numar:" << this->getAll()[i].getNumar() << ", Tip:" << this->getAll()[i].getTip() << ", Status:" << this->getAll()[i].getEliberata() << endl;

	fout.close();
}

template<class T>
inline RepoFile<T>::~RepoFile()
{
	saveToFile();
}

template<class T>
inline RepoFile<T>::RepoFile()
{
	loadFromFile();
}
