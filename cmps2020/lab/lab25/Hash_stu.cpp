#include "Hash.h"



// Calculates the primary key using modulo arithmetic

// Primary key will be in the range 0 to MAX_CAPACITY - 1

int HashTable::hash1(int value)
{
    LogStart(value);
    LogEndReturning(value % MAX_CAPACITY);
    return (value % MAX_CAPACITY);
}


// for the 2nd hash we want to have an alternate method of calculating a hash

// MAX_CAPACITY - ( value % MAX_CAPACITY)

int HashTable::hash2(int value)
{
    LogStart(value);
    LogEndReturning(MAX_CAPACITY - ( value % MAX_CAPACITY));
    return(MAX_CAPACITY - ( value % MAX_CAPACITY));
}

// create a string representation of the HashTable class

string HashTable::ToString()
{
    LogStart();
    ostringstream os;
    os << "\nHashtable:\n"
       << "hash size: " << MAX_CAPACITY << endl
       << "count: " << count << endl;

    for(int loop=0;loop<MAX_CAPACITY;loop++)
    {
        
        if(hashtable[loop]==DELETED_VALUE)
        {
            os << "hashtable[   " << loop << "] \t\tcontains: DELETED_VALUE\n";
        }
        if(hashtable[loop]!=EMPTY_VALUE && hashtable[loop]!=DELETED_VALUE)
        {
            os << "hashtable[   " << loop <<"] \t\tcontains:         "
               << hashtable[loop] << " \thash1=         " 
               << hash1(hashtable[loop]) 
               <<  " \thash2=      " << hash2(hashtable[loop]) << endl;
        }
    }
    LogEndReturning(os.str());
    return os.str();\
}









