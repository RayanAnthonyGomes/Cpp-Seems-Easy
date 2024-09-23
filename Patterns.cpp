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

//Pattern 6:
/*
Pattern - 6: Inverted Numbered Right Pyramid
Input Format: N = 6
Result:
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

In this problem we can say its exact same of the previous pattern.
Instead of stars we are printing numbers 
more specifically the i value

*/
void Pattern_6(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}

//Pattern 7:
/*
Pattern - 7: Star Pyramid
Input Format: N = 3
Result: 
  *  
 *** 
*****   
Input Format: N = 6
Result:
     *     
    ***    
   *****   
  *******  
 ********* 
***********
for this problem:
We have outer loop runs for N times
Inner loop has 3 more loops. 2 for spaces and 1 for stars
now we see that the number of spaces decrease from 4 3 2 1 0
        for that we can have a formula like n - i - 1
now we see that the stars are increasing by 2 , starting from 1
        for that we can have a formula like 2i + 1

*/
void Pattern_7(int n){
    for (int i = 0; i <= n; i++)
    {
        //Spaces
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        //Stars
        for (int j = 0; j < (2*i + 1); j++)
        {
            cout << "*";
        }
        //Spaces
        for (int j = 0; j <=n - i -1; j++)
        {
            cout << " ";
        }
        cout << endl;
        
    }
    
}

//Pattern 8:
/*
Pattern - 8: Inverted Star Pyramid
Input Format: N = 6
Result:     
***********
 *********
  *******
   ***** 
    ***    
     *

In this problem we have the exact same thing but reversed.
We have n = 5 which is basically saying outer loop runs for n times
For the inner loop. Again we have spaces stars and spaces

Spaces: its really easy. Its equavalent to the number of rows. i = 0 = space = 0
        so space = i
Stars: Previous one started with 1 star and icremented by 2
        this one started with 9 and kept decrementing by 2
        so we can 2n -(2*i + 1)
*/
void Pattern_8(int n){
    for (int i = 0; i < n; i++)
    {
        //spaces:
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2*n - (2*i + 1); j++)
        {
            cout << "*";
        }
        
        //spaces:
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
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

Pattern_8(n);

}