#include "cmpslib.h"
struct LOGGER_DATA LGDATA;


#define ELEMTYPE char
#include "Stack.h"


int main()
{
	LoggerSetUpLog("main2.log");
	//__SSR__
    
    
    

    try
    {
        Stack stk1;
        cout << "Stack stk1 created with default size(capacity should be 4)\n"
             << "stk1.Capacity: " << stk1.Capacity() << endl;
        cout << "pushing 4 chars onto stack\n"
             << "stk1.Push('h')\n";
        stk1.Push('h');
        cout << "stk1.Push('e')\n";
        stk1.Push('e');
        cout << "stk1.Push('y')\n";
        stk1.Push('y');
        cout << "stk1.Push('o')\n";
        stk1.Push('o');
        cout << "stk1.Full() should be true: " << boolalpha << stk1.Full() << endl;
        cout << "stk1.Top() should print out o: " << stk1.Top() << endl;

        cout << "Popping values of stk1:\n";
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"stk1.Top() should print out y: " << stk1.Top() << endl;
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"stk1.Top() should print out e: " << stk1.Top() << endl;
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"stk1.Top() should print out h: " << stk1.Top() << endl;
        cout << "stk1.Pop();\n";
        stk1.Pop();
        cout <<"All 4 values popped, stk1.Empty() should be true: " << boolalpha << stk1.Empty() << endl;
        
        Stack stk2(6);
        cout << "\nStack stk2 created with capacity of 6\n"
             << "stk2.Capacity: " << stk2.Capacity() << endl;
        cout << "pushing 6 chars onto stack\n"
             << "stk2.Push('h')\n";
        stk2.Push('h');
        cout << "stk2.Push('e')\n";
        stk2.Push('e');
        cout << "stk2.Push('l')\n";
        stk2.Push('l');
        cout << "stk2.Push('l')\n";
        stk2.Push('l');                                                         
        cout << "stk2.Push('o')\n";
        stk2.Push('o');
        cout << "stk2.Push('!')\n";
        stk2.Push('!');
        cout << "stk2.Full() should be true: " << boolalpha << stk2.Full() << endl;
        cout << "stk2.Top() should print out !: " << stk2.Top() << endl;                cout << "Popping values of stk2:\n";
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout <<"stk2.Top() should print out o: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out l: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out l: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out e: " << stk2.Top() << endl;
        cout << "stk2.Pop();\n";
        stk2.Pop();
        cout << "stk2.Top() should print out h: " << stk2.Top() << endl;
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



