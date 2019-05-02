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

Company *Manager::getCompany(string cnpj)
{
    Company comp("name", cnpj);

    vector<Company> list = this->companyList;
    vector<Company>::iterator it = find(list.begin(), list.end(), comp);

    if (it != list.end())
    {
        int index = it - list.begin();
        return &this->companyList[index];
    }

    return &comp;
}
