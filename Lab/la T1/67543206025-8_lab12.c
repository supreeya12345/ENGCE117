#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub[5];
} typedef S;

S STD[3];


void inputInfo() {//รับค่าของข้อมูลทั้ง3คน
    for(int i = 0; i < 3; i++) {
        printf("Enter the details of Student %d:\n", i + 1);
        printf("Name: ");

        fgets(STD[i].Name, 20, stdin);
        STD[i].Name[strcspn(STD[i].Name, "\n")] = 0; 
        
        printf("ID: ");
        scanf("%s", STD[i].ID);

        for(int k = 0; k < 5; k++) {
            printf("Scores in Subject %d: ", k + 1);
            scanf("%f", &STD[i].ScoreSub[k]);
        }
        getchar(); 
    }
    printf("\n");
}

void Grade() {//รับค่าของเกรด
    for(int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", STD[i].Name);
        printf("ID: %s\n", STD[i].ID);
        printf("Scores:");

        for(int k = 0; k < 5; k++) {
            printf(" %.0f", STD[i].ScoreSub[k]); 
        }
        printf("\n");
        
        printf("Grades:");
        for(int k = 0; k < 5; k++) {
            if(STD[i].ScoreSub[k] >= 80) {
                printf(" %s", "A");
            } else if(STD[i].ScoreSub[k] >= 75 && STD[i].ScoreSub[k] < 80) {
                printf(" %s", "B+");
            } else if(STD[i].ScoreSub[k] >= 70 && STD[i].ScoreSub[k] < 75) {
                printf(" %s", "B");
            } else if(STD[i].ScoreSub[k] >= 65 && STD[i].ScoreSub[k] < 70) {
                printf(" %s", "C+");
            } else if(STD[i].ScoreSub[k] >= 60 && STD[i].ScoreSub[k] < 65) {
                printf(" %s", "C");
            } else if(STD[i].ScoreSub[k] >= 55 && STD[i].ScoreSub[k] < 60) {
                printf(" %s", "D+");
            } else if(STD[i].ScoreSub[k] >= 50 && STD[i].ScoreSub[k] < 55) {
                printf(" %s", "D");
            } else {
                printf(" %s", "F");
            }
        }

        float Average = 0;
        for(int k = 0; k < 5; k++) {
            Average += STD[i].ScoreSub[k];
        }
        printf("\n");
        printf("Average Scores: %.1f\n\n", Average / 5);
    }
}

int main() {
    inputInfo(); // รับข้อมูล
    Grade(); // แสดงข้อมูลและเกรด
    return 0;
}