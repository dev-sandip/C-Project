#include <stdio.h>
#include<string.h>
void Introduction(){
    printf("\t\t---Welcome To Console Based Movie Tickteing System!-----\n");
    printf("\t\t----Developed by Sandip,Ragav,Subakhar & Sulav----\n");
}
void UserInformationInput(){
    char name[100];
    char email[100];
    int number;
    printf("Enter your name :\n");
    fgets(name,100,stdin);
    printf("Enter your email adderess:\n");
    scanf("%s", email);
    printf("Enter your mobile number:\n"); 
    scanf("%d", &number);
    printf("Your name is %s\n",name); 
    printf("Your email is %s\n",email);
    printf("Your number is %d\n",number);
}
int main()
{
Introduction();
UserInformationInput();
return 0;
}