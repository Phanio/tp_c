#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee
{
    public:
        Employee();
        Employee(std::string name, double hourlyRate, double weeklyHoursWorked);
        void setName(std::string n){ name = n;};
        std::string getName(){return name;};
        void setHourlyRate(double hour){ hourlyRate = hour;};
        double getHourlyRate(){return hourlyRate;};
        void setWeeklyHoursWorked(double whour){ weeklyHoursWorked = whour;};
        double getWeeklyHoursWorked(){return weeklyHoursWorked;};
        double weeklyPay() const;
        void print() const;

    private:
        std::string name;
        double hourlyRate;
        double weeklyHoursWorked;

};

#endif // EMPLOYEE_H
