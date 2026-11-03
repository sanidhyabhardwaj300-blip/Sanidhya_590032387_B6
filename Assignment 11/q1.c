//Automaticc local variable using Scope and Storage Class
#include <stdio.h>
void function() {
    auto int x = 10;
    printf("Outside inner block: x = %d\n", x);
    {
        auto int x = 20; // This x is local to this block
        printf("Inside inner block: x = %d\n", x);
    }
    printf("Outside inner block after inner block: x = %d\n", x);
}
int main() {
    function();
    return 0;
}