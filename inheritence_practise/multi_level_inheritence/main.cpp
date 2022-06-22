#include "multi_level.h"
#include <iostream>
using namespace std;

int main(){

    mk::Multi_Level_Derived multi_level_obj;

    /* Are these very poor way of using inheritence Manas? */
    /* From inherited class object, you are telling which base class does this variable belong to ? */
    /* This is not data hiding right ? */

    std::cout << "multi level obj value : " << multi_level_obj.b1 <<std::endl;
    cout<< "The above should be 600" << endl;

    cout << "b1 inherited from single Derivation" << multi_level_obj.Single_Derived::b1 << endl;
    cout<< "The above should be 50" << endl;

    cout << "b1 inherited from BAse class " << multi_level_obj.B1::b1 << endl;
    cout<< "The above should be 40" << endl;



    

    

    return 0;
}