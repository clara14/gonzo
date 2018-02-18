#include <iostream>
#include <limits>
#include "cmpslib.h"
using namespace std;

#define MAX_CAPACITY   1013    // capacity is a prime number
#define EMPTY_VALUE      -1    // invalid value, represents empty slot
#define DELETED_VALUE    -2    // invalid value, represents deleted slot



class HashTable
  {
  private:
    int hashtable[MAX_CAPACITY];       // table to store values
    int count;                         // count of values currently stored

  public:
    /*
    initialize all slots in the array to  EMPTY_VALUE
    set count to 0
    */
    HashTable();

    // return true if hash table is empty
    bool empty();

    // return true if hash table is full
    bool full();

    /*
    primary hash function: a modulo function
    it will value mod MAX_CAPACITY
    */
    int hash1(int value);

    /*
    secondary hash function.
    it will be MAX_CAPACITY - ( value mod MAX_CAPSCITY )
    */
    int hash2(int value);


    /*
    Searches for the value in the table, returning true if found, false if not
    If the primary slot is not the value, probe forward through the table
    using the double hashing probe sequence. Stop probing when an EMPTY_VALUE
    is reached but NOT when a DELETED_VALUE is reached
    */
    bool search(int value);

    /*
    insert the value into the table
    do not allow value to be EMPTY_VALUE or DELETED_VALUE , if so throw an exception
    */
    bool insert(int value);

    /*
    if value in table, replace with DELETED_VALUE
    do not allow value to be EMPTY_VALUE or DELETED_VALUE, if so throw an exception
    */
    bool remove(int value);


    /*
    returns a string representation of the hashtable
    */
    string ToString();



    friend void PrintHashTable(HashTable *in );
  };


