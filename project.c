#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void Introduction(){
    printf("\t\t---Welcome To Console Voting System System!-----\n");
    printf("\t\t----Developed by Sandip,Raghav,Subakhar & Sulav----\n");
}



void UserInformationInput(){
    char name[100];
    char email[100];
    int phonenumber=0;
    printf("Enter your name :\n");
    // fgets( name,100,stdin);
    scanf("%[^\n]", name);
    printf("Enter your email adderess:\n");
    scanf("%s", email);
    printf("Enter your mobile number:\n"); 
    scanf("%ld", &phonenumber);
    printf("Your name is %s\n",name); 
    printf("Your email is %s\n",email);
    printf("Your number is %ld\n",phonenumber);

    FILE *fptr;
    fptr = fopen("data/users.txt", "a"); // file is opened in append mode cause we dont have to remove the existing user data in the file
    if(fptr == NULL){
    printf("Error! Could not open file\n");
    exit(1);
    }else{
    fprintf(fptr," Name :%s\t",name);
    fprintf(fptr," Email :%s\t",email);
    fprintf(fptr,"Mobile Number:%ld\n",phonenumber);
}
    fclose(fptr);}

int main()
{
    Introduction();
    UserInformationInput();
    return 0;
}