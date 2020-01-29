#include<stdio.h>
#include<math.h>

int main(){

    int cont=0, m1=1, variavel;

        printf("Digite um numero: ");
        scanf("%d", &variavel);
        
        do{
            cont=cont+m1;
            m1=m1+2;
        }while(cont!=variavel && m1<variavel);
        if(cont==variavel ){
        	
           printf("O numero digitado = %d e um quadrado perfeito \n",cont);

        }
        else{
            printf("\nO numero digitado = %d nao e um quadrado perfeito", variavel);
        }
}
