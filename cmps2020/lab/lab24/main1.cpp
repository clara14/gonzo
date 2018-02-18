
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;




#ifndef ELEMTYPE 
#define ELEMTYPE int
#endif





#include "AVL.h"
#include "print.h"




int main()
  {
  LoggerSetUpLog("main.log");
  AVL<ELEMTYPE> tree;
  ELEMTYPE elem;
  char  selection;
  string filename;
  ifstream fin;

  // Initialize the tree before the menu loop


  do
    {
    cout << "             Binary Search Tree "<< GetClassName(elem) << " Menu\n";
    cout << "  ===============================================\n";
    cout << "  i Insert a value into the tree                \n";
    cout << "  s Search the tree for a value                 \n";
    cout << "  d Delete a value from the tree                \n";
    cout << "  p Print the values of the tree in sorted order\n";
    cout << "  h Print the tree to html file                 \n";
    cout << "  r Read values from a file to insert into tree \n";
    cout << "  e Exit                                        \n";
    cout << "  ===============================================\n";
    Prompt("  Enter selection: ",selection);
    cout << "\nOption " << selection << " chosen\n";

    switch(selection)
      {
      case 'e':
        cout << "Goodbye.\n";
        break;

      case 'i':
        Prompt("Enter element to insert into the tree: ",elem);
        if(tree.insert(elem))
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
        if(tree.search(elem))
          {
          cout << elem << " was found in the tree.\n";
          }
        else
          {
          cout << elem << " was NOT found in the tree.\n";
          }
        break;

      case 'd':
        Prompt("Enter element to delete: ",elem);
        if(tree.remove(elem))
          {
          cout << elem << " removed from the tree.\n";
          }
        else
          {
          cout << "Could not remove " << elem << " from the tree.\n";
          }
        break;

      case 'p':
        tree.print();
        break;
      case 'h':
        // this path should work if your in the proper directory for this homework
        ToHTMLFile(tree, "tree.html");
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
          if(! tree.insert(elem))
            {
            cout << "Failed to insert " << elem << endl;
            }
          }

        cout << "Read data from " << filename << " into tree.\n";
        fin.close();
        fin.clear();  // In case we want to use option 1 again
        break;





      default:
        cout << "Invalid menu option!\n";
      }
    }
  while(selection != 'e');

  }



