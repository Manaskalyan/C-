

Let's say derived class and base class have same function even the prototypes are same.

derived_obj.func_name() --> Which function will be called? Is it base class function or derived class func?

static Binding : At the compile time itself, You know which function will be called

derived_obj.Base::func_name() --> compiler know the function to be called is base class function.


Dynamic Binding : Binding happens at run time

Instead of resolving this ambiguity at compile time using class resolution operator, this is resolved at run time.


pointer to a derived class object : I have a derived class object and a pointer to a derived class object.

You can access all the members of derived class object with this pointer.

Now I have a base calss pointer. I can assign a derived object address to base class pointer.
However you can access only the base class portion of it. or the base class members that were inherited by derived class

This solidifies my understanding. When a derived object is created, even the base class objects are created. 
This base class pointer when assigned to derived class object address, you are actually pointing to base class objet created as part of derived class object creation (Assumption only no)