#include <stdio.h>

int main() {
    int length;
    int breadth;
    int area;

    // get length and breadth input
    scanf("length is %d\nbreadth is %d", &length, &breadth);

    // find the area
    area = length * breadth;

    // print the area
    printf(" Area of Rectangle is :%d", area);
    return 0;
}