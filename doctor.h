#ifndef DOCTOR_H_INCLUDED
#define DOCTOR_H_INCLUDED

#include "careGivingEmployee.h"

class Doctor : public CareGivingEmployee
{
public:
    Doctor(const CareGivingEmployee& CGEmployee, int numOfDiplomas, const char* fieldOfExpertise) throw(const char*);
    Doctor(const Doctor& other) = delete;

    Doctor& operator=(const Doctor& other) = delete;

    virtual ~Doctor();

    int getNumOfDiplomas()              const;
    const char* getFieldOfExpertise()   const;

    void setNumOfDiplomas(int numOfDiplomas) const;


protected:
    int numOfDiplomas;
    char* fieldOfExpertise;
};

#endif // DOCTOR_H_INCLUDED
