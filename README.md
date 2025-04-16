# filehandling
basicfilehandling
Input student information and save it to file
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s;
    FILE *fptr;


    fptr = fopen("student.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    fprintf(fptr, "Name: %s", s.name);
    fprintf(fptr, "Roll No: %d\n", s.rollNo);
    fprintf(fptr, "Marks: %.2f\n\n", s.marks);

    printf("Student information saved to file.\n");

    fclose(fptr);
    return 0;

