#ifndef RESEARCHER_H_INCLUDED
#define RESEARCHER_H_INCLUDED

class researcher : virtual public Employee
{
public:
    researcher(char* areaOfResearch, char* areaOfResearch, char** publicationsNames);
    researcher(researcher& other) = delete;

private:
    int numOfPublications;
    char* areaOfResearch;
    char** publicationsNames;
};

#endif // RESEARCHER_H_INCLUDED
