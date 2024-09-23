//1.14.28
//Classes and Objects
//Classes are basically an easy way to group our variables and functions
#include <iostream>
using namespace std;

//How to create classes

class RyansClass{
//All your functions, variables go here
    //access specifier
    //Sometimes we want some functions to be run from inside our class
    //SOmetimes we want some functions to be run from outside the class
    //Only then we use the PUBLIC access specifier:: It says it can be used outside the class

    //Lets create a public specifier
    public:
        void PrintScreen(){
            //Its not gonna take any parameters. Because its a really simple function here
            cout << "COOL SAYING" << "\n";
            //To use it we need to create an object for it
            //Object is how we access the stuff that is in here outside our class
            //We use objects to specify the exact class we want this function from
            //Suppose we have This PrintScreen function on many classes
            //How does c++ know that we want exactly this function
            //Thats why we use objects

        }

};

int main(){
    //How to create an object
    //Its basically same as creating a variable
    //We simply type the name of our class and then after this we give our object a name
    RyansClass RyansObject;
    //This can be used as a key whenerver we are trying to access stuff from our class
    RyansObject.PrintScreen();
    //Now we just type out our object. and then in order to access anything from the class we need to use the . separator
    //Now we just need to add our function with empty parameters
    //And bam wam.. We now have a perfectly running program

    return 0;
}