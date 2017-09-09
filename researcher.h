#ifndef RESEARCHER_H_INCLUDED
#define RESEARCHER_H_INCLUDED

#include "employee.h"

class Researcher : public Employee
{
public:
    Researcher(const char* areaOfResearch, const char** publicationsNames);
    Researcher(const Researcher& other) = delete;

    int getNumOfPublications() const;
    const char* getAreaOfResearch() const;
    const char** getPublicationsNames() const;

    virtual void work() const override;

private:
    int numOfPublications;
    char* areaOfResearch;
    char** publicationsNames;
};

#endif // RESEARCHER_H_INCLUDED
