//Using the information of the previous video. We can now calculate the average of 
//Students age from a class room, or in my family
//But
//sometimes we dont know how long should we run a loop
//Lets say its worldwide
/*
Lets create a program which will show how my people we entered and give their avg age
*/
//LETS NAME OUR PROGRAM AGE AVGR
#include <iostream>
using namespace std;
//----------------------------------------------------------------------------------
//For some point in our program we need to store the age we enetered
int main(){
    int age;
    int ageTotal = 0;
    int numberOfPeople = 0;

    cout << "Enter first persons age or -1 to quit. \n";
    cin >> age;

    while(age != -1){
        ageTotal = ageTotal + age;
        numberOfPeople++;
        cout << "Enter next person's age or -1 to quit. \n";
        cin >> age;
    }

    cout << "Number of people entered: " << numberOfPeople << "\n";
    cout << "Average age: " << ageTotal/numberOfPeople;



   
}


