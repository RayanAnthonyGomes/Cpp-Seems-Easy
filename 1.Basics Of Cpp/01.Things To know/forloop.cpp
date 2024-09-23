//For Loop
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //10,000 on a bank
    //1% interest each day
    //30 days
    
    float a;
    float p = 10000;//principal::10,000 on a bank
    float r = 0.01;
    

    for(int day = 1; day <=30; day++){
        a = p * pow(1+r, day);
        cout << day << "-------------------" << a  << endl;
    }
    
}