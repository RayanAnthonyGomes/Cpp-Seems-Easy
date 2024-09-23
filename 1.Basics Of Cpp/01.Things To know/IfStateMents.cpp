/*                      [{If Statements}]
----------------------------------------------------------------------
This is how we let the computer make very simple decisions by adding
some conditions. The computer is basically making a choice.
For example: we might have some code that we want to run sometimes and 
only when the specific conditions criteria are met

Syntax: 
    if(test){
        code;
    }
//If the test is true then its gonna run the code otherwise it would simply
ignore it
*/

//--------------------------------------------------------------------------------------//

/*
Now we are about to learn if and else statements
its basically the advanced version of if statements
lets make the user input their age
if their age is greater than 30 then lets print YOU ARE REALLY OLD
or else we are gonna print Hey Get a job already!\
 
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int age;
    cout << "Please type your age \n";
    cin >>  age;
    if(age>=30){
        cout << "Greetings! Sir. You are very old";
        if(age>70){
            cout << "Come On! Die already!!";
        }
    }   else{
        cout << "Ouh! You are young.";
        cout << "Go get a job";
    }

}