 /*
 * Trying to get a hang of multiple inheritence
 *
 *
 */

#pragma once

#include <iostream>

namespace mk {

    class Base1 {
        private: // cannot be inherited
            int b1_a_;

        public:

            Base1(); //custom default constructor

            void get_private(); 
            void set_private(int);
    };

    class Base2 {
        private: // cannot be inherited
            int b2_a_;

        public:
            Base2(); //custom default constructor
            void get_private();
            void set_private(int);

    };

    /* Can I inherit one base class in public mode and one class in private mode */

    /* When you create a derived object, Base objets will be created (for sure constructors are called) 
     * However these Base objects are not visible. 
     * Private members of Base classes can be accessed via Public member functions of base classes, which
     * are inherited by derived class
     */

    /*
     * Here in both base classes that derived class is extending has same public member functions as 
     * in derived class. If I create a derived class object and call .get_private() func or
     * which func will be called?
     *
     *
     */
    class Derived : public Base1, public Base2 {
        private:
            int derived_a_;

        public:
            Derived(); //custom default constructor
            void get_private();
            void set_private(int); /* How does compiler resolve this ambiguity? */

    };
}