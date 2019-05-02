using namespace std;

#include <iostream>
#include "admInterface.h"
#include "company.h"
#include "employee.h"

void AdmInterface::listEmployees()
{
    cout << endl;
    string cnpj, result;
    cout << "Digite o cnpj da empresa: ";
    cin >> cnpj;

    Company *comp = this->manager.getCompany(cnpj);

    cout << (*comp);

    cout << endl;
}

void AdmInterface::addEmp()
{
    cout << endl;

    string name, cnpj, cpf, s;
    double salary;
    time_t admissionDate;
    struct tm tm;

    cout << "Digite o cpnj da empresa: ";
    cin >> cnpj;
    cout << "Digite o nome funcionário: ";
    cin >> name;
    cout << "Digite o cpf: ";
    cin >> cpf;
    cout << "Digite o salário: ";
    cin >> salary;
    cout << "Digite a data de admissão (MM-DD-YYYY): ";
    cin >> s;

    istringstream date(s);
    date >> std::get_time(&tm, "%M-%D-%Y"); // or just %T in this case
    admissionDate = mktime(&tm);

    Employee emp(cpf, name, salary, admissionDate);
    Company *comp = this->manager.getCompany(cnpj);

    (*comp).addEmployee(emp);

    cout << endl;
}

void AdmInterface::createCompany()
{
    cout << endl;

    string name = "";
    string cnpj = "";

    cout << "Digite o nome da empresa: ";
    cin >> name;
    cout << "Digite o cnpj da empresa: ";
    cin >> cnpj;

    Company comp(name, cnpj);

    this->manager.addCompany(comp);

    cout << endl;
}

int AdmInterface::getMenuAction()
{
    int choice = 0;

    cout << "---- Company Manager ----" << endl;
    cout << "1 - Criar Empresa" << endl;
    cout << "2 - Adicionar Funcionário" << endl;
    cout << "3 - Listar Funcionários" << endl;
    cout << "----                 ----" << endl;
    cout << "Digite o numero da escolha: ";

    cin >> choice;

    return choice;
}

void AdmInterface::start()
{
    while (true)
    {
        int choice = this->getMenuAction();

        switch (choice)
        {
        case 1:
            this->createCompany();
            break;
        case 2:
            this->addEmp();
            break;
        case 3:
            this->listEmployees();
            break;

        default:
            cout << "---- Execução Encerrada ----" << endl;
            return;
        }
    }
}
