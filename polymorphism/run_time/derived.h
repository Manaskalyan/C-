#pragma once

#include <iostream>


namespace mk{

    class Base{
        private:
            int base_a_, base_b_;
        public:
            virtual void show_private();
            void set_private(int a, int b);
            Base();
    };

    class Derived1 : public Base{
        private:
            int derived1_a_, derived1_b_;
        public:
            void show_private();
            void set_private(int a, int b);
            Derived1();
    };

    class Derived2 : public Base{
        private:
            int derived2_a_, derived2_b_;
        public:
            void show_private();
            void set_private(int a, int b);
            Derived2();

    };
}
