#include "derived.h"
using namespace std;

namespace mk{
    void Base::show_private(){
        cout << base_a_ << base_b_ <<endl;       

    }

    void Base::set_private(int a, int b) {
        base_a_ = a;
        base_b_ = b;
    }

    void Derived1::show_private(){
        cout << derived1_a_ << derived1_b_ <<endl;     

    }

    void Derived1::set_private(int a, int b) {
        derived1_a_ = a;
        derived1_b_ = b;
    }

    void Derived2::show_private(){
        cout << derived2_a_ << derived2_b_ <<endl;     

    }

    void Derived2::set_private(int a, int b) {
        derived2_a_ = a;
        derived2_b_ = b;
    }

    Derived2::Derived2(){
        derived2_a_ = 1000;
        derived2_b_ = 2000;
    }

    Derived1::Derived1(){
        derived1_a_ = 100;
        derived1_b_ = 200;
    }

    Base::Base(){
        base_a_= 10;
        base_b_ = 20;
    }






}