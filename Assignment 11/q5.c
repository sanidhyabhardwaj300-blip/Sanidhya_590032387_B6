//Write a C program using a static variable to generate a unique identification number every time a function is called.
#include <stdio.h>
void generateUniqueID()
{
    static int id = 0;
    id++; 
    printf("Unique ID: %d\n", id);
}
int main() {
    printf("Generating unique IDs:\n");
    generateUniqueID();
    generateUniqueID();
    generateUniqueID();
    generateUniqueID();
    generateUniqueID();
    return 0;
}