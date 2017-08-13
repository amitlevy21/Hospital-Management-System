#ifndef RESEARCHER_H_INCLUDED
#define RESEARCHER_H_INCLUDED

class Researcher
{
public:
    Researcher(char* areaOfResearch);
    Researcher(Researcher& other) = delete;

private:
    int numOfPublications;
    char* areaOfResearch;
    char** publicationsNames;
};

#endif // RESEARCHER_H_INCLUDED
