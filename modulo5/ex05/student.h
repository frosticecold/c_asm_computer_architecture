#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int age;	// Offset 0
    int number;	// Offset 4
    int grades[10]; 	// Offset 8
    char name[80];	// Offset 48
    char address[120];	// Offset 128
    } Student;
#endif