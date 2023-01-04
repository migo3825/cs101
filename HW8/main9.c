#include <stdio.h>
int main() {
    int i, j;
    printf("i=%d\n", j);//j=1
    for(i=0; i<100, j!=3; i++, j++) {
        printf("i=%d\n", i);
    }
    return 0;
}

/*會，因為j預設是1，而且不能等於3，到了第三次迴圈，j會等於3直接跳出來。*/
