#ifndef NURSE_H_INCLUDED
#define NURSE_H_INCLUDED

class Nurse : public CareGivingEmployee
{

public:
    Nurse(CareGivingEmployee& CGEmployee, int maxNumOfDuties, int currentNumOfDuties,
    char** duties);
    Nurse(Nurse& other) = delete;
    virtual ~Nurse();

    const char* getAreaOfTraining() const;
    int getMaxNumOfDuties() const;
    int getCurrentNumOfDuties() const;
    const char** getDuties() const;


protected:
    int maxNumOfDuties;
    int currentNumOfDuties;
    char** duties;
};

#endif // NURSE_H_INCLUDED
