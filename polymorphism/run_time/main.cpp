#include <iostream>
#include "derived.h"

int main(){

    int a;

    mk::Base base_obj;
    mk::Derived1 derived1_obj;
    mk:: Derived2 derived2_obj;

    mk::Base *base_ptr;

    std::cin >> a;

    if (a == 1) {
        base_ptr = &derived1_obj;
    }
    else if (a == 2){
        base_ptr = &derived2_obj;
    }
    else {
        base_ptr = &base_obj;
    }


    /* Is there any ambiguity in which function will be being called? */
    /* In base class, the function show_private will be called*/
    base_ptr->show_private();

    /* Consider the same scenario but in base class the function is declared virtual */



    return 0;




    

    

    return 0;
}