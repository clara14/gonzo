#include <vector> // include the vector libraray 

#include <iostream> // include the library for input/output streams   (cout, endl and such)

#include <algorithm> // for the random_shuffle and sort

#include <ctime> // to seed the random number generator



using namespace std;

int main()
  {

  // create a vector to store Integers
  vector<int> vec;
  cout << "creating an integer vector" << endl;
  cout << "adding values to the vector\n";
  cout << "adding value 10\n";
  vec.push_back(10);
  cout << "adding value 20\n";
  vec.push_back(20);
  cout << "adding value 30\n";
  vec.push_back(30);
  cout << "adding value 40\n";
  vec.push_back(40);
  cout << "adding value 50\n";
  vec.push_back(50);
  cout << "calling the size function\n";
  cout << "size returns " << vec.size() << endl;


  cout << "\n\nsize returns " << vec.size() << endl;
  cout << "creating a standard vector::iterator\n";
  std::vector<int>::iterator it;
  cout << "size returns " << vec.size() << endl;
  cout << "setting the iterator = to vector.begin()\n";
  it = vec.begin();
  cout << "size returns " << vec.size() << endl;
  cout << "our iterator points to the value " << *it << endl;
  cout << "size returns " << vec.size() << endl;
  cout << "incrementing the iterator\n";
  it++;
  cout << "size returns " << vec.size() << endl;
  cout << "our iterator now points to the value " << *it << endl;


  cout << "\n\nsize returns " << vec.size() << endl;
  cout << "printing the items in the vector front to back\n";
  cout << "set our iterator to vector.begin() and use a while loop\n";
  it = vec.begin();
  while(it != vec.end())
  {
      cout << "   the iterator now points to " << *it << endl;
      cout << "   increment the iterator\n";
      it++;
  }

  cout << "\nVector also has an overloaded [] operator\n";
  cout << "use a for loop and print our the elements of the vector via the index operator\n";
  for(unsigned int loop=0;loop<vec.size();loop++)
  {
      cout << "myIntegerVector["<<loop<<"] = " << vec[loop] << endl;
  }

  cout << "use the random_shuffle algorithm to randomize the values in the vector\n";
  random_shuffle(vec.begin(),vec.end());
  cout << "use a for loop and print out the elements of the vector via the index operator\n";
  for(unsigned int loop=0;loop<vec.size();loop++)
  {
      cout << "myIntegerVector["<<loop<<"] = " << vec[loop] << endl;
  }

  cout << "use the sort algorithm to sort the vector\n";
  sort(vec.begin(),vec.end());
  cout << "use a for loop and print out the elements of the vecotr via the index operator\n";
  for(unsigned int loop=0;loop<vec.size();loop++)
  {
      cout << "myIntegerVector["<<loop<<"] = " << vec[loop] << endl;
  }
    

  // print out the value

  }
