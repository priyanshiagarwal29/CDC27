#include <stdio.h>
    //1. butterfly

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int k = 1; k <= (2 * n - 2 * i); k++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) 
    {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int k = 1; k <= (2 * n - 2 * i); k++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// 2.alphabet pattern for n = 5
#include <stdio.h>

int main() {
    int n = 5; 
    int i, j;

    for (i = 1; i <= n; i++) {
        char ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        ch--; 
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}

// 3. hourglass pattern for n = 5
#include <stdio.h>

int main() {
    int n = 9; 
    for ( int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for (int j = 0; j < n - 2 * i; j++) {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }
    for (int i = n / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for (int j = 0; j < n - 2 * i; j++) {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}


// 4.hollow square pattern n = 5
#include <stdio.h>

int main() {
    int n = 5; 
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n) {
                printf("%d", j);
            } else if (j == 1 || j == n) {

                if (j == 1) {
                    printf("1");
                } else {
                    printf("5");
                }
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

//6.PASCAL TRIANGLE FOR N = 5
#include <stdio.h>

int main() {
    int n = 5; 
    int i, j,c;
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        c = 1; 
        for (j = 0; j <= i; j++) {
            printf("%d ", c);
            c= c * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}


