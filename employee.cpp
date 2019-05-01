#include "employee.h"

Employee::Employee(string cpf, string name, double salary, time_t admissionDate)
{
    this->cpf = cpf;
    this->name = name;
    this->salary = salary;
    this->admissionDate = admissionDate;
}

bool Employee::operator==(const Employee &emp)
{
    if (this->cpf.compare(emp.cpf) == 0)
        return true;

    return false;
}

// SETTERS

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::setSalary(double salary)
{
    this->salary = salary;
}

void Employee::setAdmissionDate(time_t admissionDate)
{
    this->admissionDate = admissionDate;
}

// GETTERS

string Employee::getCpf()
{
    return this->cpf;
}

string Employee::getName()
{
    return this->name;
}

double Employee::getSalary()
{
    return this->salary;
}

time_t Employee::getAdmissionDate()
{
    return this->admissionDate;
}
