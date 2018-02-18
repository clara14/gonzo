#include "cmpslib.h"
#include "Computer.h"

Computer::Computer()
{
    LogStart();
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

    LogEnd();

}

void Computer::ToString()
{
    LogStart();
    cout << processor_speed << " Ghz " << processor_type << " " 
         << cores << " Cores\n";

    cout << drive_size << " Gb disk\n";

    cout << ram << " Gb ram\n\n";
    
    LogEnd();
}



