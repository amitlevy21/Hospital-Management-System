#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include "person.h"
#include <ctime>

class Department;

enum eRank
{
    JUNIOR, SENIOR
};

class Employee : public Person
{
public:


    Employee(int id, const char* name, const time_t* dateOfBirth, const eGender gender,
     int employeeID, const Department* departments, const time_t* startWorkingDate ,
     const eRank employeeRank, float senorityYears, double salary, const char* areaOfTraining);
    Employee(const Employee& other) = delete;
    virtual ~Employee();

    int getEmployeeId() const;
    const Department* getDepartments() const;
    const time_t* getStartWorkingDate() const;
    const eRank getEmployeeRank() const;
    float getSenorityYears() const;
    double getSalary() const;

    virtual void talk() const override;

    virtual void work() const = 0; // make class abstract

protected:
    int employeeId;
    Department* departments;
    time_t* startWorkingDate;
    eRank employeeRank;
    float senorityYears;
    double salary;
    char* areaOfTraining;

};


#endif // EMPLOYEE_H_INCLUDED
