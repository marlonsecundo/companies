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

    string getName();
    string getCnpj();

    void setName(string name);

    Employee getEmployee(string cpf);
    void addEmployee(Employee emp);

    void increaseSalary(double percentage);
    vector<Employee> getNoviceEmployees();
};

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

#endif
