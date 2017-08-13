#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED


#include <ctime> //for date

class Employee
{
public:
    enum eRank
    {
        JUNIOR, SENIOR
    };

    Employee(int employeeID, Department* departments, time_t* startWorkingDate ,eRank employeeRank
    float senorityYears, double salary);
    Employee(Employee& other) = delete;

    const int getEmployeeId() const;
    const Department* getDepartments() const;
    const time_t* getStartWorkingDate() const;
    const eRank getEmployeeRank() const;
    const float getSenorityYears() const;
    const double getSalary() const;

private:
    int employeeId;
    Department* departments;
    time_t* startWorkingDate;
    eRank employeeRank;
    float senorityYears;
    double salary;

};
#endif // EMPLOYEE_H_INCLUDED
