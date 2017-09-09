#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include <ctime>
#include "person.h"
#include "visit.h"

class Patient : public Person
{
public:
    Patient(int id, const char* name, const time_t* dateOfBirth, const eGender gender, const char** allergies = nullptr) throw(char*);
    Patient(const Patient& other) = delete;
    Patient& operator=(const Patient& other) = delete;
    virtual ~Patient();

    bool visit(const time_t* date);
    bool anesthetize(const time_t* date);
    bool addAllergie(const char* nameOfAllergie);

    virtual void talk() const override;

protected:
    Visit* visits;
    time_t* lastDateVisited;
    time_t* lastDateAnesthetized;
    char** allergies;

};

#endif // PATIENT_H_INCLUDED
