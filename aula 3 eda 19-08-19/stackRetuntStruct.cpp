/*
	Return a `struct` from a function in C
	url: https://stackoverflow.com/questions/9653072/return-a-struct-from-a-function-in-c

*/
#include <stdio.h>

struct MyObj{
    double x, y;
};

struct MyObj foo(){
    struct MyObj a;

    a.x = 10;
    a.y = 10;

    return a;
}        

int main () {

    struct MyObj a;

    a = foo();    // This DOES work
    struct MyObj b = a; // This does not work

    return 0;
}  
