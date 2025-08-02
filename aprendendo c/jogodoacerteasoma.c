#include <stdio.h>

int main() {
    int num1, num2, result, resp;
    
    // receive number 1
    printf("enter number: ");
    scanf("%i", &num1);

    // receive number 2
    printf("enter number: ");
    scanf("%i", &num2);
    
    // verification the result
    result = num1 + num2;

    printf("What is the correct sum? : ");
    scanf("%i", &resp);

    if (result == resp){
        printf("win victory");
    }else{
        printf("loss..");
    }

    return 0;
}