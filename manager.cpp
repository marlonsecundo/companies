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

string Manager::getAvgEmpPerComps()
{
    string result = "";
    int avg;

    result += "-- AVG OF EMPLOYEES PER COMPANIES --\n";
    for (int i = 0; i < this->companyList.size(); i++)
    {
        result += "Company: " + companyList[i].getName();
        result += " - Cnpj: " + companyList[i].getCnpj() + "\n";
        result += "Employeers Count: " + to_string(companyList[i].getEmpCounts()) + "\n";

        avg += companyList[i].getEmpCounts();
    }
    avg /= companyList.size();
    result += "\n-- AVG: " + avg;
    return result;
}
