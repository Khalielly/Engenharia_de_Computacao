#include <stdio.h>

int main (){
    int total_s, segundos, min, horas, dia;
    
    scanf("%d", &total_s);
    
    dia = total_s /86400;
    total_s = total_s % 86400;
    
    horas = total_s/3600;
    total_s = total_s%3600;
    
    min = total_s/60;
    total_s = total_s % 60;
    
    segundos = total_s;
    
    printf("%d dia(s) %d hora(s) %d minuto(s) %d segundo(s)", dia, horas, min, segundos);
    
    return 0;
}