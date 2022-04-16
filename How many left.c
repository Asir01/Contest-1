#include <stdio.h>

int main(){
    int H,W,h,w;
    scanf("%d %d %d %d", &H, &W, &h, &w);
    int rem_cell =H*W - (h*W + (H*w - h*w));
    printf("%d", rem_cell);
    return 0;
}

