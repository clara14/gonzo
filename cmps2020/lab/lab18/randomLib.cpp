#include "randomLib.h"
unsigned int RND_SEED=0;

int CreateRandomNumber(int min, int max)
{
	if (! RND_SEED)
	{
		RND_SEED=time(NULL);
		srand(RND_SEED);
	}
	int temp = ( ( rand() % (max-min+1) ) + min);
	return temp;
}

char RandomDigit()
{
	return(char) CreateRandomNumber(48,57);
}

char RandomAlpha()
{
	int temp;
	while (true)
	{
    temp = CreateRandomNumber(65,122);
    if( isalpha(temp))
	  return (char) temp;
	}
	return (char) temp;
}

char RandomAlphaNum()
{
	int temp;
	while (true)
	{
    temp = CreateRandomNumber(48,122);
    if( isalpha(temp))
	  return (char) temp;

    if( isdigit(temp))
	  return (char) temp;
	}
	return (char) temp;
}

char RandomSpecialChar()
{
	int temp;
	while (true)
	{
    temp = CreateRandomNumber( 32,122);
    if( isalpha(temp))
	  return (char) temp;

    if( isdigit(temp))
	  return (char) temp;

    if( ispunct(temp))
	  return (char) temp;
	}
	return (char) temp;
}






