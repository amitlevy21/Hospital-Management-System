#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include <ctime>
#include "person.h"
#include "visit.h"

class Patient : public Person
{
public:
    Patient(int id, const char* name, const char* dateOfBirth, eGender gender, const char** allergies = nullptr) throw(const char*);
    Patient(const Patient& other) = delete;

    Patient& operator=(const Patient& other) = delete;

    virtual ~Patient();

    void visitHospital(const char* date);
    bool anesthetize(const char* date);

    void setLastDateVisited(const char* lastDateVisited) const;

    void setLastDateAnesthetized(const char* lastDateAnesthetized) const;

    bool addAllergie(const char* nameOfAllergie);

    virtual void talk() const override;

protected:
    Visit* visits;
    char* lastDateVisited;
    char* lastDateAnesthetized;
    char** allergies;

};

#endif // PATIENT_H_INCLUDED
