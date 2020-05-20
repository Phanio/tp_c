#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
    Employee   e1 = Employee("Koffi", 20,42);
    Employee *emp;
    emp = &e1;
    emp->print();

    Employee *e2 = new Employee("Jules", 20, 38);
    emp = e2;
    emp->setName("David");
    emp->print();
    emp = new Employee[3];
    emp[0] = Employee();
    emp[1] = Employee("Eli",15, 23);
    emp[2] = Employee("Salomon", 15, 10);
    for(int i=0; i<3; i++){
        emp[i].print();
    }

    delete emp;
    emp = NULL;
    return 0;
}
