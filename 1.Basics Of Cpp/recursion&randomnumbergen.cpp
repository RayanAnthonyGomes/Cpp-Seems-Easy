#include<iostream>
#include <cstdlib>

using namespace std;


int main(){
    srand(time(0));
    int x;
    //Dices roll:
    for(int x = 1; x < 25; x++){
        cout << 1+(rand()%6) << endl;
    }    
}
//recursion
int factorial(int x);
int main0(){
    int x;
    cout << "Enter a positive integer: " << endl;
    cin >> x;
    cout << "Factorial of " << x << " = " << factorial(x);
}
int factorial(int x){
    if(x>1){
        return x * factorial(x-1);
        //x = 6;
        //1*2*3*4*5*6 =720
    }else{
        return 1;
    }
} 