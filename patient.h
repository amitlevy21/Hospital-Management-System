#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include <ctime>
#include "person.h"
#include "visit.h"

class Patient : public Person
{
public:
    Patient(int id, const char* name, const time_t* dateOfBirth, eGender gender, const char** allergies = nullptr) throw(const char*);
    Patient(const Patient& other) = delete;

    Patient& operator=(const Patient& other) = delete;

    virtual ~Patient();

    void visitHospital(const time_t* date);
    bool anesthetize(const time_t* date);

    void setLastDateVisited(const time_t *lastDateVisited) const;

    void setLastDateAnesthetized(const time_t *lastDateAnesthetized) const;

    bool addAllergie(const char* nameOfAllergie);

    virtual void talk() const override;

protected:
    Visit* visits;
    time_t* lastDateVisited;
    time_t* lastDateAnesthetized;
    char** allergies;

};

#endif // PATIENT_H_INCLUDED
