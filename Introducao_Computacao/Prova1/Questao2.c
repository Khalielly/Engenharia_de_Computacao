#include <stdio.h>
#include <math.h>

int main(){
    int x1, x2, y1, y2;
    float d;
    
    printf("x1: ");
    scanf("%d", &x1);
    
    printf("x2: ");
    scanf("%d", &y1);
    
    printf("x3: ");
    scanf("%d", &x2);
    
    printf("x4: ");
    scanf("%d", &y2);
 
    
    d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    
    
    printf("d: %f", d);
    
    return 0;
}