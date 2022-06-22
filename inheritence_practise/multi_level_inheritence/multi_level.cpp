#include "multi_level.h"

#include <iostream>

namespace mk{

    B1 :: B1() {
        b1_ = 100;
        b1 = 10;

    }

    int B1:: get_private_b1() {

        std::cout << "private b1_" << b1_ << "public b1 : " << b1 << std::endl; 
        return 0;

    }

    B2 :: B2() {

        b2_ = 1000;
        b2 = 200;

    }

    Single_Derived :: Single_Derived() {

        /*Can I access b1 from here ? */

        /*overwirting b1 in this class */
        B1::b1 = 20;
        b1 = 30;
        
        std::cout << "B1:: b1_" << B1::b1 << " this class b1 : " << b1 << std::endl;
        std::cout << "Above line values should be 20  and 30" << std::endl;


    }

    Multi_Level_Derived :: Multi_Level_Derived () {

        B1 :: b1 = 40;
        Single_Derived :: b1 = 50;
        b1 = 600;

        std::cout << B1::b1 << Single_Derived :: b1 << b1 << std::endl;
        std::cout << "Above line values should be 40 50 and 600" << std::endl;




    }


}