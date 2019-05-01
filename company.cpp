using namespace std;

#include "company.h"
#include <algorithm>

Company::Company(string name, string cnpj)
{
    this->name = name;
    this->cnpj = cnpj;
}

std::ostream &operator<<(std::ostream &os, Company const comp)
{
    for (int i = 0; i < comp.employeeList.size(); i++)
    {
        Employee emp = comp.employeeList[i];
        string sep = ",";
        time_t value = emp.getAdmissionDate();
        struct tm *timeinfo = localtime(&value);

        os << emp.getCpf() << sep << emp.getName() << to_string(emp.getSalary()) << sep << asctime(timeinfo) << endl;
    }

    return os;
}

bool Company::operator==(const Company &comp)
{
    if (this->cnpj.compare(comp.cnpj) == 0)
        return true;

    return false;
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
    Employee emp(cpf, "name", 0, time(0));

    vector<Employee> list = this->employeeList;
    vector<Employee>::iterator it = find(list.begin(), list.end(), emp);

    if (it != list.end())
    {
        int index = it - list.begin();
        return list[index];
    }

    return emp;
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

// METHODS

void Company::increaseSalary(double percentage)
{
    percentage = percentage / 100;

    for (int i = 0; i < this->employeeList.size(); i++)
    {
        double salary = this->employeeList[0].getSalary();
        this->employeeList[i].setSalary(salary + salary * percentage);
    }
}

vector<Employee> Company::getNoviceEmployees()
{
    vector<Employee> noviceEmps;
    for (int i = 0; i < this->employeeList.size(); i++)
    {
        time_t now = time(0);
        double seconds = difftime(now, this->employeeList[i].getAdmissionDate());
        double days = seconds / 60 / 60 / 24;

        if (days <= 90)
            noviceEmps.push_back(this->employeeList[i]);
    }

    return noviceEmps;
}
