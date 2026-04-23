#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char src[100];
    char dest[50];
    int opr;

   

    printf("\nSelect any operation:\n");
    printf("1. Calculate the length\n2. String Reverse\n3. String copy\n4. Check concatenation \n5. String substring\n");
    printf("Choice: ");
    scanf("%d", &opr);

    switch(opr) {
        case 1:
         printf("Enter string: ");
         scanf("%s", str1); 
            printf("Length of string: %lu\n", strlen(str1));
            break;

        case 2:
             printf("Enter a string: ");
             scanf("%s", str1); 
            printf("Reversed string: ");
            int i;
            for( i = strlen(str1) - 1; i >= 0; i--) {
                printf("%c", str1[i]);
            }
            printf("\n");
            break;

        case 3:
           printf("Enter source string");
           scanf("%s",src);
           strcpy(dest,src);
           printf("Copied String is :%s\n",dest);

        case 4: {
             printf("Enter source string");
           scanf("%s", src);
            printf("Enter destination string");
           scanf("%s", dest);
           strcat(src, dest);
           printf("Result :%s\n",src);
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
