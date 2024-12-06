#include <stdio.h>

// Function to set a bit
int setBit(int num, int pos) {
    return num | (1 << pos);
}

// Function to clear a bit
int clearBit(int num, int pos) {
    return num & ~(1 << pos);
}

// Function to toggle a bit
int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}

// Function to read a bit
int readBit(int num, int pos) {
    return (num >> pos) & 1;
}

int main() {
    int num, position, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        printf("\nBit Manipulation Menu:\n");
        printf("1. Set a Bit\n");
        printf("2. Clear a Bit\n");
        printf("3. Toggle a Bit\n");
        printf("4. Read a Bit\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter bit position: ");
            scanf("%d", &position);

            if (position < 0 || position > 31) {
                printf("Invalid bit position! Please enter a value between 0 and 31.\n");
                continue;
            }
        }

        switch (choice) {
        case 1:
            num = setBit(num, position);
            printf("Number after setting bit: %d\n", num);
            break;
        case 2:
            num = clearBit(num, position);
            printf("Number after clearing bit: %d\n", num);
            break;
        case 3:
            num = toggleBit(num, position);
            printf("Number after toggling bit: %d\n", num);
            break;
        case 4:
            printf("The value of bit at position %d is: %d\n", position, readBit(num, position));
            break;
        case 5:
            printf("Exiting\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
