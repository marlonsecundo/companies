#include "employee.h"

Employee::Employee(string name, double salario, time_t admission)
{
    this->name = name;
    this->salario = salario;
    this->admission = admission;
}

// SETTERS

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::setSalario(double salario)
{
    this->salario = salario;
}

void Employee::setAdmission(time_t admission)
{
    this->admission = admission;
}

// GETTERS

string Employee::getName()
{
    return this->name;
}

double Employee::getSalario()
{
    return this->salario;
}

time_t Employee::getAdmission()
{
    return this->admission;
}
