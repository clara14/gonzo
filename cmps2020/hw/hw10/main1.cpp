#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#include "SLinkedList.h"
#include "print.h"

int main()
  {
  LoggerSetUpLog("main.log");
  SLinkedList  list;
  ELEMTYPE elem;

  SListNode * temp;
  char  selection;
  string filename;
  ifstream fin;

  do
    {
    cout << "  SLinkedList<" << GetClassName( elem ) << "> Menu\n";
    cout << "  ===============================================\n";
    cout << "  i  Insert a value into the list                \n";
    cout << "  b  Insert a value into the list at the back    \n";
    cout << "  d  Delete a value from the list                \n";
    cout << "  s  Search the list for a value                 \n";
    cout << "  r  Read values from a file to insert into list \n";
    cout << "  p  Print the values in  the list               \n";
    cout << "  h  Print the values in  the list as html       \n";
    cout << "  e  Exit                                        \n";
    cout << "  ===============================================\n";
    Prompt("  Enter selection: ",selection);
    cout << "\nOption " << selection << " chosen\n";

    switch(selection)
      {
      case 'e':
        cout << "Goodbye.\n";
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

      case 'b':
        Prompt("Enter element to insert into the list: ",elem);
        if(list.InsertBack(elem))
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
        temp =  list.Search(elem);
		 if(temp != nullptr)
          {
          cout << elem << " was found in the list, with an address of " << temp << endl;
          }
        else
          {
          cout << elem << " was NOT found in the list.\n";
          }
        break;

      case 'd':
        Prompt("Enter element to delete: ",elem);
        if(list.Remove(list.Search(elem)))
          {
          cout << elem << " removed from the list.\n";
          }
        else
          {
          cout << "Could not remove " << elem << " from the list.\n";
          }
        break;

      case 'p':
		cout << list.ToString();
        break;
      
	  case 'h':
	      ToHTMLFile(list,"slist.html");
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





      default:
        cout << "Invalid menu option!\n";
      }
    }
  while(selection != 'e');

  }



