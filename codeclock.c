#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int hora, minuto, segundo, h, m, s;
    hora=23;
    minuto=57;
    segundo=0;
    printf("escolha o horario do alarme:\n");
    scanf("%d:%d:%d", &h, &m, &s);
    while(1){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nHora:\n\n%2d:%2d:%2d\n\n\n\n\n\n\n\n\n\n", hora, minuto, segundo);
        if(h==hora && m==minuto && s==segundo){
            printf("Alarme:XUPA FEDERAL!!!!");
            break;
        }
        segundo=segundo+1;
        if(segundo==59){
            minuto=minuto+1;
            segundo=0;
        }
        if(minuto==60){
            hora=hora+1;
            minuto=0;
        }
        if(hora==24){
            hora=0;
        }
        Sleep(1000);
        }


    return 0;
}
