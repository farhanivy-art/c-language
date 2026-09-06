#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ============================================================
   UNIFIED C PROGRAMS - MAIN MENU SYSTEM
   This program integrates all C language programs into one
   ============================================================ */

// Function prototypes
void displayMenu();
void option1_Calculator();
void option2_Palindrome();
void option3_Fibonacci();
void option4_PrimeChecker();
void option5_factorial();
void option6_CountDigits();
void option7_Reverse();
void option8_SortArray();
void option9_SearchArray();
void option10_PatternPrinting();

int main() {
    int choice;
    char continueProgram;

    printf("\n");
    printf("╔═══════════════════════════════════════════════════════════════╗\n");
    printf("║        UNIFIED C PROGRAMS - INTEGRATED MENU SYSTEM           ║\n");
    printf("║   Combining Multiple C Language Programs into One            ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝\n\n");

    do {
        displayMenu();
        printf("\nEnter your choice (1-10 or 0 to exit): ");
        scanf("%d", &choice);

        // Clear input buffer
        while (getchar() != '\n');

        switch (choice) {
            case 1:
                option1_Calculator();
                break;
            case 2:
                option2_Palindrome();
                break;
            case 3:
                option3_Fibonacci();
                break;
            case 4:
                option4_PrimeChecker();
                break;
            case 5:
                option5_factorial();
                break;
            case 6:
                option6_CountDigits();
                break;
            case 7:
                option7_Reverse();
                break;
            case 8:
                option8_SortArray();
                break;
            case 9:
                option9_SearchArray();
                break;
            case 10:
                option10_PatternPrinting();
                break;
            case 0:
                printf("\n✓ Thank you for using Unified C Programs! Goodbye!\n\n");
                exit(0);
            default:
                printf("\n✗ Invalid choice! Please enter a number between 0-10.\n");
        }

        printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Press Enter to continue to menu...");
        getchar();
        printf("\n");

    } while (1);

    return 0;
}

// ============================================================
// DISPLAY MENU
// ============================================================
void displayMenu() {
    printf("\n");
    printf("┌─────────────────────────────────────────────────────────────┐\n");
    printf("│                    AVAILABLE OPTIONS                         │\n");
    printf("├─────────────────────────────────────────────────────────────┤\n");
    printf("│  1. Simple Calculator (Add, Sub, Mul, Div)                  │\n");
    printf("│  2. Palindrome Checker                                      │\n");
    printf("│  3. Fibonacci Sequence Generator                            │\n");
    printf("│  4. Prime Number Checker                                    │\n");
    printf("│  5. Factorial Calculator                                    │\n");
    printf("│  6. Count Digits in a Number                                │\n");
    printf("│  7. Reverse a Number or String                              │\n");
    printf("│  8. Sort Array (Bubble Sort)                                │\n");
    printf("│  9. Search in Array (Linear/Binary Search)                  │\n");
    printf("│ 10. Print Patterns (Triangle, Square, Diamond)              │\n");
    printf("│  0. Exit Program                                            │\n");
    printf("└─────────────────────────────────────────────────────────────┘\n");
}

// ============================================================
// OPTION 1: SIMPLE CALCULATOR
// ============================================================
void option1_Calculator() {
    float num1, num2, result;
    char operator;

    printf("\n╔═══════════════════════════════════════════════════════════════╗\n");
    printf("║                    SIMPLE CALCULATOR                          ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝\n\n");

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\n┌─────────────────────────────────────────────────────────────┐\n");
    printf("│                      CALCULATION RESULT                      │\n");
    printf("├─────────────────────────────────────────────────────────────┤\n");

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("│ %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("│ %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("│ %.2f × %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("│ Error: Division by zero!\n");
            } else {
                result = num1 / num2;
                printf("│ %.2f ÷ %.2f = %.2f\n", num1, num2, result);
            }
            break;
        case '%':
            if ((int)num2 == 0) {
                printf("│ Error: Modulo by zero!\n");
            } else {
                result = (int)num1 % (int)num2;
                printf("│ %d %% %d = %.0f\n", (int)num1, (int)num2, result);
            }
            break;
        default:
            printf("│ Invalid operator!\n");
    }
    printf("└─────────────────────────────────────────────────────────────┘\n");
}

// ============================================================
// OPTION 2: PALINDROME CHECKER
// ============================================================
void option2_Palindrome() {
    char str[100], reversed[100];
    int i, j = 0;

    printf("\n╔═══════════════════════════════════════════════════════════════╗\n");
    printf("║                 PALINDROME CHECKER                            ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝\n\n");

    printf("Enter a string: ");
    scanf("%s", str);

    // Reverse the string
    for (i = strlen(str) - 1; i >= 0; i--) {
        reversed[j++] = str[i];
    }
    reversed[j] = '\0';

    printf("\n┌─────────────────────────────────────────────────────────────┐\n");
    printf("│                      PALINDROME CHECK                       │\n");
    printf("├─────────────────────────────────────────────────────────────┤\n");
    printf("│ Original String:  %s\n", str);
    printf("│ Reversed String:  %s\n", reversed);

    if (strcmp(str, reversed) == 0) {
        printf("│ Status: ✓ PALINDROME (Reads same forwards and backwards)\n");
    } else {
        printf("│ Status: ✗ NOT A PALINDROME\n");
    }
    printf("└─────────────────────────────────────────────────────────────┘\n");
}

// ============================================================
// OPTION 3: FIBONACCI SEQUENCE GENERATOR
// ============================================================
void option3_Fibonacci() {
    int n, i;
    long fib1 = 0, fib2 = 1, fib_next;

    printf("\n╔═══════════════════════════════════════════════════════════════╗\n");
    printf("║            FIBONACCI SEQUENCE GENERATOR                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝\n\n");

    printf("Enter how many Fibonacci numbers to generate (1-50): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\n✗ Please enter a positive number!\n");
        return;
    }

    printf("\n┌─────────────────────────────────────────────────────────────┐\n");
    printf("│            FIBONACCI SEQUENCE (First %d terms)              │\n", n);
    printf("├─────────────────────────────────────────────────────────────┤\n");
    printf("│ ");

    for (i = 0; i < n; i++) {
        if (i < 2) {
            printf("%ld", i == 0 ? fib1 : fib2);
        } else {
            fib_next = fib1 + fib2;
            printf(", %ld", fib_next);
            fib1 = fib2;
            fib2 = fib_next;
        }

        if ((i + 1) % 5 == 0 && i != n - 1) {
            printf("\n│ ");
        }
    }
    printf("\n└─────────────────────────────────────────────────────────────┘\n");
}

// ============================================================
// OPTION 4: PRIME NUMBER CHECKER
// ============================================================
void option4_PrimeChecker() {
    int num, i, isPrime = 1;

    printf("\n╔═══════════════════════════════════════════════════════════════╗\n");
    printf("║              PRIME NUMBER CHECKER                             ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝\n\n");

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n┌─────────────────────────────────────────────────────────────┐\n");
    printf("│                     PRIME CHECK RESULT                      │\n");
    printf("├─────────────────────────────────────────────────────────────┤\n");

    if (num < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    printf("│ Number: %d\n", num);
    if (isPrime) {
        printf("│ Status: ✓ PRIME NUMBER\n");
    } else {
        printf("│ Status: ✗ NOT A PRIME NUMBER\n");
    }
    printf("└─────────────────────────────────────────────────────────────┘\n");
}

// ============================================================
// OPTION 5: FACTORIAL CALCULATOR
// ============================================================
void option5_factorial() {
    int num;
    long factorial = 1;

    printf("\n╔═══════════════════════════════════════════════════════════════╗\n");
    printf("║                FACTORIAL CALCULATOR                           ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝\n\n");

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n┌─────────────────────────────────────────────────────────────┐\n");
    printf("│                    FACTORIAL RESULT                         │\n");
    printf("├─────────────────────────────────────────────────────────────┤\n");

    if (num < 0) {
        printf("│ Error: Factorial of negative number is not defined!\n");
    } else if (num == 0 || num == 1) {
        printf("│ %d! = 1\n", num);
    } else {
        for (int i = 2; i <= num; i++) {
            factorial *= i;
        }
        printf("│ %d! = %ld\n", num, factorial);
    }
    printf("└─────────────────────────────────────────────────────────────┘\n");
}

// ============================================================
// OPTION 6: COUNT DIGITS IN A NUMBER
// ============================================================
void option6_CountDigits() {
    int num, count = 0, originalNum;

    printf("\n╔═══════════════════════════════════════════════════════════════╗\n");
    printf("║              COUNT DIGITS IN A NUMBER                         ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝\n\n");

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    num = (num < 0) ? -num : num;  // Handle negative numbers

    printf("\n┌─────────────────────────────────────────────────────────────┐\n");
    printf("│                     DIGIT COUNT RESULT                      │\n");
    printf("├─────────────────────────────────────────────────────────────┤\n");

    if (num == 0) {
        count = 1;
    } else {
        while (num > 0) {
            count++;
            num /= 10;
        }
    }

    printf("│ Original Number: %d\n", originalNum);
    printf("│ Total Digits: %d\n", count);
    printf("└─────────────────────────────────────────────────────────────┘\n");
}

// ============================================================
// OPTION 7: REVERSE A NUMBER OR STRING
// ============================================================
void option7_Reverse() {
    int choice;

    printf("\n╔═══════════════════════════════════════════════════════════════╗\n");
    printf("║            REVERSE A NUMBER OR STRING                         ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝\n\n");

    printf("Choose:\n");
    printf("1. Reverse a Number\n");
    printf("2. Reverse a String\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    while (getchar() != '\n');

    printf("\n┌─────────────────────────────────────────────────────────────┐\n");

    if (choice == 1) {
        int num, reversed = 0, remainder;
        printf("│              REVERSE NUMBER RESULT                         │\n");
        printf("├─────────────────────────────────────────────────────────────┤\n");

        printf("│ Enter a number: ");
        scanf("%d", &num);

        int originalNum = num;
        num = (num < 0) ? -num : num;

        while (num > 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }

        if (originalNum < 0) reversed = -reversed;

        printf("│ Original Number: %d\n", originalNum);
        printf("│ Reversed Number: %d\n", reversed);
    } else if (choice == 2) {
        char str[100], reversed[100];
        int i, j = 0;

        printf("│              REVERSE STRING RESULT                         │\n");
        printf("├─────────────────────────────────────────────────────────────┤\n");

        while (getchar() != '\n');
        printf("│ Enter a string: ");
        scanf("%99s", str);

        for (i = strlen(str) - 1; i >= 0; i--) {
            reversed[j++] = str[i];
        }
        reversed[j] = '\0';

        printf("│ Original String: %s\n", str);
        printf("│ Reversed String: %s\n", reversed);
    } else {
        printf("│ Invalid choice!\n");
    }

    printf("└─────────────────────────────────────────────────────────────┘\n");
}

// ============================================================
// OPTION 8: SORT ARRAY (BUBBLE SORT)
// ============================================================
void option8_SortArray() {
    int n, i, j, temp;

    printf("\n╔═══════════════════════════════════════════════════════════════╗\n");
    printf("║                    SORT ARRAY                                 ║\n");
    printf("║                  (Bubble Sort Method)                         ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝\n\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\n✗ Please enter a positive number!\n");
        return;
    }

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n┌─────────────────────────────────────────────────────────────┐\n");
    printf("│                    SORTED ARRAY                             │\n");
    printf("├─────────────────────────────────────────────────────────────┤\n");
    printf("│ ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if ((i + 1) % 10 == 0 && i != n - 1) {
            printf("\n│ ");
        }
    }
    printf("\n└─────────────────────────────────────────────────────────────┘\n");
}

// ============================================================
// OPTION 9: SEARCH IN ARRAY
// ============================================================
void option9_SearchArray() {
    int n, i, searchNum, found = 0, choice;

    printf("\n╔═══════════════════════════════════════════════════════════════╗\n");
    printf("║                    SEARCH IN ARRAY                            ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝\n\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\n✗ Please enter a positive number!\n");
        return;
    }

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nSearch Methods:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search (Array will be sorted first)\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    printf("\nEnter number to search: ");
    scanf("%d", &searchNum);

    printf("\n┌─────────────────────────────────────────────────────────────┐\n");
    printf("│                    SEARCH RESULT                            │\n");
    printf("├─────────────────────────────────────────────────────────────┤\n");

    if (choice == 1) {
        // Linear Search
        for (i = 0; i < n; i++) {
            if (arr[i] == searchNum) {
                printf("│ ✓ Number %d found at position: %d\n", searchNum, i + 1);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("│ ✗ Number %d not found in array\n", searchNum);
        }
    } else if (choice == 2) {
        // Binary Search (need sorted array)
        int left = 0, right = n - 1, mid;

        // Sort array first
        for (i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        while (left <= right) {
            mid = left + (right - left) / 2;
            if (arr[mid] == searchNum) {
                printf("│ ✓ Number %d found at position: %d (in sorted array)\n", searchNum, mid + 1);
                found = 1;
                break;
            } else if (arr[mid] < searchNum) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if (!found) {
            printf("│ ✗ Number %d not found in array\n", searchNum);
        }
    } else {
        printf("│ Invalid choice!\n");
    }

    printf("└─────────────────────────────────────────────────────────────┘\n");
}

// ============================================================
// OPTION 10: PRINT PATTERNS
// ============================================================
void option10_PatternPrinting() {
    int n, i, j, choice;

    printf("\n╔═══════════════════════════════════════════════════════════════╗\n");
    printf("║                    PRINT PATTERNS                             ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝\n\n");

    printf("Choose a pattern:\n");
    printf("1. Right Triangle (Numbers)\n");
    printf("2. Left Triangle (Stars)\n");
    printf("3. Square (Stars)\n");
    printf("4. Diamond (Stars)\n");
    printf("5. Pyramid (Stars)\n");
    printf("Enter choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter size (rows): ");
    scanf("%d", &n);

    printf("\n┌─────────────────────────────────────────────────────────────┐\n");

    switch (choice) {
        case 1:
            // Right Triangle with Numbers
            printf("│              RIGHT TRIANGLE (NUMBERS)                      │\n");
            printf("├─────────────────────────────────────────────────────────────┤\n");
            for (i = 1; i <= n; i++) {
                printf("│ ");
                for (j = 1; j <= i; j++) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 2:
            // Left Triangle with Stars
            printf("│              LEFT TRIANGLE (STARS)                         │\n");
            printf("├─────────────────────────────────────────────────────────────┤\n");
            for (i = 1; i <= n; i++) {
                printf("│ ");
                for (j = n - i; j > 0; j--) {
                    printf("  ");
                }
                for (j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 3:
            // Square with Stars
            printf("│                SQUARE (STARS)                              │\n");
            printf("├─────────────────────────────────────────────────────────────┤\n");
            for (i = 1; i <= n; i++) {
                printf("│ ");
                for (j = 1; j <= n; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 4:
            // Diamond with Stars
            printf("│                DIAMOND (STARS)                             │\n");
            printf("├─────────────────────────────────────────────────────────────┤\n");
            // Upper half
            for (i = 1; i <= n; i++) {
                printf("│ ");
                for (j = n - i; j > 0; j--) {
                    printf("  ");
                }
                for (j = 1; j <= 2 * i - 1; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            // Lower half
            for (i = n - 1; i > 0; i--) {
                printf("│ ");
                for (j = n - i; j > 0; j--) {
                    printf("  ");
                }
                for (j = 1; j <= 2 * i - 1; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 5:
            // Pyramid with Stars
            printf("│                PYRAMID (STARS)                             │\n");
            printf("├─────────────────────────────────────────────────────────────┤\n");
            for (i = 1; i <= n; i++) {
                printf("│ ");
                for (j = n - i; j > 0; j--) {
                    printf("  ");
                }
                for (j = 1; j <= 2 * i - 1; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        default:
            printf("│ Invalid choice!\n");
    }

    printf("└─────────────────────────────────────────────────────────────┘\n");
}
