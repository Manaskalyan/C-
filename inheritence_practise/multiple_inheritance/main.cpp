#include  "derived.h"

int main() {


 mk::Derived derived_obj;

 /* This will call functions in derived class only */
 derived_obj.set_private(5);
 derived_obj.get_private();

 /* Ambiguty resoultion using scope resolution operator */
 /*
  * My Concern : Should I go through the base class scope operator to call which function
  *              Even if there is no ambiguty, it is important to know which all base class
  *              functions derived class inherited.
  *              So using a base class scope operator to resolve ambiguity may be not a bad idea
  *              as it sound.               
  */
 derived_obj.Base1::set_private(100);
 derived_obj.Base1::get_private();

 /*
  *  When I call a function member in base class via derived class obj
  *  What does this pointer points to. Will this point to derived object or the base class object?
  */
 derived_obj.Base2::set_private(500);
 derived_obj.Base2::get_private();

  return 0;
}