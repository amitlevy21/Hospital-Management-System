#ifndef SURGEON_H_INCLUDED
#define SURGEON_H_INCLUDED

class Surgeon : public Doctor
{
public:
    Surgeon(Doctor& doctor, bool hasSecurityClearance, int numOfSuccesfullSurgeries);
    Surgeon(Surgeon& other) = delete;
    virtual ~Surgeon();

    bool hasSecurityClearance() const;
    int getNumOfSuccesfullSurgeries() const;

protected:
    bool securityClearance;
    int numOfSuccesfullSurgeries;
};

#endif // SURGEON_H_INCLUDED
