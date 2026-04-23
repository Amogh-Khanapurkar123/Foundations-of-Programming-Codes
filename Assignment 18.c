#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    int opr;

    printf("Enter first string: ");
    scanf("%s", str1); 
    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\nSelect any operation:\n");
    printf("1. Calculate the length\n2. String Reversal\n3. Equality check\n4. Check palindrome\n5. Check substring\n");
    printf("Choice: ");
    scanf("%d", &opr);

    switch(opr) {
        case 1:
            printf("Length of first string: %lu\n", strlen(str1));
            break;

        case 2:
            // Manual reversal for portability
            printf("Reversed string: ");
            for(int i = strlen(str1) - 1; i >= 0; i--) {
                printf("%c", str1[i]);
            }
            printf("\n");
            break;

        case 3:
            if (strcmp(str1, str2) == 0) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;


		}        case 4: {
            int len = strlen(str1);
            int isPalindrome = 1;
            for(int i = 0; i < len/2; i++) {
                if(str1[i] != str1[len - 1 - i]) {
                    isPalindrome = 0;
                    break;
                }
            }
            if(isPalindrome) printf("The first string is a palindrome.\n");
            else printf("The first string is NOT a palindrome.\n");
            break;
        }

        case 5:
            if (strstr(str1, str2) != NULL) {
                printf("'%s' is a substring of '%s'.\n", str2, str1);
            } else {
                printf("'%s' is NOT found in '%s'.\n", str2, str1);
            }
            break;

        default:
            printf("Invalid selection.\n");
    }

    return 0;
}
