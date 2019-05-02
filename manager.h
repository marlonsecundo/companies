#ifndef Manager_h
#define Manager_h

using namespace std;
#include "company.h"

class Manager
{
private:
public:
    vector<Company> companyList;
    void addCompany(Company comp);
    Company *getCompany(string cnpj);
};

#endif
