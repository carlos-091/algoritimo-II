 #include <stdio.h>

 typedef struct
 {
     int hora;
     int minuto;
     int segundo;
 }hora;

 int horaemsegundos(hora h)
 {
     return h.hora*3600+h.minuto*60+h.segundo;
 }

 int main()
 {
     hora v[5];
     int i,indi_maior=0;

     printf("digiter 5 horarios (hh mm ss):\n");
     for(i=0;i<5;i++)
     {
         printf("horario[%d]: ",i+1);
         scanf("%d %d %d",&v[i].hora, &v[i].minuto, &v[i].segundo);
     }

     for(i=1;i<5;i++)
     {
         if(horaemsegundos(v[i])>horaemsegundos(v[indi_maior]))
         {
             indi_maior=i;
         }
     }

     printf("\nmaior horario digitado:%02d:%02d:%02d\n",v[indi_maior].hora, v[indi_maior].minuto, v[indi_maior].segundo);

     return 0;
 }
