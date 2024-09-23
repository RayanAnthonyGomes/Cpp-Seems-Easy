 //We might have somethings or some functions that we want to group them into a same class
 //We are gonna learn exactly that

 #include<iostream>
 using namespace std;

 /*     Make sure you are outside main functions
        syntax ::: 
        
        class BucS{
        
        "All your crap goes here."
        
        };
    
    its called declaring a class.

    {{
    If we want main to use our functions outside our class 
    we simply use PUBLIC

    }}
    */
 class RayAn{
    //public is an access specifier
    public: 
        void coolS(){
            cout << "Be cool" << endl;
        }
 }; 

 int main(){
    RayAn rayansObject;
    rayansObject.coolS();
    return 0;
 }

