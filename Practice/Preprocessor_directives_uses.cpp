#include<iostream>

//Not using "namespace standard" for avoiding the bad practice.
#define gfg 2020  //"define" is a directive used to define a macro and doesn't need a ";" to end.

//Applying conditional compilation:
#if gfg>200
   #undef gfg  //used to undefine a directive
   #define gfg 1000  
#elif gfg<50
   #undef gfg
   #define gfg 50
#else
    #undef gfg
    #define gfg 100
#endif

int main()
{
    std::cout<<"Value is now: "<<gfg;  //using scope resolution operators after "standard" instead of "namespace standard".
                                       //The std::cout is used to identify the standard character output device which is usually the desktop screen.
    return 0;
}
