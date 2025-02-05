#include <stdio.h>

int main()
{
    int hora, min, seg;
    
    scanf("%d", &hora);
    scanf("%d", &min);
    scanf("%d", &seg);
    
    hora = hora * 3600;
    min = min *60;
    seg = hora + seg + min;
    
    printf("O TEMPO EM SEGUNDOS É = %d\n", seg);

    return 0;
}