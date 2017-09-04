#ifndef NURSE_H_INCLUDED
#define NURSE_H_INCLUDED

class nurse : public CareGivingEmployee
{

public:
    nurse(CareGivingEmployee& CGEmployee, int maxNumOfDuties, int currentNumOfDuties,
    char** duties);
    nurse(nurse& other) = delete;
    virtual ~nurse();

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
