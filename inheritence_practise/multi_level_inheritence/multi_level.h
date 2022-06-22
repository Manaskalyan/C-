/*
 * Author : Manas
 * 
 * Let's say I have a base class B1. I extend / derive class I out of B1.
 * I further extend I to multi level derived class
 */

#pragma once

namespace mk {

    class B1 {
        private:

            int b1_;   /* Cannot be inherited */

        public:

            int b1;

            B1();     /* Custom default constructor class B1 */

            int get_private_b1();
    };

    class B2 {
        private:       /* Cannot be inherited */
            int b2_; 

        public:
            int b2;

            B2();    /* Custom default constructor for class B2 */
    };

    /* Class derived out of B1
     * As it is public inheritance / derivation
     * All public members of B1 becomes public members of this class too
     * 
     */
    class Single_Derived : public B1{
        private:
            int sd_;
        public:
            int sd;
            int b1;

            Single_Derived(); 

    };

    /*This guy is a derivate of two classes. Example of both multi level and multiple inheritance*/
    /*
     * Qn : When you create an object for this class, will it create objects for B1 as well?
     *      See if the constructor of B1 is called or not?
     * Ambiguity resolution: Let's if the base class and intermediate classes have same function member
     */
    class Multi_Level_Derived : public Single_Derived, public B2 {
        private:
            int md_;
        public:
            int md;
            int b1;

            Multi_Level_Derived(); /* Custom default constructor for Multi_Level_Derived*/
    };

}