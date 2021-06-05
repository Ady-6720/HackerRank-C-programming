#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{   
     const char car[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; 
    int num, a, b;
    scanf("%d\n%d", &a, &b);
  	if(a>=1 && b<=9){
          for (num = a; num <= b; num++) {
            printf("%s\n",car[num]);
        }}
    else if(a>=1 && b>9){
        for (num = a; num <= 9; num++) {
            printf("%s\n",car[num]);
        }}
    if(a%2==0){
        printf("even\n");
    }
    else{printf("odd");}
    
    if(b%2==0){
        printf("even");
    }
    else{printf("odd\n");}
    
    
    
    return 0;
}

