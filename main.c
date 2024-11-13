#include <stdio.h>

int main (int argc, char *argv[]) {

    float n1, n2, result;
    int opc;
    printf("Selecciona una opcion:\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");
    printf(">> ");
    scanf("%d",&opc);
    printf("Ingrese le numero 1: ");
    scanf("%f",&n1);
    printf("Ingrese le numero 2: ");
    scanf("%f",&n2);
    if (opc==1)
    {
        result=n1+n2;
        printf("La suma es: %f\n",result);
    }else if(opc==2){
        result=n1-n2;
        printf("La resta es: %f\n",result);
    }else if (opc==3)
    {
        result=n1*n2;
        printf("La multiplicacion es: %f\n",result);
    }else if (opc==4)
    {
        if(n2==0){
            printf("Error, no se puede dividir para cero");
        }else{
            result=n1/n2;
            printf("La multiplicacion es: %f\n",result);
        }
    }else{
        printf("No existe la opcion\n");
    }

    return 0;
}
