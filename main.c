#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>//imported cause we have to generate unique id for each user and used in UserId fucntion below!
void Introduction(){
    printf("\t\t---Welcome To Console Based Movie Tickteing System!-----\n");
    printf("\t\t----Developed by Sandip,Raghav,Subakhar & Sulav----\n");
}

int UserId() {
    time_t currentTime = time(NULL);
    int randomNum = rand();
    long int uniqueID = currentTime+randomNum;
    return uniqueID;
}

void UserInformationInput(){
    char name[100];
    char email[100];
    int phonenumber;
    int id = UserId();

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
    printf(" Your UserId  is :%d\t",id);

    FILE *fptr;
    fptr = fopen("data/users.txt", "a"); // file is opened in append mode cause we dont have to remove the existing user data in the file
    if(fptr == NULL){
    printf("Error! Could not open file\n");
    exit(1);
    }else{
    fprintf(fptr," UserId :%d\t",id);
    fprintf(fptr," Name :%s\t",name);
    fprintf(fptr," Email :%s\t",email);
    fprintf(fptr,"Mobile Number:%ld\n",phonenumber);
}
    fclose(fptr);}
// void MoviesList(){
//     int Id;
//     char MovieName[100];
//     int Time;
//     FILE *fptr;
//     fptr = fopen("data/MoviesList.txt","r");
//     if(fptr == NULL){
//     printf("Error! Could not open file\n");
//     exit(1);}
    
//     else{
//         fscanf(fptr,"%d",&Id);
//         printf(fptr,"%d",Id);
//     }
//     fclose(fptr);
// }

int main()
{
    Introduction();
    UserInformationInput();
    return 0;
}