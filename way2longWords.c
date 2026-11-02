#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char word[101];
    
    for(int i = 0; i < n; i++){
        
        scanf("%s",word);
        int end = strlen(word);

        if (end <= 10)
        {
            printf("%s\n",word);
        }
        else
        {
            printf("%c%d%c\n",word[0],end - 2,word[end-1]);
        }
    } 
    return 0;
}
