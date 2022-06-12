
#include "derived.h"

namespace mk {

    /* custom default constructor */
    Base1:: Base1()
    {
        std::cout << "Base1 constructor called" << std::endl;
    }

    void Base1::get_private()
    {
        std::cout << "private var of base1 : " << b1_a_ << std::endl;
    }

    void Base1::set_private(int x)
    {
        b1_a_ = x;

    }

    /* custom default constructor */
    Base2:: Base2()
    {
        std::cout << "Base2 constructor called" << std::endl;
    }

    void Base2::get_private()
    {
        std::cout << "private var of base2 : " << b2_a_ << std::endl;
    }

    void Base2::set_private(int x)
    {
        b2_a_ = x;        
    }

    /* custom default constructor */
    Derived:: Derived()
    {
        std::cout << "Derived constructor called" << std::endl;
    }

    void Derived::get_private()
    {
        std::cout << "private var of derived : " << derived_a_ << std::endl;
    }

    void Derived::set_private(int x)
    {
        derived_a_ = x;        
    }
}