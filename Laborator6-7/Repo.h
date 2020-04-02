#pragma once
#include <vector>
#include "RezervareCamera.h"

template <class T>
class Repo
{
private:
	vector <T> elem;
public:
	void addElem(const T& el);
	vector <T> getAll();
	void deleteElem(int pos);
	T getElemPos(int pos);
	int getSize();
};

template<class T>
inline void Repo<T>::addElem(const T& el)
{
	this->elem.push_back(el);
}

template<class T>
inline vector<T> Repo<T>::getAll()
{
	return this->elem;
}

template<class T>
inline void Repo<T>::deleteElem(int pos)
{
	if (pos == 0)
		this->elem.erase(this->elem.begin());
	else
		this->elem.erase(this->elem.begin() + pos);
}

template<class T>
inline T Repo<T>::getElemPos(int pos)
{
	return this->elem.at(pos);
}

template<class T>
inline int Repo<T>::getSize()
{
	return this->elem.size();
}
