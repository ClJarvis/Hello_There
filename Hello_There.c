#include<stdio.h>
// Function
void printMessage(char msg[]){
    printf("%s",msg);
}
int main(){
    // Method 1
    printf("Hello There...");

    // Method 2
    printMessage("Hello There...");

    return 0;
}