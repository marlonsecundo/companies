using namespace std;

#include "company.h"
#include <algorithm>

Company::Company(string name, string cnpj)
{
    this->name = name;
    this->cnpj = cnpj;
}

// GETTERS

string Company::getCnpj()
{
    return this->cnpj;
}

string Company::getName()
{
    return this->name;
}

Employee Company::getEmployee(string cpf)
{
    Employee emp(cpf, "name", 0, NULL);

    vector<Employee> list = this->employeeList;
    vector<Employee>::iterator it = find(list.begin(), list.end(), emp);

    if (it != list.end())
    {
        int index = it - list.begin();
        return list[index];
    }
}

// SETTERS

void Company::setName(string name)
{
    this->name = name;
}

void Company::addEmployee(Employee emp)
{
    vector<Employee> list = this->employeeList;

    if (!(find(list.begin(), list.end(), emp) != list.end()))
    {
        this->employeeList.push_back(emp);
    }
}
