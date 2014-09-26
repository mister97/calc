#include'calcul.h'

void div()
{
float resultat=0,a=0,b=0;

printf("\nEntrez les valeurs de la division, a= ");
scanf("%f",&a);
printf("\nb= ");
scanf("%f",&b);

while(b==0)
{
printf("\nb ne peut pas etre egal a 0\n");
printf("b= ");
scanf("%f",&b);
}

resultat=a/b;
printf("\nLe résultat est %f",resultat);
}
