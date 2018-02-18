#include "cmpslib.h"
#include <typeinfo>

template<class T>
class Demo;

template<class T>
ostream &operator << (ostream & os, const Demo<T> & s);

template<class T>
void setData(T val);

template<class T>
T getData();

template<class T>
class Demo
{
    private:
        T data;

    public:
        T getData();
        void setData(T);

          
        friend ostream &operator << <>(ostream & os, const Demo<T> & s);

};
template<class T>
T Demo<T>::getData()
{
    LogStart();
    LogEndReturning(data);
    return data;
}

template<class T>
void Demo<T>::setData(T val)
{
    LogStart(val);
    data = val;
    LogEnd();
}

template<class T>
ostream &operator << (ostream& os,const Demo<T> &s)
{
    
    
    os << endl << "sizeof (data) = " << sizeof(s.data) << endl;
    os << "typeid(data).name() = " << typeid(s.data).name() << endl;
    os << "data contains: " << s.data << endl;
    LogEndReturning(os);
    return os;
    
}
