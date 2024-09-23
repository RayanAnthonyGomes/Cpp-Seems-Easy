#include <iostream>
#include <string>

using namespace std;


class RyansClass{
    public:
        //setName
        //getName
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
    RyansClass RyansObject;
    RyansObject.setName("Rayan Gomes");
    cout << RyansObject.getName();
   
    
    return 0;
}