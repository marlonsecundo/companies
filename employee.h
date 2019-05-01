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
    double salario;
    time_t admission;

public:
    Employee(string cpf, string name, double salario, time_t admission);
    bool operator==(const Employee &emp);

    void setName(string name);
    void setSalario(double salario);
    void setAdmission(time_t admission);

    string getCpf();
    string getName();
    double getSalario();
    time_t getAdmission();
};

bool Employee::operator==(const Employee &emp)
{
    if (this->cpf.compare(emp.cpf) == 0)
        return true;

    return false;
}

#endif
