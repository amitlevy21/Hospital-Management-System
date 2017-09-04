#ifndef RESEARCHER_H_INCLUDED
#define RESEARCHER_H_INCLUDED

#include "Employee.h"

class Researcher : virtual public Employee
{
public:
    Researcher(char* areaOfResearch, char** publicationsNames);
    Researcher(Researcher& other) = delete;

private:
    int numOfPublications;
    char* areaOfResearch;
    char** publicationsNames;
};

#endif // RESEARCHER_H_INCLUDED
