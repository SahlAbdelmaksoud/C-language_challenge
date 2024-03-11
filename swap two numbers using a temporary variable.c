// i
#include <stdio.h>

int main() {
    int x;
    int y;

    // get input values for x and y
    scanf("%d\n%d", &x, &y);

    // create a temporary variable
    int temp;

    // swap values using temp
    temp = x;
    x = y;
    y = temp;


    // print values after swapping
    printf("%d", x);
    printf("\n%d", y);

    return 0;
}
