#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#ifndef MAX_SIZE
#define MAX_SIZE 10
#endif


#ifndef ELEMTYPE
#define ELEMTYPE int
#endif

#include "Queue.h"



int main()
  {
  LoggerSetUpLog("example1.log");
  Queue <ELEMTYPE> queue;
  ELEMTYPE elem;
  char selection;
  string filename;
  ifstream fin;

  // Initialize the queue before the menu loop


  do
    {
    cout << "  Queue<" << GetClassName(elem) << "> Menu\n";
    cout << "  ===============================================\n";
    cout << "  i Enqueue a value into the queue \n";
    cout << "  t Display the value returned by Front \n";
    cout << "  d Dequeue a value from the queue \n";
    cout << "  r Read values from a file to Enqueue them \n";
    cout << "  s Display the output of ToString() \n";
    cout << "  e Display the output of Empty() \n";
    cout << "  f Display the output of Full() \n";
    cout << "  x Exit \n";
    cout << "  ===============================================\n";
    Prompt("  Enter selection: ",selection);
    cout << "\nOption " << selection << " chosen\n";

    switch(selection)
      {
      case 'x':
        cout << "Goodbye.\n";
        break;

      case 'i':
        Prompt("Enter element to Enqueue into the queue: ",elem);
        if(queue.Enqueue(elem))
          {
          cout << elem << " was added.\n";
          }
        else
          {
          cout << elem << " was NOT added.\n";
          }
        break;

      case 't':
		elem = queue.Front();
        cout << "the Front function returned " << queue.Front() << endl;
        break;
      
	  case 'd':
        queue.Dequeue();
        break;

      case 'r':
        Prompt("Enter filename: ",filename);
        fin.open(filename.c_str());
        if(fin.fail())
          {
          fin.clear();
          cout << "Failed to open " << filename << endl;
          continue;  // Go to next iteration of the loop
          }

        while(fin >> elem)
          {
          if(! queue.Enqueue(elem))
            {
            cout << "Failed to Enqueue " << elem << endl;
            }
          }

        cout << "Read data from " << filename << " into queue.\n";
        fin.close();
        fin.clear();  // In case we want to use option 1 again
        break;

	  case 's':
        cout << "ToString():\n"		<<  queue.ToString() << endl;
        break;

	  case 'e':
        cout << "Empty():"			<< boolalpha	<< queue.Empty() << endl;
        break;

	  case 'f':
        cout << "Full():"			<< boolalpha	<< queue.Full() << endl;
        break;

      default:
        cout << "Invalid menu option!\n";
      }
    }
  while(selection != 'x');

  }



