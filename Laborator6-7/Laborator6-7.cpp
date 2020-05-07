// Laborator6-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "testEntitate.h"
#include "testRepo.h"
#include "testController.h"
#include "Repo.h"
#include "RepoFile.h"
#include "RezervareCamera.h"
#include "Controller.h"
#include "Ui.h"

int main()
{
    testClasa();
    testRepository();
    testCtrl();

    RepoFile <RezervareCamera> repo;
    Controller ctrl(repo);
    Ui ui(ctrl);
    ui.run();
    return 0;
}


