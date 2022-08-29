
#include <stdio.h>

/*

6. WAP to print the name of the user in double quotes.
Expected output format – “Hello , Amit Kumar”
*/

int main(){
 char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("\"Hello, %s\"",name);

}