//
//  virtual_function.cpp
//  object oriented programming
//
//  Created by Safayet arefin on 22/2/18.
//  Copyright © 2018 Safayet arefin. All rights reserved.
//

/*
 Virtual Function in C++:
 A virtual function a member function and it has two things:
        1. It is declared within base class
        2. It is redefined within by derived class.
 
 Suppose we have two classes A and B. A is the base class and B is the derived class of A. Now, we want
 to get access to the derived class B's function by the object of base class A. In this case, we have to
 do the following things:
            1. Create a pointer or a reference to the base clas
            2. Refer to a derived class object using a pointer or a reference to the base class
            3. Create virtual function for that object in the base class
            4. Execute the derived class’s version of the function.
Most importantly, virtual function are used for run-time polymorphism.
 */

#include <stdio.h>
#include <iostream>

using namespace std;

class base
{
public:
    virtual int add ()
    {
        int a=5;
        int b=5;
        return a+b;
        
    }
};

class derived : public base
{
public:
    int add ()
    {
        int a=5;
        int b=5;
        int c=5;
        return a+b+c;
    }
    
};

int main()
{
    base *b;
    derived d;
    b= &d;
    // RUN-TIME POLYMORPHISM
    int result = b->add();
    printf ("output --- %d \n", result);
    return 0;
}
//output --- 15





