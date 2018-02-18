
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;


#ifndef ELEMTYPE
#define ELEMTYPE int
#endif


#include "DLinkedList.h"
#include "print.h"



int main()
  {
  LoggerSetUpLog("main1.log");
  DLinkedList<ELEMTYPE>  list;
  ELEMTYPE elem;
  ELEMTYPE elem2;

  char selection;
  string filename;
  ifstream fin;
  DListNode<ELEMTYPE> * temp;
  // Initialize the list before the menu loop


  do
    {
    cout << "  DLinkedList<" << GetClassName( elem ) << "> Menu \n";
    cout << "  ==================================================\n";
    cout << "  i  Insert a value into the list                \n";
    cout << "  a  Insert a value After a value                \n";
    cout << "  d  Delete a value from the list (1st from front)\n";
    cout << "  f  Delete a value from the list (1st from rear)\n";
    cout << "  s  Search the list for a value                 \n";
    cout << "  t  Search from the rear the list for a value   \n";
    cout << "  r  Read values from a file to insert into list \n";
    cout << "  p  Print the values of the list  (forward)     \n";
    cout << "  q  Print the values of the list  (reverse)     \n";
    cout << "  h  Print the list as HTML                      \n";
    cout << "  e  Exit                                        \n";
    cout << "  ==================================================\n";
    Prompt("  Enter selection: ",selection);
    cout << "\nOption " << selection << " chosen\n";

    switch(selection)
      {
      case 'e':
        cout << "Goodbye.\n";
        break;

      case 'a':
        Prompt("Enter element to insert into the list: ",elem);
        Prompt("Enter element to insert after: ",elem2);
        temp = list.Search(elem2);
        if ( temp == nullptr) 
          {
            cout << elem2 << " not found." << endl;
            break;
          }
 
        if(list.Insert(elem,temp))
          {
          cout << elem << " was added.\n";
          }
        else
          {
          cout << elem << " was NOT added.\n";
          }
        break;

      case 'i':
        Prompt("Enter element to insert into the list: ",elem);
        if(list.Insert(elem))
          {
          cout << elem << " was added.\n";
          }
        else
          {
          cout << elem << " was NOT added.\n";
          }
        break;

      case 's':
        Prompt("Enter element to search for: ",elem);
	    temp = list.Search(elem);
		 if(list.Search(elem) != nullptr )
          {
          cout << elem << " was found in the list, at address:" << temp << endl;
          }
        else
          {
          cout << elem << " was NOT found in the list.\n";
          }
        break;

      case 't':
        Prompt("Enter element to search for: ",elem);
	    temp = list.ReverseSearch(elem);
		 if(temp != nullptr )
          {
          cout << elem << " was found in the list, at address:" << temp << endl;
          }
        else
          {
          cout << elem << " was NOT found in the list.\n";
          }
        break;

      case 'd':
        Prompt("Enter element to delete: ",elem);
        if(list.Delete(list.Search(elem)))
          {
          cout << elem << " removed from the list.\n";
          }
        else
          {
          cout << "Could not remove " << elem << " from the list.\n";
          }
        break;


      case 'f':
        Prompt("Enter element to delete: ",elem);
        if(list.Delete(list.ReverseSearch(elem)))
          {
          cout << elem << " removed from the list.\n";
          }
        else
          {
          cout << "Could not remove " << elem << " from the list.\n";
          }
        break;


      case 'p':
           cout << list.ToString()<< endl;
        break;
      
		case 'q':
           cout << list.ToStringReverse()<< endl;
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
          if(! list.Insert(elem))
            {
            cout << "Failed to insert " << elem << endl;
            }
          }

        cout << "Read data from " << filename << " into list.\n";
        fin.close();
        fin.clear();  // In case we want to use option 1 again
        break;

		case 'h':
			ToHTMLFile(list,"dlist.html");
		break;



      default:
        cout << "Invalid menu option!\n";
      }
    }
  while(selection != 'e');

  }



