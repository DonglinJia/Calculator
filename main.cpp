//
//  main.cpp
//  calculator(class)
//
//  Created by Leo Jia on 2017-01-29.
//  Copyright © 2017 Leo Jia. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int a=0;
int b=0;
string c="a";

class calculator
{
private:
    int number1;
    int number2;
    friend class add;
    friend class subtract;
    friend class multiply;
    friend class division;
public:
    calculator(int inputnumber1, int inputnumber2)
    {
        number1=inputnumber1;
        number2=inputnumber2;
    }
};

class add
{
public:
    static int function(const calculator& number)
    {
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
        return 0;
    }
};

class subtract
{
public:
    static int function(const calculator& number)
    {
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
        return 0;
    }
};

class multiply
{
public:
    static int function(const calculator& number)
    {
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
        return 0;
    }
};

class division
{
public:
    static int function(const calculator& number)
    {
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
        return 0;
    }
};

int main()
{
    printf("Enter char 'add' or 'subtract' or 'multiply' or 'divison' to calculate, and enter 2 number to do calculation.\n");
    calculator number(a,b);
    cin>>c;
    cin>>a;
    cin>>b;
    if (c=="add")
    {
        add::function(number);
    }
    else if (c=="subtract")
    {
        subtract::function(number);
    }
    else if (c=="multiply")
    {
        multiply::function(number);
    }
    else if (c=="division")
    {
        division::function(number);
    }
    return 0;
}


























