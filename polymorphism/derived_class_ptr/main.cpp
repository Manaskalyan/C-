/**
 * An empty BinaryTree.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include  "derived.h"

int main() {


 mk::Derived derived_obj;

 derived_obj.c = 5;
 derived_obj.d = 6;

 derived_obj.derived_c = 10;
 derived_obj.derived_d = 15;

 derived_obj.access_private_base();
 derived_obj.access_private_derived();

 //mk::Derived* derived_ptr;

 /* Pointer for the base class */
 mk::Base* base_ptr; 

 /* base pointer was assigned address of derived class object */
 /* Usually this is treated as pointer incompatable types */
 /* Howver this is fine in C++*/
 /*We can access the base class members that were inherited by derived class using base class pointer*/
 base_ptr = &derived_obj;

 std::cout << "Address of base_ptr : " << base_ptr << std::endl;

 std::cout << "Accessing via base class pointer : " << base_ptr->c << std::endl;
 base_ptr->access_private_base();

 


  return 0;
}