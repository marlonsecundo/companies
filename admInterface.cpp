using namespace std;

#include <iostream>
#include "admInterface.h"
#include "company.h"
#include "employee.h"

void AdmInterface::addEmp()
{
    cout << endl;

    string nome, cpf, date;
    double salary;
    time_t admissionDate;

    cout << "Digite o nome funcionário: ";
    cin >> nome;
    cout << "Digite o cpf: ";
    cin >> cpf;
    cout << "Digite o salário: ";
    cin >> salary;
    cout << "Digite a data de admissão (DD/MM/YYYY): ";
    cin >> date;

    cout << endl;
}

void AdmInterface::createCompany()
{
    cout << endl;

    string nome = "";
    string cnpj = "";

    cout << "-- Criação de Empresa --" << endl;
    cout << "Digite o nome da empresa: ";
    cin >> nome;
    cout << "Digite o cpnj da empresa: ";
    cin >> cnpj;

    Company comp(nome, cnpj);

    this->manager.addCompany(comp);

    cout << endl;
}

int AdmInterface::getMenuAction()
{
    int choice = 0;

    cout << "---- Company Manager ----" << endl;
    cout << "1 - Criar Empresa" << endl;
    cout << "2 - Adicionar Funcionário" << endl;
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

        default:
            cout << "---- Execução Encerrada ----" << endl;
            return;
        }
    }
}
