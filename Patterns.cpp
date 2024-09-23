#include<bits/stdc++.h>
using namespace std;
/*
                ****NOTES BEFORE SOLVING PATTERNS****
//I have implemented live input-output system on my Visual Studio Code.
// So i added the files (output.txt, input.txt) to .gitignore
____________________________________________________________________________________________
Approach: 
There are 4 general rules for solving a pattern-based question: 

We always use nested loops for printing the patterns. For the outer loop, we count the number of lines/rows and loop for them.
Next, for the inner loop, we focus on the number of columns and somehow connect them to the rows by forming a logic such that for each row we get the required number of columns to be printed.
We print the ‘*’ inside the inner loop.
Observe symmetry in the pattern or check if a pattern is a combination of two or more similar patterns.
_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________

*/

//Pattern 1:
/*
In this particular problem, we run the outer loop for N times since we have N rows to be printed, the inner loop also runs for N times as we have to print N stars in each row. 
This way we get a rectangular star pattern (square) with an equal number of rows and columns.

Suppose N = 5;
So 5 rows and 5 colums. It will print only stars.

Input: N = 5
Output:
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *

*/

void Pattern_1(int n){
    //Creating the outer loop:
    for (int i = 0; i < n; i++)
    {
        //Creating the inner loop 
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " "; // Added a space after each star
        }
        cout << endl;
    }
    
}

//Pattern 2:
/*
Pattern-2: Right-Angled Triangle Pattern
Examples:

Input Format: N = 6
Result:
* 
* * 
* * *
* * * *
* * * * *
* * * * * *

//In this particular loop we run the outer loop for "N" times and then 
for the stars we give conditions which indicate that the star number 
is same as the row number
*/

void Pattern_2(int n){
    // Outer Loop: 
    for (int i = 1; i <= n; i++)
    {
        //Inner Loop:
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}

//Pattern 3:
/*
    
*/




int main(){
//Creating an integer to store the input --> n

int n;

//Taking input from the user

cin >> n;

//Showing output:

Pattern_2(n);

}