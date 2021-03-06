#ifndef CAREGIVINGEMPLOYEE_H_INCLUDED
#define CAREGIVINGEMPLOYEE_H_INCLUDED

#include "employee.h"

// Concrete class to distinguish between an employee that
// can give caring and an employee who can't like Researcher.
class CareGivingEmployee : virtual public Employee
{

public:

    CareGivingEmployee(Employee& employee) throw(const char*);
    CareGivingEmployee(const CareGivingEmployee& other) = delete;

    CareGivingEmployee& operator=(const CareGivingEmployee& other) = delete;

    virtual ~CareGivingEmployee();

    virtual void work() const override;

};

#endif // CAREGIVINGEMPLOYEE_H_INCLUDED
