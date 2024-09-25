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

//Pattern 9:
/*
Pattern - 9: Diamond Star Pattern
Input Format: N = 6
Result:   
     *
    ***
   ***** 
  *******
 *********
***********  
***********
 *********
  *******
   ***** 
    ***    
     *
This is combination of pattern 7 and 8

*/
void pattern_9(int n){
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

//Pattern 10:
/*
Pattern - 10: Half Diamond Star Pattern
Input Format: N = 6
Result:   
     *
     **
     *** 
     ****
     *****
     ******  
     *****
     ****
     ***    
     **
     *
     Its a symmetrical pattern and its symmetry breaks if row exceeds the N 
    for the outer loop: we can say the formula is 2n - 1
    for the inner loops: 
    we can say int stars = i
                if (i>n) stars = 2n - i;
                for j = 0; j <=stars; j++
                    cout << "*"

*/
void pattern_10(int n){
    for (int i = 1; i <= 2*n - 1; i++)
    {
        int stars = i;
        if(i>n){
            stars = 2*n-i;
        }
        for (int j = 1; j <=stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

//Pattern 11
/*
Input Format: N = 6
Result:   
1
01
101
0101
10101
010101

For the outer loop, it definitely runs for N times

I can say that for all the even rows, It starts from 1;

So, I am gonna create an integer named start = 1;
and if row number i is divisible by two and its remainder is 0 we can put the value of start to 1 or else we set the start value to 0;
but since its 1, then 01, then 101 we have to flip the value of start. We are using start = 1 - start;

*/
void pattern_11(int n){
    int start = 1;
    for (int i = 0; i <n; i++)
    {
        if(i%2==0){ start = 1;} else { start = 0;
        }
        for (int  j  = 0; j  <= i; j ++)
        {
            cout << start;
            start = 1 -start;
        }
        cout << endl;
    }
    
}

///Pattern 12:
/*
Pattern - 12: Number Crown Pattern
Input Format: N = 4
Result:   
1          1
12        21
12       321
1234    4321



Solution:
So, in this particular problem, we have numbers spaces and numbers. 

We can say that I will be running the outer looop for 4 times.
for the first row we have 1 6 1, then 2 4 2 then 3 2 3 then 4 0 4 {numbers, spaces, numbers}

//Outer Loop: It runs for N times; 
//Inner Loop: 
            //Numbers:
            for (int j =1; j<=i;J++){
            cout j
            }
            //Space:
            We can say that it always reduce by two
            Formula: 2 * (n -1)
            Space = 2* (n-1) start integer

            /numbers 
            for(int j = i; j>=1; j--){ cout " "};

            }} cout << endl; and lastly decrement spaces; space -=2;
*/
void pattern_12(int n){
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        //Numbers:
        for (int j = 1; j <= i; j++)
        {
            cout << j;

        }
        //Spaces:
        for (int j = 1; j <=space; j++)
        {
           cout << " ";
        }
        //Numbers Decremental Order
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -=2;

        
    }
    
}

//Pattern 13:
/*
Pattern 13: Increasing number triangle pattern
Input Format: N = 6
Result:   
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
16  17  18  19  20  21

For this particular problem;
We have N rows. SO outer loop will be i<=n;
Also the outer loop will run for the i ammount (row ammount)

For the increasing numbers: We can say numbers start from 1 and then on every step it increases by 1;

int numb = 1;
then on the inner loop we can say; num +=1;


*/

void pattern_13(int n){
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << num << " ";
            num +=1;

        }
        cout << endl;
    }
    
}
//Pattern 14:
/*
Pattern 14: 
Input Format: N =5
Result:   
A
A B
A B C
A B C D
A B C D E

We can say its a right angle triangle and 
//Outer Loop runs for N times
//Inner loop we are printing characters instead of numbers

on the inner loop its type is char and it starts form a and its condiditon will be it runs for <= A + i
then we just print the values of the j

*/

void pattern_14(int n){
    
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j;
            
        }
        cout << endl;
        

    }
    
    
}
//Pattern 15: 
/*
Pattern 15: reverse character triangle pattern
Input Format: N = 6
Result:   
A B C D E F
A B C D E 
A B C D
A B C
A B
A

We can say its just the opposide version of the previous problem

This time its the same row number
hence the outer loop runs for n times

for the inner loop:
A (B C D E) A + 4   Formula stands like: A + (5 - 0 - 1)
A (B C D)   A + 3                           'A' + (n - i - 1)
A (B C)     A +2
A (B)       A +1    
A           A + 0


*/


void pattern_15(int n){
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + (n-i-1);j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}

//Pattern 16:
/*
Alpha Ramp Pattern
Input Format: N = 6
Result:   
A 
B B
C C C
D D D D
E E E E E
F F F F F F

I discovered it by mistake so i am gonna try to explain what i did
I had to check it if it worked first.

So for this particular solution:
I assigned a char to 'A' Then i wrote a simple right angle triangle loop and printed out characters. 
On the outer loop I created new line each time after executing and then i incremented the character value by 1

*/
void pattern_16(int n){
    char characters = 'A';
    for (int i = 0; i < n; i++)
    {
        for (char j = 0; j <= i; j++)
        {
            cout << characters;
        }
        cout << endl;
        characters++;
    }
}
//Pattern 17:
/*
Pattern 17: Alpha hill pattern

Input Format: N = 6
Result:   
     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA 
ABCDEFEDCBA

// This is like a pattern we did before and we can steal the spaces from the previous too. the space formula was n - i - 1
    We can also steal the row number and anyways its the same as N
    We can steal the numbers formula = 2*i + 1
    Lastly if we observe symmetry it breaks at half


//For this particular problem, we needed to observe symmetry and we can say that its breaking at half.
    Before we do any of the advanced things we need to set a char which starts from A
    for that we can create a breakpoint which is basically the "CHARACTERS"/2. and if inner loop "J" is lesser or equal to breakpoint we do character++
    and it its not we do character--

*/

void pattern_17(int n){
    for (int i = 0; i < n; i++)
    {
        //Spaces
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        //Characters
        char ch = 'A';
        int breakpoint = (2*i + 1)/2;
        
        for (int j = 1;j<=2 * i + 1; j++)
        {
           
            cout << ch;
             if (j<=breakpoint){ch++;} else {ch--;}

        }
        

        //Spaces
        for (int j = 1; j <= n - i - 1; j++)
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

pattern_12(n);

}