#include <stdio.h>
#include <math.h>

int main() {
    int mode;  
    int choice;
    double a, b, result;

    printf("===== Welcome =====\n");
    printf("Please select any mode:\n");
    printf("1. Normal Mode\n");
    printf("2. Scientific Mode\n");
    printf("Enter your choice[i.e. 1]: ");
    scanf("%d", &mode);

    
    // NORMAL MODE
   
    if (mode == 1) {
        printf("\n--- Normal Mode ---\n");
        
    }

    // SCIENTIFIC MODE
   else if (mode == 2) {
        printf("\n--- Scientific Mode ---\n");}
    
    
    
    else {
        printf("Invalid mode selected\n"); // INVALID MODE
    }

    return 0;
}
