#ifndef AdmInterface_h
#define AdmInterface_h

#include "manager.h"

class AdmInterface
{

private:
    Manager manager;

public:
    void start();
    void createCompany();
    void addEmp();
    int getMenuAction();
};

#endif