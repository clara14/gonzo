
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#ifndef ELEMTYPE
#define ELEMTYPE int
#endif

#include "AVL.h"
#include "print.h"


int main()
{
	LoggerSetUpLog("main5.log");
	AVL<ELEMTYPE> tree;
	ELEMTYPE elem;
	int selection;
	string filename;
	ifstream fin;

	// Initialize the tree before the menu loop


	do
	{
		cout << "             AVL Tree Menu\n";
		cout << "  ===============================================\n";
		cout << "  1. Insert a value into the tree                \n";
		cout << "  2. Search the tree for a value                 \n";
		cout << "  3. Delete a value from the tree                \n";
		cout << "  4. Print the values of the tree in sorted order\n";
		cout << "  5. Print the tree to html file                 \n";
		cout << "  6. Read values from a file to insert into tree \n";
		cout << "  0. Exit                                        \n";
		cout << "  ===============================================\n";
		Prompt("  Enter selection: ",selection);

		switch(selection)
		{
			case 0:
				cout << "Goodbye.\n";
				break;

			case 1:
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

			case 2:
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

			case 3:
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

			case 4:
				tree.print();
				break;
			case 5:
				// this path should work if your in the proper directory for this homework
				ToHTMLFile(tree, "main5_tree.html");
				break;


			case 6:
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
	} while(selection != 0);

}



