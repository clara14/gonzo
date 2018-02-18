#include "cmpslib.h"
#include <stdexcept>      // std::out_of_range


int main()
{
	string menu =	"\nSelect Option (1-3)\n1. Erase\n2. Division\n3. Exit\n";

	bool finished = false;
	double d1, d2, d3;
	string s1,word;
	int int1, menu_choice;
    
    char exc;
	//	ifstream file;


	while (! finished)
	{  
        
        menu_choice =PromptForInt(menu,1,3);
		try 
		{
			// string erase
            if(menu_choice==1)
            {
                cout << "enter a word: " << endl;
                
                cin >> word;
                
                cout << "your word was " << word << endl;
                if(word =="linux")
                {
                    exc='l';
                    throw exc;
                }
                if(word=="windows")
                {
                    exc='w';
                    throw exc;
                }

                cout << "at what position should I remove a char ? ";
                cin >> int1;
            
                if(int1 < 0)
                {
                    s1 = "how can I possibly delete from negative position";
                    throw s1;
                }
                for(int loop=(int1+1);word[loop-1] != '\0';loop++)
                {
                    word[loop-1] = word[loop];
                }
                cout << "the word is now " << word << endl;
                
            }

// division
            if(menu_choice==2)
            {
                cout << "Enter in the numerator ";
                cin >> d1;
                cout << "Enter in the denominator ";
                cin >> d2;
                if(d2 == 0)
                {
                    s1="You cant divide by zero";
                    throw s1;
                }
                d3 = d1/d2;
                cout << d1 << "/" << d2 << "=" << d3 << endl;
            }
            
            if(menu_choice==3)
            {

                finished=true;
            }
            cout << "at the end of the try block, there must have not been any exceptions\n";


            
		}// end try
        catch (char exc)
        {
            cout << "exception caught of type char, val=" << exc << endl;
        }
        catch (string s1)
        {
            cout << "exception caught of type string, val=" << s1 << endl;
        }
        catch (std::out_of_range err)
        {
            cout << "exception caught of type std::out_of_range, val=" << err.what() << endl;
        }
       



		
	}; // end while


	return 0;
}




