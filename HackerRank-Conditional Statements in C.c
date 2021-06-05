#include <stdio.h> 
 
int main() { 
    const char car[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; 
    int i;
    scanf("%d",&i); 
    {

        if(i>=1&&i<=9){
           printf("%s",car[i]);  
        }
        else if(i>9){
            printf("Greater than 9");}
        
    }
    return 0; 
} 
