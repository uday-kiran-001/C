#include<stdio.h>
#include<string.h>
char temp[10000];
int lexicographic_sort(char* a, char* b) {
   
            if( strcmp(a,b)>0 )
            {
               strcpy(temp,a);
               strcpy(a,b);
               strcpy(b, temp);
            }
       
}
int main()
{
    char a[]="belooad", b[]="belloo";
    lexicographic_sort(a,b);
    printf("%s   %s  ", a, b);

    return 0;
}                 