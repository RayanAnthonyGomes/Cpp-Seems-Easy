#include <bits/stdc++.h>
using namespace std;

/*
'if statement' is used to execute a block of code only if a certain condition is met. It allows us to conditionally execute code based on whether the specified condition is true.

'else statement', on the other hand, is an optional companion to the if statement. It specifies what code to execute if the condition in the if statement is not met (i.e. if it is false).


*/
int main(){
int age;
cout << "Enter your age. ---> ";
cin >> age;
if (age<18){
    cout << "you are not an adult";
    if (age<=10) {
        cout << "kids";
    }
} else if(age >=18){
    cout << "Time for getting a job"; 
}
if (age>=50)
    {
        cout<< "RETIREMENT SOON.";
    }

}