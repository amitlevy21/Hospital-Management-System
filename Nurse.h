#ifndef NURSE_H_INCLUDED
#define NURSE_H_INCLUDED

class Nurse
{

public:
    Nurse(Nurse& other) = delete;


private:
    char* areaOfTraining; // i think we should add to superclass employee this attribute
    int maxNumOfDuties;
    int currentNumOfDuties;
    char** duties;
}

#endif // NURSE_H_INCLUDED
