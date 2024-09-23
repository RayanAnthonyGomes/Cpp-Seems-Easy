#include<iostream>
using namespace std;

class RayN{
    public:
        void cools(){
            cout << "Standard Input Output System";
        }
};

int main(){
    RayN rayansobject;
    rayansobject.cools();
    return 0;
}

/*      Suppose we have many things we want to group. Then comes "Classes" where we can group certain functions.
        Using objects we can call them.

        We can make objects and do cool stuff just like we did above.
*/

                        // Used public so our main function could use it outside its class.
    /*  SYNTAX:    (MAKING CLASS) => Should be on top of int main()
                               
                                class Name{
                                public:
                                void Name2(){
                                cout << "Absolute CRAP"}
                              };

                (Making OBJECT) => Should be inside main function

                                Name namesObject;
                                namesObject.Name2();
                                return 0;
    */