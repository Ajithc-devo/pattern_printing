
#include <stdio.h>

int main() {
    int n=5;
    for (int i=1;i<5;i++){
        for(int j=1;j<n;j++)
        {
            printf(" ");
        }
        for (int k=1;k<=(i*2)-1;k++){
            printf("* ");
        
        }
        printf("\n");
        --n;
    }
    
    return 0;
}
