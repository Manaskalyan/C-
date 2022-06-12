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

  return 0;
}