#include "cmpslib.h"
struct LOGGER_DATA LGDATA;



#include "template_class.h"


int main()
{
LoggerSetUpLog("main.log");

    Demo<int> a;
    cout << "Testing with type int" << endl;
    cout << "a.setData(99)" << endl;
    a.setData(99);
    cout << "a.getData() returns: " << a.getData() << endl;
    cout << "cout << a " << a;

    cout << endl;

    Demo<double> b;
    cout << "Testing with type double" << endl;
    cout << "b.setData(99.99)" << endl;
    b.setData(99.99);
    cout << "b.getData() returns: " << b.getData() << endl;
    cout << "cout << b " << b;

    cout << endl;

    Demo<string> c;
    cout << "Testing with type string" << endl;
    cout << "c.setData('monkey')" << endl;
    c.setData("monkey");
    cout << "c.getData() returns: " << c.getData() << endl;
    cout << "cout << c " << c;



////LoggerClose();

return 0;
}
