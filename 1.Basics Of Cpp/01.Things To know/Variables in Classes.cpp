//Firstly Im gonna show u the wrong way and then i am gonna show u the proper way to use variables in our classes
//Before we get into our video I want to include the string class as one of our files cause we are gonna work with strings
//If you forgot about strings. These are basically texts
#include <iostream>
#include <string>
using namespace std;

class RyansClass{
    //Lets add our public specifier and create a name variable
    //Name is basically a string so we are using the string datatype

    public:
        string name;
};

int main(){
    //Lets create an object called RyansObject
    //Then lets get the name variable from our class and give it a proper name
    //Now the name is replaced by this
    RyansClass RyansObject;
    RyansObject.name = "Rayan Gomes";
    //Now if we print it out
    cout << RyansObject.name;
    return 0;
}
//Now as i have said that this is the wrong way
//The reason I said it because we dont want every class to be accessed publicly
//It makes our program vulnarable
//Typically we need to make all our variables private
//So we need to use the private access specifier