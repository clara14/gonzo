#include "cmpslib.h"
struct LOGGER_DATA LGDATA;


#define ELEMTYPE string
#include "Stack.h"


int main()
{
	LoggerSetUpLog("main3.log");
	//__SSR__
    
    
    

    try
    {
        Stack stk1;
        cout << "Stack stk1 created with default size(capacity should be 4)\n"
             << "stk1.Capacity: " << stk1.Capacity() << endl;
        cout << "pushing 4 strings onto stack\n"
             << "stk1.Push(hello)\n";
        stk1.Push("hello");
        cout << "stk1.Push(how)\n";
        stk1.Push("how");
        cout << "stk1.Push(are)\n";
        stk1.Push("are");
        cout << "stk1.Push(you)\n";
        stk1.Push("you");
        cout << "stk1.Full() should be true: " << boolalpha << stk1.Full() << endl;
        cout << "stk1.Top() should print out you: " << stk1.Top() << endl;

        cout << "Popping values of stk1:\n";
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"stk1.Top() should print out are: " << stk1.Top() << endl;
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"stk1.Top() should print out how: " << stk1.Top() << endl;
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"stk1.Top() should print out hello: " << stk1.Top() << endl;
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"All 4 values popped, stk1.Empty() should be true: " << boolalpha << stk1.Empty() << endl;
        
        Stack stk2(6);
        cout << "\nStack stk2 created with capacity of 6\n"
             << "stk2.Capacity: " << stk2.Capacity() << endl;
        cout << "pushing 6 strings onto stack\n"
             << "stk2.Push(hello)\n";
        stk2.Push("hello");
        cout << "stk2.Push(my)\n";
        stk2.Push("my");
        cout << "stk2.Push(last)\n";
        stk2.Push("last");
        cout << "stk2.Push(name)\n";
        stk2.Push("name");                                                              cout << "stk2.Push(is)\n";
        stk2.Push("is");
        cout << "stk2.Push(Lara)\n";
        stk2.Push("Lara");
        cout << "stk2.Full() should be true: " << boolalpha << stk2.Full() << endl;
        cout << "stk2.Top() should print out Lara: " << stk2.Top() << endl;                cout << "Popping values of stk2:\n";
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout <<"stk2.Top() should print out is: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out name: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out last: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out my: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out hello: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout <<"All 6 values popped, stk1.Empty() should be true: " << boolalpha << stk1.Empty() << endl;


        
    }
   catch(string exc)
   {
      cout << "Exception caught of type string, val = " << exc << endl;
   }

        


	return(0);
}



