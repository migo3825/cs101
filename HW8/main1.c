#include <stdio.h>
int rows = 10;
void print_spaces(int r, int rows) {
    for(int i = 1; i<r; i++) {
        printf("  ");
    }
}

void print_stars(int r) {
    int i;
    for(int i = rows; i>=r; i--) {
        printf("* ");
    }
    for(int i = rows; i>=r+1; i--) {
        printf("* ");
    }
}

int main() {
    int j = rows;
    for(int i = rows; i>=1; i--) {
        print_spaces(i, j);
        print_stars(i);
        printf("\n");
    }
    return 0;
}
