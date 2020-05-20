#include "Employee.h"
Employee::Employee()
{
    name= "Default";
    hourlyRate = 0;
    weeklyHoursWorked = 0;
}

Employee::Employee(std::string name, double hourlyRate, double weeklyHoursWorked)
{
    Employee::name= name;
    Employee::hourlyRate = hourlyRate;
    Employee::weeklyHoursWorked = weeklyHoursWorked;
}

double Employee::weeklyPay() const
{
    double overHoursWorked =0;
    double pay=0;
    double weeklyHours = weeklyHoursWorked;
    if(weeklyHoursWorked> 40)
    {
        overHoursWorked = weeklyHoursWorked -40;
        weeklyHours = 40;
    }
    pay = weeklyHours*hourlyRate + 1.5*hourlyRate*overHoursWorked;
    return pay;
}

void Employee::print()const
{
    std::cout << "Name: " <<name<< std::endl;
    std::cout << "Hourly rate: " <<hourlyRate<< std::endl;
    std::cout << "Weekly hours worked: " <<weeklyHoursWorked<< std::endl;
    std::cout << "Week pay: " <<weeklyPay()<< std::endl;
}

