#include <stdio.h>
#include <locale.h>
#include <math.h>
/*
void escreva();//DECLARAÇÃO DA MINHA FUNÇÃO

int main(){

    setlocale(LC_ALL, "Portuguese");

    escreva();//CHAMANDO A FUNÇÃO escreva PARA EXECUTAR A MENSAGEM

}

void escreva(){
    printf("Olá mundo!");
}
*/



/*
//RETORNAR O DOBRO DE UM VALOR

int dobro(int);

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("%d", dobro(num));
    //dobro(num);
}

int dobro(int x){

    return 2*x;
    //printf("%d", 2*x);

}
*/



/*
//SOMA DE DOIS NUMEROS


float somar(int, float);

float somar(int x, float y){

    return x+y;
}


int main(){

    setlocale(LC_ALL, "Portuguese");

    int n1;
    float n2;
    printf("Digite um valor: ");
    scanf("%d", &n1);

    printf("Digite um valor: ");
    scanf("%f", &n2);

    printf("%f", somar(n1, n2));
}
*/


/*
//EXERCÍCIO DE FIXAÇÃO
void escreva();

void mensagem(){
    printf("**********************************\n**********************************\n*******BEM VINDO AO SISTEMA*******\n**********************************\n**********************************");
}


int main(){

    setlocale(LC_ALL, "Portuguese");

    mensagem();

}
*/



/*
//MOSTRAR O DOBRO DE UM NUMERO SE > 0, SENÃO MOSTRAR O QUADRADO
int resultado(int);

int resultado(int x){

   if(x>0){
    return 2*x;
   }else{
    return x*x;
   }

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Valor: ");
    scanf("%d", &n);

    printf("%d", resultado(n));
*/




/*
//VARIÁVEIS LOCAIS E GLOBAIS

void mostraValor();
int num = 7;//VARIÁVEL GLOBAL - PODE SER UTILIZADA POR QUALQUER FUNÇÃO


void mostraValor(){
    int num = 2;//PREFERÊNCIA É COM A VARIÁVEL LOCAL
    printf("num é %d", num);
}


int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("num é %d\n", num);
    mostraValor();
}
*/



//FUNÇÕES E BIBLIOTECAS
//#include <math.h>
        //    sqrt(x)
        //    exp(x) - exponencial de x
        //    log10(x)
        //    fabs(x) - valor absoluto
        //    pow(x,y)
        //    sin(x)
        //    cos(x)
        //    tan(x)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>



/*
int main(){

    setlocale(LC_ALL, "Portuguese");

    //1
    int n = pow(5,3);
    float n2 = sqrt(46), op;

    op = (n + 8)/n2;

    printf("Resultado: %f ",op );




    //2
    float n = sin(48), n2 = sqrt(23), n3 = pow(n2,4), op;

    op = n/(-5*n3);

    printf("Resultado: %f", op);



    //3
    int n = pow(4,7);
    float n2 = log10(n);

    printf("Resultado: %f", n2);


}
*/






//EXERCÍCIOS

/*
//1
int resultado(int);

int resultado(int x){

   if(x%2 == 0){
    return 1;
   }else{
    return 0;
   }

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Valor: ");
    scanf("%d", &n);

    printf("%d", resultado(n));
}
*/


/*
//2

float distancia(float, float, float, float);

float distancia(float x1, float x2, float y1, float y2){

    return sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

}

int main(){


    float a1, a2, b1, b2;

    printf("Digite x1:");
    scanf("%f", &a1);

    printf("Digite x2:");
    scanf("%f", &a2);

    printf("Digite y1:");
    scanf("%f", &b1);

    printf("Digite y2:");
    scanf("%f", &b2);

    printf("Resultado: %f", distancia(a1, a2, b1, b2));
}
*/




/*----------------------------------------------------------------------------------------------------------*/


//FUNÇÕES RECURSIVAS - Chama a si mesma

//Funciona como um loop - Ex.:

//3! = 3 x 2!
//3! = 3 x 2 x 1!
//3! = 3 x 2 x 1 = 6

/*
//MANEIRA NÃO RECURSIVA
int fatorial (int);

int fatorial (int n){

    int resultado = 1, i;

    for(i=n; i>=1; i--){
        resultado = resultado * i;
    }
    return resultado;
}

int main(){

    setlocale(LC_ALL, "Portuguese");
    int valor;

    printf("Valor: ");
    scanf("%d", &valor);

    printf("%d", fatorial(valor));
}
*/


/*
//MANEIRA RECURSIVA
//Fatorial de um número
int fatorial (int);

int fatorial (int n){
    if(n == 1){
        return 1;
    }else{
        return n * fatorial(n - 1);
    }
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("%d", fatorial(5));
}
*/

/*
//Somatório de um número

int somatorio (int);

int somatorio (int n){
    if(n == 1){
        return 1;
    }else{
        return n + somatorio(n - 1);
    }
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("Somatório: %d", somatorio(5));
}

*/


//Exercício base e potência
int potencia (int, int);

int potencia (int base, int expoente){
    if(expoente == 0){
        return 1;
    }else{
        return base * potencia(base, expoente - 1);
    }
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int b, e;
    printf("Base: ");
    scanf("%d", &b);

    printf("Expoente: ");
    scanf("%d", &e);

    printf("Resultado: %d", potencia(b, e));
}















