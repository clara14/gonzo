
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#include "Stack.h"
#define ELEMTYPE int


int main()
{
	LoggerSetUpLog("example1.log");
	Stack<ELEMTYPE> stack;
	ELEMTYPE elem;
	int selection;
	string filename;
	ifstream fin;

	// Initialize the stack before the menu loop



	do
	{
		cout << "  Stack Menu\n";
		cout << "  ===============================================\n";
		cout << "  1. Push a value into the stack \n";
		cout << "  2. Display the value returned by Top \n";
		cout << "  3. Pop a value from the stack \n";
		cout << "  4. Read values from a file to Push into stack \n";
		cout << "  5. Display the output of ToString() \n";
		cout << "  6. Display the output of Capacity() \n";
		cout << "  7. Display the output of Empty() \n";
		cout << "  8. Display the output of Full() \n";
		cout << "  0. Exit \n";
		cout << "  ===============================================\n";
		Prompt("  Enter selection: ",selection);
		cout << "\nOption " << selection << " chosen\n";

		switch(selection)
		{
			case 0:
				cout << "Goodbye.\n";
				break;

			case 1:
				Prompt("Enter element to Push into the stack: ",elem);
				stack.Push(elem);
				cout << elem << " was added.\n";
				break;

			case 2:
				try
                {
                elem = stack.Top();
				cout << "the Top function returned " << stack.Top() << endl;
                }
                catch(runtime_error ex)
                {
                    cout << ex.what() << endl;
                }
				break;

			case 3:
				stack.Pop();
				break;

			case 4:
				Prompt("Enter filename: ",filename);
				fin.open(filename.c_str());
				if(fin.fail())
				{
					fin.clear();
					cout << "Failed to open " << filename << endl;
					continue;  // Go to next iteration of the loop

				}

				while(fin >> elem)
					stack.Push(elem);

				cout << "Read data from " << filename << " into stack.\n";
				fin.close();
				fin.clear();  // In case we want to use option 1 again

				break;

			case 5:
				cout << "ToString():\n"		<<  stack.ToString() << endl;
				break;

			case 6:
				cout << "Capacity():"		<<  stack.Capacity() << endl;
				break;

			case 7:
				cout << "Empty():"			<< boolalpha	<< stack.Empty() << endl;
				break;

			case 8:
				cout << "Full():"			<< boolalpha	<< stack.Full() << endl;
				break;

			default:
				cout << "Invalid menu option!\n";
		}
	}
	while(selection != 0);

}



