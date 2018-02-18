#include "cmpslib.h"
#include "Computer.h"

int Computer::count = 0;

Computer::Computer()
{
    LogStart();
    LogLow("incrementing the count\n");
    count++;
    cores = 0;
    processor_speed = 0.0;
    drive_size = 0;
    ram = 0;
    processor_type = "none";
    LogEnd();
}

Computer::Computer(int c, double pspeed, int dsize, int rm, string ptype)
{
    LogStart(c,pspeed,dsize,rm,ptype);
    LogLow("incrementing the count\n");
    count++;
    cores = c;
    processor_speed = pspeed;
    drive_size = dsize;
    ram = rm;
    processor_type = ptype;

    LogEnd(c,pspeed,dsize,rm,ptype);

}

Computer::Computer(const Computer &copy)
{
    LogStart(copy);
    LogLow("incrementing the count\n");
    count++;
    cores = copy.cores;
    processor_speed = copy.processor_speed;
    drive_size = copy.drive_size;
    ram = copy.ram;
    processor_type = copy.processor_type;
    LogEnd(copy);

}

Computer::~Computer()
{
    LogStart();
    LogLow("incrementing the count\n");
    count--;
    LogEnd();

}

string Computer::ToString()
{
    LogStart();
    ostringstream temp;
    temp << processor_speed << " Ghz " << processor_type << " " <<
        cores << " Cores\n" << drive_size << " Gb disk\n" <<
        ram << " Gb ram\n";

    LogEndReturning(temp.str());
    return temp.str();
}

int Computer::GetCount()
{
    return(count);
}

bool Greater(const Computer &base, const Computer &comp)
{
    LogStart(base,comp);
    bool result;
    double clock1 = (base.cores * base.processor_speed);
    double clock2 = (comp.cores * comp.processor_speed);

    if(clock1 > clock2)
        result= true;
    else
        result = false;
    LogEndReturning( result);
    return result;

}

bool Less(const Computer &base, const Computer &comp)
{
    LogStart(base,comp);

    bool result;
    double clock1 = (base.cores * base.processor_speed);
    double clock2 = (comp.cores * comp.processor_speed);

    if(clock1 < clock2)
        result= true;
    else
        result = false;
    LogEndReturning( result);
    return result;
}

bool Equal(const Computer &base, const Computer &comp)
{
    LogStart(base,comp);
    bool result;

    double clock1 = (base.cores * base.processor_speed);
    double clock2 = (comp.cores * comp.processor_speed);

    if(clock1 == clock2)
        result= true;
    else
        result = false;

    LogEndReturning( result);
    return result;
}


