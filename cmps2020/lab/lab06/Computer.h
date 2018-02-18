#include "cmpslib.h"

class Computer
{
    private:

    int cores;
    double processor_speed;
    int drive_size;
    int ram;
    string processor_type;

    public:

    Computer();
    Computer(int,double,int,int,string);
    Computer(const Computer&);
    ~Computer();
    void ToString();

};



