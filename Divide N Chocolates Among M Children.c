
#include <stdio.h>

int main() {
    int chocolate;
    int children;

    // get input values for chocolate and children
    scanf("%d\n%d", &chocolate, &children);

    // find number of chocolate each children gets using the / operator
    int result = chocolate / children;
    printf("%d", result);

    // find remaining chocolate using the % operator
    int remain = chocolate % children;
    printf("\n%d", remain);

    return 0;
}
