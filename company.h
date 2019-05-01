#ifndef Company_h
#define Company_h

using namespace std;

#include <string>
#include <vector>
#include <iomanip>
#include "employee.h"

class Company
{
private:
    string name;
    string cnpj;
    vector<Employee> employeeList;

public:
    Company(string name, string cnpj);
    friend ostream &operator<<(ostream &o, Company comp);
    bool operator==(const Company &emp);

    string getName();
    string getCnpj();

    void setName(string name);

    Employee getEmployee(string cpf);
    void addEmployee(Employee emp);

    void increaseSalary(double percentage);
    vector<Employee> getNoviceEmployees();
};

#endif
