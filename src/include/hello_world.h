/*************************************************************************
    > File Name: hello_world.h
    > Author: clzhang 
    > Mail: zcwtuibian@gmail.com 
    > Created Time: Sat 22 Aug 2015 01:03:11 PM CST
 ************************************************************************/

#include<iostream>
#include "hello.h"

class HelloWorld : public Hello
{
    public:
        void myDisplay();
};
