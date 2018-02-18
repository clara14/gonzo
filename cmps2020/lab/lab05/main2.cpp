/*
   All rights reserved. No part of this document may be reproduced, distributed,   or transmitted in any form or by any       means, including                     photocopying,             recording, or other electronic or mechanical methods, without the prior         written permission of the author, Michael Sarr
 */

#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library




void PrintArray(int*array,int size)
  {
  LogStart(array,size);
  cout << "Array Address" << array << endl;
  for(int loop =0; loop<size; loop++)
    {
    if(loop)
      cout << ",";
    cout << array[loop];
    }
  cout << endl;
  LogEnd(array,size);
  }

int main()
  {
  LoggerSetUpLog("main2.log");
  char filename[50];
  int choice = PromptForInt("Enter a value 1-3 to chose the file to open: ",1,3);

  if (choice ==1 )
    strncpy(filename,"test_input9.txt",50);

  if (choice ==2 )
    strncpy(filename,"test_input50.txt",50);

  if (choice ==3 )
    strncpy(filename,"test_input100.txt",50);

  if (choice < 1 || choice > 3)
    return 9; // exit gracefuly


  cout << "opening file %s \n" << filename << endl;

  // now all your regular stuff can go here

  ifstream in;// Create an input file stream.

  in.open(filename);

  if (in.fail())
    {
    cout << "Could not open file \""<< filename <<endl;
    return 9;// exit gracefully

    }

  cout << "Creating dynamic array named 'data' of size 5\n";

  int* data = new int[5];

  cout << "Creating int index=0 and int capacity=5\n";

  int index=0;
  int capacity=5;

  cout << "adding records and incrementing count each time\n" 
       << "reading the values into my dynamic array\n";
  
  int temp;
  while(in >> temp)
  {
      cout << "storing " << temp << " into data[" << index << "]\n";
      
      data[index] = temp;

      index++;

      if(index == capacity)
      {
          cout << "\tThe array is full, must resize\n" 
               << "\tcurrent address of 'data' is " << &data[index] << endl 
               << "\tcapacity = " << capacity << endl 
               << "\tcreate a new array of size " << (capacity*2) << endl
               << "\tcopy elements from old array to new array\n";

          int* ndata = new int[capacity*2];     
          for(int loop=0;loop<index;loop++)
          {
              cout <<"\t\tcopying data["<<loop<<"]  ("<<data[loop]<<") to the new array\n";
              ndata[loop]=data[loop];
          }

          cout << "\tdelete the old array\n";

          delete [] data;

          cout << "\tset our array pointer to point to the new array\n";

          data = ndata;

          cout << "\tset capacity to be double what it was\n";

          capacity *= 2;

          cout << "\tcurrent address of 'data' is " << &data[index] 
               << "\n\tcapacity=" << capacity << endl;

      }

  }

  in.close();

  PrintArray(data,index);

  cout << "deleting dynamic array\n";

  delete [] data; 

  return 0;
  }






