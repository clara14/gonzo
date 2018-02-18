#include <list> // include the listlibraray 

#include <iostream> // include the library for input/output streams   (cout, endl and such)

using namespace std;

int main()
{     
    cout << "creating a string list\n";
    list<string> L;
    cout << "adding values to the list\n";
    cout << "adding value one\n";
    L.push_back("one");
    cout << "adding value two\n";
    L.push_back("two");
    cout << "adding value three\n";
    L.push_back("three");
    cout << "adding value four\n";
    L.push_back("four");
    cout << "adding value five\n";
    L.push_back("five");


    cout << "\n\ncreating an iterator\n";
    std::list<string>::iterator it;
    cout << "setting the iterator = to list.begin()\n";
    it = L.begin();
    cout << "our iterator points to the value " << *it << endl;
    cout << "incrementing the iterator\n";
    it++;
    cout << "our iterator now points to the value " << *it << endl;
    
    cout << "\n\nprinting the items in the list front to back\n";
    it = L.begin();
    for(unsigned int loop=0;loop<L.size();loop++)
    {
        cout << "   the iterator now points to " << *it << endl;
        cout << "   increment the iterator\n";
        it++;
    }
    
    cout << "\n\ncreate a reverse_iterator\n";
    std::list<string>::reverse_iterator rit;
    cout << "printing the items in the list back to front\n";
    cout << "set our iterator to list.rbegin() and use a while loop ( != list.rend() )\n";
    rit = L.rbegin();
    while(rit != L.rend() )
    {
        cout << "   the iterator now points to " << *rit << endl;
        cout << "   increment the iterator\n";
        rit++;
    }    


    return 0;
}


