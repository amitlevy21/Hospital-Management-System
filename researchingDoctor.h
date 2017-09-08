#ifndef RESEARCHING_DOCTOR_H_INCLUDED
#define RESEARCHING_DOCTOR_H_INCLUDED


#include "doctor.h"
#include "patient.h"
#include "researcher.h"

class ResearchingDoctor : public Researcher, public Doctor
{
public:
    //c'tor needs to call grandfather careGivingEmployee
    ResearchingDoctor(Researcher& researcher, Doctor& doctor,
    int maxNumOfTestSubjects, int currentNumOfTestSubjects, Patient* testSubjects);
    ResearchingDoctor(ResearchingDoctor& other) = delete;
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
