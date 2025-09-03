// Author : Avijit Roy

#include <iostream>
using namespace std;

int main() {
    // Two normal integer variables
    int a = 10;
    int b = 20;

    // -----------------------------
    // Pointers Basics:
    // &  -> "address of" operator (where a variable lives in memory)
    // *  -> "dereference" operator (go to the address and get/change the value)
    // ** -> "pointer to a pointer" (an address that stores another pointer)
    // -----------------------------

    // Two pointers to integers
    int *p1 = &a;   // p1 stores the address of 'a'
    int *p2 = &b;   // p2 stores the address of 'b'

    cout << "=== Initial Values and Addresses ===" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Address of a (&a): " << &a << endl; // using & to print address
    cout << "Value stored in p1 (address of a): " << p1 << endl; // p1 = &a
    cout << "Value at address p1 points to (*p1): " << *p1 << endl; // *p1 = a
    cout << endl;

    cout << "Value of b: " << b << endl;
    cout << "Address of b (&b): " << &b << endl;
    cout << "Value stored in p2 (address of b): " << p2 << endl; // p2 = &b
    cout << "Value at address p2 points to (*p2): " << *p2 << endl; // *p2 = b
    cout << endl;

    // Changing values using pointers
    *p1 = 100;   // go to address in p1 and put 100 there -> changes 'a'
    *p2 = 200;   // go to address in p2 and put 200 there -> changes 'b'

    cout << "=== After Changing via Pointers ===" << endl;
    cout << "New value of a: " << a << " (changed through *p1)" << endl;
    cout << "New value of b: " << b << " (changed through *p2)" << endl;
    cout << endl;

    // Swapping pointers (p1 and p2 now point to opposite variables)
    p1 = &b;  // p1 now stores the address of b
    p2 = &a;  // p2 now stores the address of a

    cout << "=== After Swapping Pointers ===" << endl;
    cout << "p1 now points to address of b: " << p1 
         << " value: " << *p1 << endl; // *p1 = b
    cout << "p2 now points to address of a: " << p2 
         << " value: " << *p2 << endl; // *p2 = a

    // Bonus: pointer to a pointer (just to illustrate **)
    int **pp = &p1; // pp stores the address of pointer p1
    cout << "\n=== Pointer to a Pointer Example ===" << endl;
    cout << "Address of p1 (&p1): " << &p1 << endl;
    cout << "Value stored in pp (address of p1): " << pp << endl;
    cout << "Value at address pp points to (*pp): " << *pp << endl;   // prints p1
    cout << "Double dereference (**pp): " << **pp << endl;            // prints value of b (because p1 points to b)

    return 0;
}
