/*
    O que está errado com cada uma das seguintes
    instruções em C?

    x=x+y
    x+y=5;
    if x>y x=5;
    if (x>y) { x=5 }
    if (x>y) x=5 else x=6;
 */
#include<stdio.h>

int main() {
    // 'x' undeclared (first use in this function)
    // 'y' undeclared (first use in this function)
    int x, y;

    x=x+y;                  // expected ';' before 'x'|
    x=5;                    // lvalue required as left operand of assignment|
    if (x>y) x=5;           // expected '(' before 'x'|
    if (x>y) { x=5; }       // expected ';' before '}' token|
    if (x>y) x=5; else x=6; // expected ';' before 'else'|

    getchar();
    return 0;
}
