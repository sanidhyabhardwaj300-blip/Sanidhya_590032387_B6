//Block Scope and Shadowing
#include <stdio.h>
int x= 25;
void function() {
    int x = 10;
    printf("function block: x = %d\n", x);
   

}
int main() {
    printf("Global x = %d\n", x);
    function();
    return 0;
}