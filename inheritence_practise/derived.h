/**
 * BTree class outline.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#pragma once

#include <iostream>


namespace mk{
    
    class Base{
      private:
      int a , b; //Cannot be inherited.
      public:

      int c , d;

      Base(); // default constructor


      int access_private_base();
        
    };

    //This class inherits all / some properties of Base class
    //This is derived from Base class. public derivation
    //All public members of base class will become public members of derived class too.
    //Although you cannot access private members of a base class, via public function members 
    //of base class, you can see those private members.

    class Derived:public Base{
      private:
        int derived_a, derived_b;
      public:
        int derived_c, derived_d;
        Derived(); //Default constructor for derived class
        int access_private_derived();
    };

  

}

