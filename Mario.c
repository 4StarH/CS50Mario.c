#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    do {
        
    printf("Height: ");
    scanf("%d", &height);
    
    } while (height < 1 || height > 8 );
        
    for (int i = 1; i <= height; i++) {
        
        for (int j = (height - 1); j >= 0; j--) {
            
            if (i <= j) {
                
                printf(" ");
                
            } else {
                
                printf("#");
                
            }
            
        }
        
        printf("  ");
        
        for (int k = height; k >=0; k--) {
            
            
            if (i > k) {
                
                printf ("#");
                
            }
            
        }
        
        printf("\n");
        
    }
}
