// Purpose: HW 7 Hash Tables

//          This implements a static sized array-based hash table that uses

//          double hashing for collision resolution. The double hashing probe

//          sequence is hash1 , hash 2



#include <iostream>
#include <limits>
#include <string.h>
using namespace std;

#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#include "Hash.h"

int menu();
void getInt(int &tmp, const char *prompt);
void PrintHashTable(HashTable*);
int main()
  {
  LoggerSetUpLog("main.log");
  HashTable h;  // Declare the table.

  int sel, num;

  do
    {
    sel = menu();
    switch(sel)
      {
      case 0:
        cout << "Good-bye!\n";
        break;

      case 1:
        if(h.full())
          {
          cout << "Table is full. No more data can be inserted.\n";
          break;
          }
        getInt(num, "Enter an integer: ");
        cout << "Inserting " << num << " into the hash table.\n";
        if(h.insert(num))
          {
          cout << num << " inserted successfully.\n";
          }
        else
          {
          cout << "Error inserting " << num << endl;
          }
        break;

      case 2:
        if(h.empty())
          {
          cout << "Table is empty. Insert data using Option 1 then try again.\n";
          break;
          }
        getInt(num, "Enter an integer: ");
        cout << "Deleting " << num << " from the hash table.\n";
        if(h.remove(num))
          {
          cout << num << " removed from the table.\n";
          }
        else
          {
          cout << "Error removing " << num << endl;
          }
        break;

      case 3:
        if(h.empty())
          {
          cout << "Table is empty. Insert data using Option 1 then try again.\n";
          break;
          }
        getInt(num, "Enter an integer: ");
        cout << "Searching for " << num << " in the hash table.\n";
        if(h.search(num))
          {
          cout << num << " was found.\n";
          }
        else
          {
          cout << num << " was NOT found.\n";
          }
        break;

      case 4:
        getInt(num, "Enter an integer: ");
        cout << "Primary key for "   << num << " is " << h.hash1(num) << ".\n";
        cout << "Secondary key for " << num << " is " << h.hash2(num) << ".\n";
        break;
      case 5:
        cout << h.ToString() << endl;
        break;


      default:
        cout << "Invalid selection!\n";
      }
    }
  while(sel != 0);
  return 0;
  }

int menu()
  {
  LogStart();
  int sel;

  cout << endl;
  cout << "          Hash Table Menu\n";
  cout << "  ===================================\n";
  cout << "  1. Insert an integer into the table\n";
  cout << "  2. Delete an integer from the table\n";
  cout << "  3. Search the table for an integer \n";
  cout << "  4. Print the primary and secondary \n";
  cout << "     keys for an integer             \n";
  cout << "  5. Print HashTable                 \n";
  cout << "                                     \n";
  cout << "  0. Exit                            \n";
  cout << "  ===================================\n";
  getInt(sel, "  Enter selection: ");
  cout << endl;
  LogEndReturning(sel);
  return sel;
  }

void getInt(int &tmp, const char *prompt)
  {
  LogStart(tmp,prompt);
  cout << prompt;
  cin >> tmp;
  while(cin.fail())
    {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input. " << prompt;
    cin >> tmp;
    }

  LogEnd(tmp,prompt);
  }

void PrintHashTable(HashTable *in )
  {
  cout << "HashTable:\nhash size:" << MAX_CAPACITY << "\ncount:" << in->count <<endl;


  for (int loop=0; loop < MAX_CAPACITY; loop++)
    {
    int val = in->hashtable[loop];
    if (val == EMPTY_VALUE)
      {
      continue;
      }
    cout << "hashtable[" << setw(4) << loop <<"] contains:";
    if (val ==DELETED_VALUE)
      {
      cout << "DELETED_VALUE";
      }
    else
      {
      cout  << setw(10)<< in->hashtable[loop] <<" hash1="<<setw(10)<< in->hash1(val)<< "  hash2=" <<setw(10)<< in->hash2(val);
      }

    cout << endl;
    }
  cout << endl;
  }// end PrintHashTable





