#include <iostream>
#include <string>

using namespace std;


class RyansClass{
    public:
        RyansClass(string z){
            setName(z);
        }
        void setName(string x){
            MyName = x;
        }
        string getName(){
            return MyName;
        }
    private:
     string MyName;
        
};

int main(){
    RyansClass RyansObject("Lucky Rayan");
    cout << RyansObject.getName();
    
    RyansClass RyansObject2("Unlucky Rayan");
    cout << RyansObject2.getName();
    
    return 0;
}