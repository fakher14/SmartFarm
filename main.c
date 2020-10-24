#include<stdio.h>
#include "fonction.h"
int main(){
int a,b;
printf("\n saisie du Premier Nombre:");
scanf("%d",&a);
do{
printf("\n saisie du second Nombre:");
scanf("%d",&b);
}while(b==0);
printf("\n%d+%d=%d",a,b,sommer(a,b));
printf("\n%d-%d=%d",a,b,soustraire(a,b));
printf("\n%d/%d=%f",a,b,diviser(a,b));
return(0);
}
