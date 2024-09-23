#include <iostream>
using namespace std;
void printNumber(int x){
    cout << "This Is the value of your integer: " << x << "\n";
}
void printNumber(float x){
    cout << "This Is the value of your float " << x << "\n";
}




int main(){

//Function overloading
int a = 95;
float b = 231.2131;

printNumber(a);
printNumber(b);



}