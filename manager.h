#ifndef Manager_h
#define Manager_h

using namespace std;
#include "company.h"

class Manager
{
private:
    vector<Company> companyList;

public:
    void addCompany(Company comp);
};

#endif
