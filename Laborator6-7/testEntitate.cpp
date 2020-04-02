#include "testEntitate.h"
#include "RezervareCamera.h"
#include <assert.h>

void testClasa()
{
	RezervareCamera rc1;
	assert(rc1.getId() == 0);
	assert(rc1.getNumar() == "");
	assert(rc1.getTip() == "");
	assert(rc1.getEliberata() == true);

	RezervareCamera rc2(1, "82", "dubla", true);
	assert(rc2.getId() == 1);
	assert(rc2.getNumar() == "82");
	assert(rc2.getTip() == "dubla");
	assert(rc2.getEliberata() == true);

	rc2.setNumar("87");
	assert(rc2.getNumar() == "87");

	rc1 = rc2;
	rc1.setEliberata(false);
	assert(rc1 == rc2);
	assert(rc1.getEliberata() == false);
	assert(rc1.getTip() == "dubla");

	cout << "Asserts for constructors verified." << endl;

}
