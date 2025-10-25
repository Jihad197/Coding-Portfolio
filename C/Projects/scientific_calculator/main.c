#include <stdio.h>
#include <math.h>
#include<matrix.h>
int main() {
    int mode;  
    int choice;
    float result, num;
    char op;

    printf("===== Welcome =====\n");
    printf("Please select any mode:\n");
    printf("1. Normal Mode\n");
    printf("2. Scientific Mode\n");
    printf("Enter your choice[i.e. 1]: ");
    scanf("%d", &mode);

    
    // NORMAL MODE
   
     if (mode == 1) {
        printf("\n--- Normal Mode ---\n");
        printf("Available operators are +,-,*,/,%%(for percentage),=(for answer)\n");
        printf("Enter number: \n");
        scanf("%f",&result);


        while(1)
        {
            printf("enter an operator[+,-,*,/,%%,=]: ");
            scanf(" %c",&op);
            if (op == '=')
                break;

            printf("Enter next number:\n");
            scanf("%f",&num);
            if (op == '+')
                result = result + num;
            else if (op == '-')
            result -= num;
            else if (op == '*')
            result *= num;
            else if (op == '/') {
                if (num != 0)
                result /= num;
                else
                printf("Error: Division by zero is not possible \n");
            }
            else if (op == '%')
                result = (result * num)/100.0;
            else
                printf("Invalid operator\n");




        }
        printf("\nAnswer = %f\n",result);


    }

    // SCIENTIFIC MODE
   else if (mode == 2) {
        printf("\n--- Scientific Mode ---\n");}
    
    
    
    else {
        printf("Invalid mode selected\n"); // INVALID MODE
    }

    return 0;
}
