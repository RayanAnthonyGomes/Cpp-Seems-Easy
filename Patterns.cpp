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
    Pattern - 3: Right-Angled Number Pyramid
Example:

Input Format: N = 6
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6

Solution: For this particular problem, we have N rows. so i <=n
          After that for the columns we are just printing the value of j which is basically the column number after incrementing
          Hence, its really simple.
*/

void Pattern_3(int n){
    //Outer Loop:
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}

//Pattern 4:
/*
Input Format: N = 3
Result: 
1
2 2 
3 3 3

Input Format: N = 6
Result:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6

This problem its just printing the i value? I guess so. Cuz When i = 1; its printing 1;
next line when i = 2; its printing 2 2
so we can probably say that j <= i and print the value of i each time

*/
void Pattern_4(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
}

//Pattern 5:
/*
Pattern-5: Inverted Right Pyramid
Input Format: N = 6
Result:
* * * * * *
* * * * * 
* * * * 
* * * 
* * 
* 

In this particular pattern, 
We can say outer loops = n
for the inner loops it prints stars. which are exact opposite of the total N
SO we can say, that it prints stars like this: N - i; 
Because N = 5; then for the first row i = 0; then 5-0 = 5; also same for the next ones
*/
void Pattern_5(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}
int main(){
//Creating an integer to store the input --> n

int n;

//Taking input from the user

cin >> n;

//Showing output:

Pattern_5(n);

}