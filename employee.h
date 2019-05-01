#ifndef Employee_h
#define Employee_h

using namespace std;

#include <string>
#include <ctime>

class Employee
{
private:
    string cpf;
    string name;
    double salary;
    time_t admissionDate;

public:
    Employee(string cpf, string name, double salary, time_t admissionDate);
    bool operator==(const Employee &emp);

    void setName(string name);
    void setSalary(double salary);
    void setAdmissionDate(time_t admissionDate);

    string getCpf();
    string getName();
    double getSalary();
    time_t getAdmissionDate();
};

bool Employee::operator==(const Employee &emp)
{
    if (this->cpf.compare(emp.cpf) == 0)
        return true;

    return false;
}

#endif
