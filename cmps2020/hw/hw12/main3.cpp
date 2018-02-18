
#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library

#include "BST.h"
#include "print.h"

int main()
  {
  LoggerSetUpLog("main3.log");

  BST<int> tree;
  cout << "BST<int> tree created\n";

  cout << "inserting values into tree:\n";
  cout << "tree.insert(6): " << boolalpha << tree.insert(6) << endl;
  cout << "tree.insert(9): " << boolalpha << tree.insert(9) << endl;
  cout << "tree.insert(77): " << boolalpha << tree.insert(77) << endl;
  cout << "tree.insert(32): " << boolalpha << tree.insert(32) << endl;
  cout << "tree.insert(1): " << boolalpha << tree.insert(1) << endl;
  cout << "tree.insert(4): " << boolalpha << tree.insert(4) << endl;
  cout << "tree.insert(27): " << boolalpha << tree.insert(27) << endl;

  cout << "\ntree.print():\n";
  tree.print();

  cout << "\ntree.printReverse():\n";
  tree.printReverse();

  cout << "\nSearching for value 4 which should be in the tree\n";
  cout << "tree.search(4):\n ";
  if(tree.search(4))
      cout << "4 is in the BST\n";
  else
      cout << "4 is NOt in the BSt\n";

  cout << "\nSearching for value 25 which should NOT be in the tree\n";
  cout << "tree.search(25):\n";
  if(tree.search(25))
      cout << "25 is in the BST\n";
  else
      cout << "25 is NOT in the BST\n";

  cout << "\nDeleting a few values from BST\n";
  cout << "tree.remove(77): " << boolalpha << tree.remove(77) << endl;
  cout << "tree.remove(4): " << boolalpha << tree.remove(4) << endl;
  cout << "tree.remove(1): " << boolalpha << tree.remove(1) << endl;

  cout << "\ntree.print():\n";
  tree.print();

  cout << "\ntree.printReverse():\n";
  tree.printReverse();

  cout << "\nInserting more values in the tree\n";
  cout << "tree.insert(26): " << boolalpha << tree.insert(26) << endl;
  cout << "tree.insert(34): " << boolalpha << tree.insert(34) << endl;

  cout << "\ntree.print():\n";
  tree.print();

  cout << "\ntree.printReverse():\n";
  tree.printReverse();

  TreeNode<int>* temp;
  temp = tree.iterativeSearch(32);
  cout << "\nGoing to do an iterative search for value 32 (should exist)\n";
  if(temp)
  {
      cout << "value 32 found at " << temp << endl;
  }
  else
      cout << "value 32 NOT found\n";


  cout << "\nremoving the rest of the values from the tree\n";
  cout << "tree.remove(34): " << boolalpha << tree.remove(34) << endl;
  cout << "tree.remove(32): " << boolalpha << tree.remove(32) << endl;
  cout << "tree.remove(27): " << boolalpha << tree.remove(27) << endl;
  cout << "tree.remove(26): " << boolalpha << tree.remove(26) << endl;
  cout << "tree.remove(9): " << boolalpha << tree.remove(9) << endl;
  cout << "tree.remove(6): " << boolalpha << tree.remove(6) << endl;
  
  cout << "\ntree.print():\n";
  tree.print();

  cout << "\ntree.printReverse():\n";
  tree.printReverse();

  cout << "\ncalling iterativeSearch(6) to throw exception\n";
  try
  {
      temp = tree.iterativeSearch(6);
      cout << "Wow that worked\n";
  }
  catch(const char* exc)
  {
      cout << "Exception caught: " << exc << endl;
  }



  return 0;
  }
