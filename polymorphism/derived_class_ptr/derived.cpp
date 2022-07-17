/**
 * An empty BTree.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */
#include "derived.h"

namespace mk
{

  //When you create a derived class object, derived class constructor will be called.
  //It guessed base class constructor will be called. 
  //What's interesting was base class constructor was called earlier
  Base::Base()
  {
    a = 100;
    b = 200;

    std::cout << "Base constructor is called" << std::endl;
    std::cout << "this pointer for the derived class : " << this << std::endl;

  }

  int Base::access_private_base()
  {
      std::cout << "this pointer for the base class : " << this << std::endl;
      std::cout << "private members of Base : " << a << " " << b << std::endl;
      return 0;
  }

  Derived::Derived()
  {
    derived_a = 1000;
    derived_b = 2000;

    std::cout << "Derived constructor is called" << std::endl;
    std::cout << "this pointer for the derived class : " << this << std::endl;
    

  }

  int Derived::access_private_derived()
  {    
    std::cout << "this pointer for the derived class : " << this << std::endl;
    std::cout << "private members of Derived :" << derived_a << " "<< derived_b << std::endl;
    std :: cout << "From Derived class: Public members of Base class :" << c << " " << d << std::endl;
    std:: cout << "Derived class Public Members :" << derived_c << " " << derived_d << std::endl;
    return 0;
  }



  
}





