#include "Hash.h"

// Create the empty hash table
// no elements currently stored
// Initialize all of the table spaces to EMPTY_VALUE
// Returns true if count is 0
// Returns true if count is MAX_CAPACITY
// Searches for the value in the table, returning true if found, false if not
// If the primary slot is not the value, probe forward through the table
//   using the double hashing probe sequence. Stop probing when an EMPTY_VALUE
//   is reached but NOT when a DELETED_VALUE is reached
// Scans the table until an available slot is found.
// Search for the value and replace it with DELETED_VALUE only if found

HashTable::HashTable()
{
    LogStart();
    count = 0;
    for(int loop=0;loop<MAX_CAPACITY;loop++)
    {
        hashtable[loop] = EMPTY_VALUE;
    }
    LogEnd();
}

bool HashTable::empty()
{
    LogStart();
    bool status = false;
    if(count==0)
        status = true;
    LogEndReturning(status);
    return status;
}

bool HashTable::full()
{
    bool status = false;
    if(count==MAX_CAPACITY)
        status = true;
    LogEndReturning(status);
    return status;
}

int HashTable::hash1(int value)
{
    LogStart(value);
    LogEndReturning(value % MAX_CAPACITY);
    return(value % MAX_CAPACITY);
}

int HashTable::hash2(int value)
{
    LogStart(value);
    LogEndReturning(MAX_CAPACITY - (value % MAX_CAPACITY));
    return(MAX_CAPACITY - (value % MAX_CAPACITY));
}

bool HashTable::search(int value)
{
    LogStart(value);
    bool status = false;
    if(hash1(hashtable[value])==value)
        status = true;
    int key = hash2(value);
    while(hashtable[hash1(key)]!=EMPTY_VALUE)
    {
        if(hashtable[hash1(key)]==value)
            status = true;
        key++;
    }
    LogEndReturning(status);
    return status;
}

bool HashTable::insert(int value)
{
    LogStart(value);
    bool status=false;
    if(value==EMPTY_VALUE || value==DELETED_VALUE)
        throw "Cannot insert value";
    if(hashtable[hash1(value)]==EMPTY_VALUE || hashtable[hash1(value)]==DELETED_VALUE)
    {
        hashtable[hash1(value)] = value;
        count++;
        return true;
    }
    int key = hash2(value);
    //while(hashtable[hash1(key)]!=value)
    while(status==false)
    {
        if(hashtable[hash1(key)]==EMPTY_VALUE || hashtable[hash1(key)]==DELETED_VALUE)
        {
            hashtable[hash1(key)] = value;
            count++;
            status= true;
        }
        else
            key++;
    }
    LogEndReturning(status);
    return status;
}

bool HashTable::remove(int value)
{
    LogStart(value);
    bool status = false;
    if(value==EMPTY_VALUE || value==DELETED_VALUE)
        throw "Cannot remove this value";
    if(hashtable[hash1(value)]==value)
    {
        count--;
        hashtable[hash1(value)]=DELETED_VALUE;
        return true;
    }
    int key = hash2(value);
    while(hashtable[hash1(key)]!=EMPTY_VALUE)
    {
        if(hashtable[hash1(key)]==value)
        {
            hashtable[hash1(key)]=DELETED_VALUE;
            count--;
            return true;
        }
        key++;
    }
    LogEndReturning(status);
    return status;
}

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
            os << "hashtable[" << setw(5) << loop <<"]\tcontains: DELETED_VALUE\n";
        }
        if(hashtable[loop]!=EMPTY_VALUE && hashtable[loop]!=DELETED_VALUE)
        {
            os << "hashtable["<< setw(5) << loop << "]\tcontains:\t"
               << hashtable[loop] << "\thash1=\t" << hash1(hashtable[loop])
               << " \thash2=\t" << hash2(hashtable[loop]) << endl;
        }
    }
    LogEndReturning(os.str());
    return os.str();
}






