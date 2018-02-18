#pragma once
#include<string>
#include<iostream>
#include<sstream>

class animal
{
    public:
        string GetClassName()
        {
            return class_type;
        }
        animal()
        {
            class_type="animal";
        }
        virtual ~animal(){}
        virtual string GetSound()
        {
            return "Generic Animal Sound";
        }

    protected:
        string class_type;
};

class bird: public animal
{
    public:
        bird()
        {
            class_type="bird";
        }
        ~bird()
        {
           
        }
        string GetSound()
        {
            return "Generic Bird Sound";
        }
};

class duck: public bird
{
    public:
        duck()
        {
            class_type="duck";
        }
        ~duck()
        {
          
        }
        string GetSound()
        {
            return "Quack Quack";
        }
};

class owl : public bird
{
    public:
        owl()
        {
            class_type="owl";
        }
        ~owl()
        {
           
        }
        string GetSound()
        {
            return "Hoot Hoot";
        }
};

    

