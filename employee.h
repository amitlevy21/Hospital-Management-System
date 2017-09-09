#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include "person.h"
#include <ctime>

class Department;

class Employee : public Person
{
public:
    enum eRank {JUNIOR, SENIOR};

    Employee(int id, const char* name, const time_t* dateOfBirth, eGender gender,
     int employeeID, const Department* departments, const time_t* startWorkingDate ,
     eRank employeeRank, double salary, const char* areaOfTraining, float senorityYears = 0) throw(const char*);
    Employee(const Employee& other) = delete;

    Employee& operator=(const Employee& other) = delete;

    virtual ~Employee();

    int getEmployeeId()                 const;
    const Department* getDepartments()  const;
    const time_t* getStartWorkingDate() const;
    eRank getEmployeeRank() const;
    float getSenorityYears() const;
    double getSalary() const;

    virtual void talk() const override;

    virtual void work() const;

    void setSalary(double salary) const;

    void updateSenorityYear(float senorityYears);

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
