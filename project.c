#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Candidates {
    int id;
    char name[50];
    int votes;
} can;

void CandidateDetailsInput(can can[], int n) {
    int i;
    FILE* fptr;
    fptr = fopen("data/candidates.txt", "a");
    if (fptr == NULL) {
        printf("Error! Some Error Occurred in File Database!\n");
        exit(1);
    } else {
        for (i = 0; i < n; i++) {
            do {
                printf("Enter the candidate id (between 1 and 100):\n");
                scanf("%d", &can[i].id);

                if (can[i].id < 1 || can[i].id > 100) {
                    printf("Invalid candidate ID. Please enter a valid ID (between 1 and 100):\n");
                }
            } while (can[i].id < 1 || can[i].id > 100);

            printf("Enter the candidate name (up to 49 characters):\n");
            scanf(" %[^\n]", can[i].name);
            
            
            fprintf(fptr, "Id:%d\tVotes:0\tName:%s\n", can[i].id, can[i].name);
        }
        fclose(fptr);
    }
}
void displayCandidates() {
    printf("ID\tVotes\tCandidate Name\n");

    FILE* fptr;
    fptr = fopen("data/candidates.txt", "r");
    if (fptr == NULL) {
        printf("Error! Could not open file\n");
        exit(1);
    }

    char line[100];
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }

    fclose(fptr);
}
void CastVote() {
    int vid, vote;
    char vname[50];

    printf("Enter your voter ID:\n");
    scanf("%d", &vid);

    printf("Enter your name (up to 49 characters):\n");
    scanf(" %[^\n]", &vname);

    printf("Enter the candidate ID you want to vote for:\n");
    scanf("%d", &vote);

    FILE* fptr;
    FILE* tmpfptr;
    FILE* voters;
    voters = fopen("data/voterslist.txt", "a");
    fptr = fopen("data/candidates.txt", "r");
    tmpfptr = fopen("data/tmpfile.txt", "w");

    if (fptr == NULL || tmpfptr == NULL || voters == NULL) {
        printf("Error! Could not open file\n");
        exit(1);
    }

    char line[100];
    while (fgets(line, sizeof(line), fptr) != NULL) {
        int id, votes;
        char name[50];

        if (sscanf(line, "Id:%d\tVotes:%d\tName:%[^\t]", &id,&votes,name)== 3) {
            if (id == vote) {
                votes++;
                fprintf(voters, "Voter ID:%d\tName:%s\n", vid, vname);
                fprintf(tmpfptr,"Id:%d\tVotes:%d\tName:%s\n", id, votes, name);
                printf("Vote cast successfully for %s.\n", name);
            } else {
                fprintf(tmpfptr, "%s", line);
            }
        } else {
            fprintf(tmpfptr, "%s", line);
        }
    }

    fclose(fptr);
    fclose(tmpfptr);
    fclose(voters);
    remove("data/candidates.txt");
    rename("data/tmpfile.txt", "data/candidates.txt");
}



void DisplayResults() {
    printf("Displaying results is not implemented yet.\n");
}


void Introduction(){
    printf("\t\t---Welcome To Console Voting System System!-----\n");
    printf("\t\t----Developed by Sandip,Raghav,Subakhar & Sulav----\n");
}

int main()
{
    int n,choice;
    can candidates[n];
    Introduction();
    while (1) {
        printf("\nMenu:\n");
        printf("1. Enter Candidate Details\n");
        printf("2. Display Candidates Details\n");
        printf("3. Caste a vote!\n");
        printf("4. Display Results\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("How many candidates do you want to enter?\n");
                scanf("%d", &n);
                CandidateDetailsInput(candidates, n);
                break;
            case 2:
              displayCandidates();
                break;
            case 3:
                CastVote();
                break;
            case 4:
                DisplayResults();
                break;
             case 5:
                printf("Exiting the Voting System. Thank you!\n");
                return 0;    
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}