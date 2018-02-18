

#include "cmpslib.h"  
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library



#include "classes.h"

int main()
{
	LoggerSetUpLog("main1.log");

	//------------------------------------------------------------------

	if (true)
	{
		cout << "create an array of animal* size 10 \npopulate it with different items of type base class animal  using  the new operator\n";
    
        animal *myarray[10];
        int random;

        for(int loop=0;loop<10;loop++)
        {
            random = CreateRandomNumber(1,4);
            if(random == 1)
            {
                myarray[loop] = new animal();
            }
            if(random == 2)
            {
                myarray[loop] = new bird();
            }
            if(random == 3)
            {
                myarray[loop] = new duck();
            }
            if(random == 4)
            {
                myarray[loop] = new owl();
            }
        }

            

		
		cout << "loop through and print them out , call the GetClassName() and GetSound() methods on each\n";
		
        for(int loop=0;loop<10;loop++)
        {
            cout << "myarray[" << loop << "]->GetClassName() returns " 
                 << myarray[loop]->GetClassName() << endl;
            cout << "myarray[" << loop << "]->GetSound() returns "
                                 << myarray[loop]->GetSound() << endl;
        }

		cout << "\n\nloop through them again and do the same but cast them to the proper type\n\n";
    
    for(int loop=0;loop<10;loop++)
    {
        cout << "myarray[" << loop << "]->GetClassName() returns "
             << myarray[loop]->GetClassName() << endl;
        if(myarray[loop]->GetClassName()== "owl")
        {
            cout << "((owl*)myarray["<<loop<<"])->GetSound() returns "
                 << ((owl*)myarray[loop])->GetSound() << endl;
        }
        if(myarray[loop]->GetClassName()== "duck")
        {
            cout << "((duck*)myarray["<<loop<<"])->GetSound() returns "
                 << ((duck*)myarray[loop])->GetSound() << endl;
        }
        if(myarray[loop]->GetClassName()== "bird")
        {
            cout << "((bird*)myarray["<<loop<<"])->GetSound() returns "
                 << ((bird*)myarray[loop])->GetSound() << endl;
        }
        if(myarray[loop]->GetClassName()=="animal")
        {  
            cout << "myarray[" << loop << "]->GetSound() returns "
             << myarray[loop]->GetSound() << endl;
        }
    }

    for(int loop=0;loop<10;loop++)
    {
        cout << "calling delete myarray[" << loop << "]\n";
        delete myarray[loop];
    }

	}

	//------------------------------------------------------------------
    


	return 0;
}
