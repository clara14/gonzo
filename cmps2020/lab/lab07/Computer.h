#include "cmpslib.h"

class Computer
{
    private:
    
    static int count;

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
    string ToString();
    static int GetCount();
   
    friend bool Greater(const Computer&, const Computer&);
    friend bool Less(const Computer&, const Computer&);
    friend bool Equal(const Computer&, const Computer&);

};


bool Greater(const Computer&, const Computer&);

bool Less(const Computer&, const Computer&);

bool Equal(const Computer&, const Computer&);


