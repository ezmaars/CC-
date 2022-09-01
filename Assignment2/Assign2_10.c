#include <stdio.h>

//10. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
int main(){
int numberAdd =3455;
printf("\nNumber before adding zero: %d",numberAdd);
numberAdd=numberAdd*10;
printf("\nNumber after adding zero: %d",numberAdd);
    return 0;
}