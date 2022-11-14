// Assignment - 18 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// String and Functions in C Language
// 9. Write a function to reverse a string word wise. (For example if the given string is
// “Mysirg Education Services” then the resulting string should be “Services Education
// Mysirg” )

#include <stdio.h>
void swap(char a[], int i, int j);
int main()
{
    char a[20] = "My name is Asif ";
    swap(a, 0, 15);
    int i = 0, start = 0, end = 0, flag = 0;
    while (a[i] != '\0')
    {
        while (a[i] != ' ')
        {
            if (a[i] == '\0')
            {
                flag = 1;
                break;
            }
            end++;
            i++;
        }

        swap(a, start, end - 1);
    
        if (flag == 1)
        {
            break;
        }
        start = end++;
        i++;
        }
        
        printf("%s", a);
    
        return 0;
}
void swap(char a[], int i, int j)
{
    char temp;
    while (i <= j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
