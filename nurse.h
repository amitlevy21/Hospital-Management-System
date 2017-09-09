#ifndef NURSE_H_INCLUDED
#define NURSE_H_INCLUDED

#include "careGivingEmployee.h"

class Nurse : public CareGivingEmployee
{

public:
    Nurse(const CareGivingEmployee& CGEmployee, int currentNumOfDuties,
    const char** duties, int maxNumOfDuties = 1) throw(const char*);
    Nurse(const Nurse& other) = delete;

    Nurse& operator=(const Nurse& other) = delete;

    virtual ~Nurse();

    const char* getAreaOfTraining() const;
    int getMaxNumOfDuties()         const;
    int getCurrentNumOfDuties()     const;
    const char** getDuties()        const;

    void setMaxNumOfDuties(int maxNumOfDuties) const;

    void setCurrentNumOfDuties(int currentNumOfDuties) const;

    void addDuty(const char* duty);

    void operator+=(const char* duty);
    void operator-=(const char* duty);


protected:
    int maxNumOfDuties;
    int currentNumOfDuties;
    char** duties;
};

#endif // NURSE_H_INCLUDED
