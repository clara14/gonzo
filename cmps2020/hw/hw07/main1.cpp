#include "cmpslib.h"
struct LOGGER_DATA LGDATA;


#define ELEMTYPE int
#include "Stack.h"


int main()
{
	LoggerSetUpLog("main1.log");
	//__SSR__
    
    
    

    try
    {
        Stack stk1;
        cout << "Stack stk1 created with default size(capacity should be 4)\n"
             << "stk1.Capacity: " << stk1.Capacity() << endl;
        cout << "pushing 4 ints onto stack\n"
             << "stk1.Push(5)\n";
        stk1.Push(5);
        cout << "stk1.Push(29)\n";
        stk1.Push(29);
        cout << "stk1.Push(8)\n";
        stk1.Push(8);
        cout << "stk1.Push(11)\n";
        stk1.Push(11);
        cout << "stk1.Full() should be true: " << boolalpha << stk1.Full() << endl;
        cout << "stk1.Top() should print out 11: " << stk1.Top() << endl;

        cout << "Popping values of stk1:\n";
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"stk1.Top() should print out 8: " << stk1.Top() << endl;
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"stk1.Top() should print out 29: " << stk1.Top() << endl;
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"stk1.Top() should print out 5: " << stk1.Top() << endl;
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"All 4 values popped, stk1.Empty() should be true: " << boolalpha << stk1.Empty() << endl;
        
        Stack stk2(6);
        cout << "\nStack stk2 created with capacity of 6\n"
             << "stk2.Capacity: " << stk2.Capacity() << endl;
        cout << "pushing 6 ints onto stack\n"
             << "stk2.Push(5)\n";
        stk2.Push(5);
        cout << "stk2.Push(29)\n";
        stk2.Push(29);
        cout << "stk2.Push(8)\n";
        stk2.Push(8);
        cout << "stk2.Push(11)\n";
        stk2.Push(11);                                                         
        cout << "stk2.Push(33)\n";
        stk2.Push(33);
        cout << "stk2.Push(1)\n";
        stk2.Push(1);
        cout << "stk2.Full() should be true: " << boolalpha << stk2.Full() << endl;
        cout << "stk2.Top() should print out 1: " << stk2.Top() << endl;                cout << "Popping values of stk2:\n";
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout <<"stk2.Top() should print out 33: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out 11: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out 8: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out 29: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out 5: " << stk2.Top() << endl;
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



