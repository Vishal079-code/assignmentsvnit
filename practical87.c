// write the program to read information of 10 students and display the information of those who has greater tha 500 marks
#include <stdio.h>
#include<string.h>
struct Student {
    char name[50];
    int roll_no;
    int totalmarks;
};

void display(struct Student students[], int size) {
  int i;
    for (i = 0; i < size; i++) {
        if (students[i].totalmarks > 500) {
            printf("Name: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].roll_no);
            printf("Marks: %d\n\n", students[i].totalmarks);
        }
    }
}

int main() {
    struct Student students[10];
    int i;
    for ( i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Enter Name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Enter Roll No of student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        printf("Enter Marks of student %d: ", i + 1);
        scanf("%d", &students[i].totalmarks);
        getchar();
    }
    display(students, 10);
    return 0;
}

