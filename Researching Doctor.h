#ifndef RESEARCHING_DOCTOR_H_INCLUDED
#define RESEARCHING_DOCTOR_H_INCLUDED

class ResearchingDoctor : public Researcher, public Doctor
{
public:
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
