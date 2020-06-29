#include <stdio.h>
#include <stdlib.h>
#define tam 15
#define tam1 5
int main(){
    int *v, *Pares, *Impares,contadorPar=0, contadorImpar=0, k=0, i, j, l, m;
    v = NULL;
    Pares = NULL; 
    Impares = NULL;
    v =(int*)malloc(tam*sizeof(int));
    Pares = (int*)malloc(tam1*sizeof(int)); 
    Impares = (int*)malloc(tam1*sizeof(int));
    if(v==NULL || Pares==NULL || Impares==NULL){
        printf("Deu erro na alococao de memoria\n");
        exit(1);
    }
    for(i=0;i<tam;i++){
        scanf("%d", &v[i]);
        if(v[i]%2==0){
            Pares[contadorPar]=v[i];
            contadorPar++;
        }
        if(v[i]%2!=0){
            Impares[contadorImpar]=v[i];
            contadorImpar++;
        }
        if(contadorPar==tam1){
            for(j=0;j<tam1;j++){
                printf("par[%d] = %d\n", j, Pares[j]);
                Pares[j]=9999;
            }
            contadorPar=0;
            k++;
        }
        if(contadorImpar==tam1){
            for(j=0;j<tam1;j++){
                printf("impar[%d] = %d\n", j, Impares[j]);
                Impares[j]=9999;
            }
            contadorImpar=0;
            k++;
        }
    }
    if(k==2){
        for(l=0;l<tam1;l++){
            if(Impares[l]!=9999){
            printf("impar[%d] = %d\n", l, Impares[l]);
            }   
        }
        for(l=0;l<tam1;l++){
            if(Pares[l]!=9999){
                printf("par[%d] = %d\n", l, Pares[l]);
            }   
        }
    }
    free(Impares);
    free(Pares);
    free(v);
    return 0; 
}