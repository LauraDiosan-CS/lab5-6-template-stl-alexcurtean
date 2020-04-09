#include "testController.h"
#include "Repo.h"
#include "RezervareCamera.h"
#include "Controller.h"
#include <assert.h>

void testCtrl()
{
	Repo <RezervareCamera> repo;
	Controller ctrl(repo);

	ctrl.addRezervare(1, "15", "dubla", true);
	ctrl.addRezervare(2, "20", "tripla", false);

	assert(repo.getSize() == 2);
	assert(repo.getElemById(2).getEliberata() == false);

	ctrl.deleteRezervare(1);
	assert(repo.getSize() == 1);
	assert(repo.getAll()[0].getNumar() == "20");

	
	ctrl.updateRezervare(2,true);
	assert(repo.getElemById(2).getEliberata() == false);

	ctrl.addRezervare(5, "70", "dubla", false);
	ctrl.updateRezervare(5, true);
	assert(repo.getAll()[1].getEliberata() == false);

	cout << "Controller asserts verified..." << endl;


}
