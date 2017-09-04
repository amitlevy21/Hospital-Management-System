#ifndef SURGEON_H_INCLUDED
#define SURGEON_H_INCLUDED

class surgeon : public Doctor
{
public:
    surgeon(Doctor& doctor, bool hasSecurityClearance, int numOfSuccesfullSurgeries);
    surgeon(surgeon& other) = delete;
    virtual ~surgeon();

    bool hasSecurityClearance() const;
    int getNumOfSuccesfullSurgeries() const;

protected:
    bool securityClearance;
    int numOfSuccesfullSurgeries;
};

#endif // SURGEON_H_INCLUDED
