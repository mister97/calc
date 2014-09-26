#include<stdio.h>

int main()
{

    int operation=0,a=0,b=1,resultat=0;
    printf("Vous souhaitez faire:\n\n1: Addition\n2: Soustraction\n3: Multiplication\n4: Division\n");
    printf("\nVotre choix ? (1, 2, 3 ou 4) : ");
    scanf("%d",&operation);

    switch(operation)
    {
        case 1: printf("\nEntrez la première valeur de l'addition, a= ");
                scanf("%d",&a);
                printf("\nb = ");
                scanf("%d",&b);
                resultat=add(a,b);
                printf("\na+b = %d\n",resultat);
                break;
        case 2: printf("\nEntrez la première valeur de la soustraction, a= ");
                scanf("%d",&a);
                printf("\nb = ");
                scanf("%d",&b);
                resultat=sous(a,b);
                printf("\na-b = %d\n",resultat);
                break;
        case 3: printf("\nEntrez la première valeur de la multiplication, a= ");
                scanf("%d",&a);
                printf("\nb = ");
                scanf("%d",&b);
                resultat=mult(a,b);
                printf("\na*b = %d\n",resultat);
                break;
        case 4: printf("\nEntrez la première valeur de la division, a= ");
                scanf("%d",&a);
                printf("\nb = ");
                scanf("%d",&b);
                while(b==0)
                {
                	printf("\nbne peut pas etre egal a 0\n");
                    printf("\nb = ");
                    scanf("%d",&b);
                }
                resultat=div(a,b);
                printf("\na/b = %d\n",resultat);
                break;
        default: printf("\nVous n'avez pas choisi d'operateur !\n");
                 break;
    }

    return 0;
}
