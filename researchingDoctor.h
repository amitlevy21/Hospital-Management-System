#ifndef RESEARCHING_DOCTOR_H_INCLUDED
#define RESEARCHING_DOCTOR_H_INCLUDED


#include "doctor.h"
#include "patient.h"
#include "researcher.h"

class ResearchingDoctor : public Researcher, public Doctor
{
public:
    //c'tor needs to call grandfather careGivingEmployee
    //c'tor uses c'tor of grandfather which might throw exception
    ResearchingDoctor(const Researcher& researcher, const Doctor& doctor,
    int maxNumOfTestSubjects, int currentNumOfTestSubjects, const Patient* testSubjects) throw(char*);
    ResearchingDoctor(const ResearchingDoctor& other) = delete;
    virtual ~ResearchingDoctor();

    int getMaxNumOfTestSubjects() const;
    int getCurrentNumOfTestSubjects() const;
    const Patient* getTestSubject() const;

protected:
    int maxNumOfTestSubjects;
    int currentNumOfTestSubjects;
    Patient* testSubjects;
};

#endif // RESEARCHING_DOCTOR_H_INCLUDED
