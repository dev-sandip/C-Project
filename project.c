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
        printf("Error! Could not open file\n");
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
            
            // Write candidate details to the file
            fprintf(fptr, "Id: %d\tName: %s\n", can[i].id, can[i].name);
        }
        fclose(fptr);
    }
}
void displayCandidates() {
    printf("ID\tCandidate Name\n");

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



void Introduction(){
    printf("\t\t---Welcome To Console Voting System System!-----\n");
    printf("\t\t----Developed by Sandip,Raghav,Subakhar & Sulav----\n");
}

int main()
{
    int n;
    printf("How many candidates do you want to enter?\n");
    scanf("%d", &n);
    can candidates[n];
    CandidateDetailsInput(candidates, n);
    displayCandidates();
    return 0;
}