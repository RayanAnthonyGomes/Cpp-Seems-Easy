#include <iostream>
#include <string>
using namespace std;

class RyansClass{
    //As i have said, You cant access private access specifiers from outside our class
    //So in order to access it outside our class
    //We need to create a public access specifier
    public:
    //We want two things from this private class 
    //We want to be able to set the name of our STRING
    //Also we want to get the name in return
    //So we need to create 2 functions 1. to set the variable 2. to get the variable
    //Lets make them as setName and getName
    //In order to set the variable, lets make a void function. Because its not returning anything. We are just setting the variable here
    //What people typically do.is type SET and Then the name of our variable
    //After we need to call the string and naming it smth and that variable is gonna be equal to the value X

    void setName(string x){
       //Now, Whenever we try to set the name all we need to do is set it equal to the value x;
        name = x;
    }//And this is our setter function
    //Now we created a setter function to change that name variable
    //Now we need to build a function to access it

    //Remember, Since we want the name in return
    //We create a string function because the name is basically(ofcourse) a text which is a string

    //Lets type string and call it getName to get the name in return
    //It doesnt need any parameters
    string getName(){
       // now all u do is return the variable
        return name;
    } 
    //Now our program is a bit safer
    //In order to access our name variable on the private section
    //We need to get through these public functions
    //In order to set the name we need to go through this and to output this we need to go through this function


    private:
        string name;
};

int main(){

     //Now in order to use those functions we need to create a object which would give us the access to it
     RyansClass RyansObject;
     RyansObject.setName("Sir Thomas Eds");
     //Now lets print it out
     cout << RyansObject.getName();

    return 0;
}