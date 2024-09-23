/*   
What is a loop?
=> We use a loop when we want to run a code again and again
Just like we do starting from line 6
*/ 
/* --------------
#include <iostream>
#include <string>
using namespace std;
int main(){
    int a = 1;
    while(a<=5){
        cout << "Integer A is: " << a << endl;
       // nOw its printing it out over and over again

    }
 
    return 0;
}

/*
Typically we want to run this code 5/10 times
to close the loop.
a = a + 1;
so the first time it runs its gonna add the value of a 
by the time it gets to 5
its not gonna run anymore because it doesnt meet the conditions

*/
/*----------------------------------
#include <iostream>
#include <string>
using namespace std;
int main(){
    int a = 1;
    while(a<=5){
        cout << "Integer A is: " << a << endl;
       a = a + 1;

    }
 
    return 0;
}
*/

// --------------------------------------------------------
/*
#include <iostream>
#include <string>
using namespace std;
int main(){
    int a = 1;
    while(a<=5){
        cout << "Integer A is: " << a << endl;
        a++;
        //This is the exact same as using a = a + 1;

    }
 
    return 0;
}
*/
//LETS make a program so the user can add 5 different numbers
// soto do that we need to add a variable and name that number
/*
#include <iostream>
#include <string>
using namespace std;
int main(){
    int a = 1;
    int number;
    while(a<=5){
        cin >> number;
       a++;
//Now the user has to add 5 numbers
// This loop is gonna run until the user has inputted 5 numbers
    }
 
    return 0;
}

*/
//Lets make another variable to hold the sum of those numbers that the user inputted
#include <iostream>
#include <string>
using namespace std;
int main(){
    int a = 1;
    int number;
    int total = 0; //By default the user didnt add any numbers because we didnt run the program yet

    while(a<=5){
       cin >> number;
       total = total + number;
        a++;
    }
    cout << "Your total is: " << total;
 
    return 0;
}