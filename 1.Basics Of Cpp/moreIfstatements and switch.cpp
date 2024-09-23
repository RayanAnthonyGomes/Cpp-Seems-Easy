#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int age = 1000;
    int money = 5000;
    //switch statements
    switch (age)
    {
    case 16:
            cout << "You are too young to drink beer! ";
        break;
    case 18: 
            cout << "OLD ENOUGH!";
            break;
    case 20:
            cout << "get a job?";
            break;            
    
    default:
        cout << "AlIEN";
        break;
    }
   
}