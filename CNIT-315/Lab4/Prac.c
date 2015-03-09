/* Name:Shivaadas Annamalai Silvadas
*** This program finds the number of vowels in a string or sentence.
*/ 

#include<stdio.h>

int main(){
    char str[200];
    int i;
    int v=0;
    
    printf("Enter the string you wish:\n");
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';++i)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' 
        || str[i]=='I' || str[i]=='O' || str[i]=='U')
            ++v;
         }
    printf("The number of vowels found: %d\n",v);
    return 0;
}
