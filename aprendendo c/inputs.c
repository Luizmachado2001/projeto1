#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 
    // \0 == nulo

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "Luiz Machado";

    // capture age by input
    printf("Enter you age: ");
    scanf("%d", &age);

    printf("Enter you gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf("%c", &grade);

    //clean line buffer
    getchar();

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';


    printf("%d\n", age);
    printf("%2.f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);


    return 0;
}