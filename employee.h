#ifndef Employee_h
#define Employee_h

#include <string>
#include <ctime>

using namespace std;

class Employee
{
private:
    string name;
    double salario;
    time_t admission;

public:
    Employee(string name, double salario, time_t admission);

    void setName(string name);
    void setSalario(double salario);
    void setAdmission(time_t admission);

    string getName();
    double getSalario();
    time_t getAdmission();
};

#endif
