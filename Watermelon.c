#include <stdio.h>

int main(){
    int w;
    scanf("%d",&w);
    if (w % 2 == 0 && w > 2) // w should be above 2 because
                             // 2 means 1 and 1 melon for both 
                             // which is ends up odd number
        printf("Yes\n");
    else printf("NO\n");
    return 0;
}
