#include "testRepo.h"
#include <assert.h>
#include "Repo.h"
#include "RezervareCamera.h"


void testRepository()
{
	Repo <RezervareCamera> repo;
	RezervareCamera rc1 = RezervareCamera(1, "15", "dubla", true);
	RezervareCamera rc2 = RezervareCamera(2, "20", "tripla", false);

	repo.addElem(rc1);
	repo.addElem(rc2);

	assert(repo.getSize() == 2);
	assert(repo.getElemById(1).getId() == 1);
	assert(repo.getAll()[1].getEliberata() == false);

	repo.deleteElemById(1);
	assert(repo.getSize() == 1);
	assert(repo.getElemById(2).getNumar() =="20");

	RezervareCamera rc3(10, "100", "tripla", true);
	repo.addElem(rc3);
	assert(repo.getSize() == 2);

	cout << "Repo asserts verified..." << endl;
}
