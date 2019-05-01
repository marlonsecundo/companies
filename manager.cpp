using namespace std;
#include "manager.h"
#include "company.h"
#include "algorithm"
#include "iostream"

void Manager::addCompany(Company comp)
{
    vector<Company> list = this->companyList;

    if (!(find(list.begin(), list.end(), comp) != list.end()))
    {
        this->companyList.push_back(comp);
    }
}
