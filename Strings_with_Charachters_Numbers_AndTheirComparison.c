#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

int main() {

    char num[1000];
    scanf("%s", num);
    int i, len= strlen(num),j, freq[100];
    char compare[]={ '0','1','2','3','4','5','6','7','8','9'};
   // printf("%d\n", compare[2]);
    for(i=0;i<10;++i)
    {
        freq[i]=0;
    }
    for(i=0;num[i]!='\0';++i)
    { 
        
        if(isdigit(num[i])!=0)
            {
               for(j=0;j<10;++j)
                { 
                    if(num[i]==compare[j])
                      {
                      freq[j]++;
                       break;
                      }
                }       
           }
    }
   for(i=0;i<10;++i)
    {
        printf("%d ", freq[i]);
    }   
    
    return 0;
}
