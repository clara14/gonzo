
#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library

#include "BST.h"
#include "print.h"

int main()
  {
  LoggerSetUpLog("main4.log");

  BST<string> tree;
  cout << "BST<string> tree created\n";

  cout << "inserting values into tree:\n";
  cout << "tree.insert(gamma): " << boolalpha << tree.insert("gamma") << endl;
  cout << "tree.insert(alpha): " << boolalpha << tree.insert("alpha") << endl;
  cout << "tree.insert(omega): " << boolalpha << tree.insert("omega") << endl;
  cout << "tree.insert(leeroy): " << boolalpha << tree.insert("leeroy") << endl;
  cout << "tree.insert(jenkins): " << boolalpha << tree.insert("jenkins") << endl;
  cout << "tree.insert(allah): " << boolalpha << tree.insert("allah") << endl;
  cout << "tree.insert(beta): " << boolalpha << tree.insert("beta") << endl;

  cout << "\ntree.print():\n";
  tree.print();

  cout << "\ntree.printReverse():\n";
  tree.printReverse();

  cout << "\nSearching for value 'omega' which should be in the tree\n";
  cout << "tree.search(omega):\n ";
  if(tree.search("omega"))
      cout << "omega is in the BST\n";
  else
      cout << "omega is NOt in the BSt\n";

  cout << "\nSearching for value 'petty' which should NOT be in the tree\n";
  cout << "tree.search(petty):\n";
  if(tree.search("petty"))
      cout << "petty is in the BST\n";
  else
      cout << "petty is NOT in the BST\n";

  cout << "\nDeleting a few values from BST\n";
  cout << "tree.remove(beta): " << boolalpha << tree.remove("beta") << endl;
  cout << "tree.remove(allah): " << boolalpha << tree.remove("allah") << endl;
  cout << "tree.remove(omega): " << boolalpha << tree.remove("omega") << endl;

  cout << "\ntree.print():\n";
  tree.print();

  cout << "\ntree.printReverse():\n";
  tree.printReverse();

  cout << "\nInserting more values in the tree\n";
  cout << "tree.insert(edgey): " << boolalpha << tree.insert("edgey") << endl;
  cout << "tree.insert(memes): " << boolalpha << tree.insert("memes") << endl;

  cout << "\ntree.print():\n";
  tree.print();

  cout << "\ntree.printReverse():\n";
  tree.printReverse();

  TreeNode<string>* temp;
  temp = tree.iterativeSearch("memes");
  cout << "\nGoing to do an iterative search for value 'memes' (should exist)\n";
  if(temp)
  {
      cout << "value 'memes' found at " << temp << endl;
  }
  else
      cout << "value 'memes' NOT found\n";


  cout << "\nremoving the rest of the values from the tree\n";
  cout << "tree.remove(leeroy): " << boolalpha << tree.remove("leeroy") << endl;
  cout << "tree.remove(edgey): " << boolalpha << tree.remove("edgey") << endl;
  cout << "tree.remove(memes): " << boolalpha << tree.remove("memes") << endl;
  cout << "tree.remove(jenkins): " << boolalpha << tree.remove("jenkins") << endl;
  cout << "tree.remove(alpha): " << boolalpha << tree.remove("alpha") << endl;
  cout << "tree.remove(gamma): " << boolalpha << tree.remove("gamma") << endl;
  
  cout << "\ntree.print():\n";
  tree.print();

  cout << "\ntree.printReverse():\n";
  tree.printReverse();

  cout << "\ncalling iterativeSearch('leeroy') to throw exception\n";
  try
  {
      temp = tree.iterativeSearch("leeroy");
      cout << "Wow that worked\n";
  }
  catch(const char* exc)
  {
      cout << "Exception caught: " << exc << endl;
  }



  return 0;
  }
