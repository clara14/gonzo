#include "cmpslib.h"
#include <typeinfo>


template<class T>
class Demo
{
    private:
        T data;

    public:
        T getData()
        {
            LogStart();
            LogEndReturning(data);
            return data;
        }
        void setData(T val)
        {
            LogStart(val);
            data = val;
            LogEnd();
        }

          
        friend ostream &operator << (ostream & os, Demo & s)
        {
            LogStart(os,s);
            os << endl << "  sizeof (data) = " << sizeof(s.data) << endl;
            os << "  data is of type = " << GetClassName(s.data) << endl;
            os << "  data contains: " << s.data << endl;
            LogEndReturning(os);
            return os;
        }


};
