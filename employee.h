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
    Employee(string name, double salario, time_t admission);

    void setName(string name);
    void setSalario(double salario);
    void setAdmission(time_t admission);

    string getCpf();
    string getName();
    double getSalario();
    time_t getAdmission();
};

#endif
