//LISTAS 1-2-3
/*#include<stdio.h> // isso é uma chamad de biblioteca de arquivos dentro do c++//

 int main() {
   printf("hello world.");

#include<stdio.h>
int main(){
    float h, m, t, d, v, f ;
    printf("hora:");
    scanf("%f",&h);
    printf("minuto:");
    scanf("%f",&m);
    printf("distancia:");
    scanf("%f",&d);
    t=(h+m)*3600;
    v=d/t;
    f=2.23694*v;
    printf("hora em segundos %f\n",t);
    printf("velocidade final e %f\n",v);
    printf("velocidade em metros por segundo e %f\n",f);
    return 0;
}
}
//exercicio 3 
//conversão de celsius para fahrenheit.
//metelhe um if aqui
#include<stdio.h>
int main(){
    double f;
    int c;
    printf("funcao que converte de fahrenheit para celsius\n");
    printf("Valor em celsius:");
    scanf("%i",&c);
    f=((9*c)/5)+32;
    printf("Sao %.2f graus em fahrenheit\n",f);
    return 0;
}/*
#include<stdio.h>
int main(){
    int A, B, C, D, diferenca;
    printf("-----DIFERENCA ENTRE PRODUTOS------\n");
    printf("valor de A:");
    scanf("%i",&A);
    printf("valor de B:");
    scanf("%i",&B);
    printf("valor de C:");
    scanf("%i",&C);
    printf("valor de D:");
    scanf("%i",&D);
    diferenca=(A*B-C*D);
    printf("a diferenca e = %i\n",diferenca);
}
#include<stdio.h>
int main(){
    int n, h;
    float s, v;
    printf("-----CALCULO DO SALARIO------\n");
    printf("numero do funcionario:");
    scanf("%i",&n);
    printf("horas trabalhadas:");
    scanf("%i",&h);
    printf("salario por hora:");
    scanf("%f",&v);
    s=h*v;
    printf("------------------------\n");
    printf("numero do funcionario = %i\n",n);
    printf("salario atual = U$ %.2f\n",s); //%.2f define a precisão do resultado
}

//LISTAS 4-5
//1037 em c 
#include<stdio.h>
int main(){
    float a;
    printf("digite o valor de a:");
    scanf("%f",&a);
    if ( a >= 0 && a <= 25.0 ){
        printf("Intervalo (0,25]");
    }
    else if (a > 25.0 && a <= 50.0 ){
        printf("Intervalo de (25,50]");
    }
    else if (a > 50.0 && a <=75.0 ){
        printf("Intervalo de (50,75]");
    }
    else if (a > 75.0 && a <= 100.0){
        printf("Intervalo de (75,100]");
    }
    else{
        if  (a < 0 || a > 100){
            printf("Fora do intervalo");
        }
    }
    
}
//1038
#include<stdio.h>
int main(){
    int codigo, quantidade;
    scanf("%i %i",&codigo, quantidade);
    if(codigo == 1){
        printf("total = R$ %.2f\n", 4.00*quantidade);
    }
    else if(codigo == 2){
        printf("total = R$ %.2f\n", 4.50*quantidade);
    }
    else if(codigo == 3){
        printf("total = R$ %.2f\n", 5.00*quantidade);
    }
    else if(codigo == 4){
        printf("total = R$ %.2f\n", 2.00*quantidade);
    }
    else if(codigo == 5){
        printf("total = R$ %.2f\n", 1.50*quantidade);
    }
    return 0;
}
//1041 quadrante 
#include<stdio.h>
int main(){
    float x, y;
    printf("entre com o valor de x:");
    scanf("%f",&x);
    printf("entre com o valor de y:");
    scanf("%f",&y);
    if( x > 0.0 && y > 0.0){
        printf("primeiro quadrante");
    }
    else if(x < 0.0 && y > 0.0){
        printf("segundo quadrante");
    }
    else if(x < 0.0 && y < 0.0){
        printf("terceiro quadrante");
    }
    else if(x > 0.0 && y < 0.0){
        printf("quarto quadrante");
    }
    else{
        if(x == 0.0 || y == 0.0){
            printf("ponto de origem");
        }
    }
}
// 1073
#include<stdio.h>
int main(){
    int n, i, j;
    printf("valor de x:");
    scanf("%i",&n);
    if(n%2 == 0){
        for(i=2, j=2; i <= n; i+=2, j+=2){
            printf("%i x %i= %d\n",i,j,i*j );
            //(variavel do laço, condição e o incremento)
        }   
    }
    else{
        if(n%2 !=0){
            printf("Falso, voce entrou com numero impar");
        }
    }
    return 0;
}

/*Função do Primeiro grau

#include<stdio.h>
int main(void){
    float a,b,x;
    printf("Este programa resolve uma equacao do primeiro grau.\n");
    printf("Entre com o primeiro coeficiente A por favor:");
    scanf("%f",&a);
    printf("Entre com o coeficiente B, por favor:");
    scanf("%f",&b);
    if (a==0){
        printf("Esta equacao nao tem solucao.\n");
    }
    else{
        x=-b/a;
        printf("A solucao vale %1.3f\n",x);
    }
    return 0;
}

Média entre dois numeros
#include<stdio.h>
int main(){
    int a,b,x;
    printf("calculo da media entre dois numeros.\n");\\'\n' signifca um espaço entre as linhas
    printf("Entre com o primeiro valor:");
    scanf("%i", &a); \\mas no caso da scanf estamos interessados em atribuir os valores obtidos do fluxo de entrada para variáveis e a especificação e implementação da scanf() espera que sejam fornecidos como parâmetros o endereço das variáveis onde devem ser armazenados os valores obtidos no fluxo de entrada (devemos usar “left-values”)
    printf("Entre com o segundo valor:");
    scanf("%i", &b);
    x = (a+b)/2;
    printf("a solucao e %i\n",x);{

    }
    return 0;
}

#include<stdio.h>
#include<cmath>
int main(){
    int a=1,b=1,c=1,d,x1,x2;
    printf("calculo das raizes do Segundo grau.\n");
    printf("Digite o valor de A:");
    scanf("%i",&a);
    printf("Digite o valor de B:");
    scanf("%i",&b);
    printf("Digite o Valor de C:");
    scanf("%i",&c);
    d=pow(b,2)-4*a*c;
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
    printf("x1 vale:%i\n",x1);
    printf("x2 vale:%i\n",x2);{

    }
    return 0;
}
// FUNÇÕES E ESTRUTURAS e vetores 
// a vantagem dos vetores são a facilidade dos indices serem atribuidos ao elemento em comum 
#include<stdio.h>
#define DIM 5
int main(void){
    int vector [DIM], i, num;
    puts("entre com a inicial.");
    scanf("%d", &num);
    for(i=0; i < DIM; i++) vector[i]= num++;
    for(i=0; i < DIM; i++){
        printf("elemento %d = %d\n", i, vector[i]);
    }
    return 0;
}
/*#include<stdio.h>
int main(void){
    int vetor[5], i, j, temp;
    for ( i=0; i<5; i++){
        scanf("%d", &vetor[i]);
    }
    for (i=0; i<5-1; i++){
        for (j=0; j <5-1-i; j++){
            if(vetor[j]>vetor[j+1]){
                temp=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=temp;
            }
        }   
    }
    for(i=0; i<5; i ++) printf("%d\n", vetor[i]);
    return 0;
}
#include <stdio.h>
int main()
{
  int n, x, i;
  int max, min;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &x);

    if (i == 0) /* Estamos lendo o primeiro da sequencia 
      max = min = x;
    else {
      if (x > max) max = x;
      if (x < min) min = x;
    }
  }

  printf("max = %d, min = %d\n", max, min);

  return 0;
}
#include <stdio.h>
int main() {
    int n, indice = 0, i;
    double dificuldade, nota, notas[7], maior, menor;

    scanf("%i ", &n);
    
    char nomes[n][128];
    
    while (indice < n) {
        
        scanf("%s", nomes[indice]);
        
        scanf("%lf", &dificuldade);
        
        maior = 0.0;
        menor = 10.0;
        nota = 0.0;
        
        for (i = 0; i < 7; i++) {
            
            scanf("%lf ", &notas[i]);
            nota += notas[i];
        
            if (notas[i] > maior)
                maior = notas[i];
            
            if (notas[i] < menor)
                menor = notas[i];
            
        }
        
        printf("%s %.2lf\n", nomes[indice++], dificuldade * (nota - maior - menor));
    }
    
    return 0;
}
#include<stdio.h>
#define QTDLT 26   

int main (){
    int i, j;
    char vetTexto;
    char vetLetras[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
    'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

    for(i=0; i < CARACT; i++){  
        fgets("%c", &vetTexto);
    }
        for (i = 0; i < CARACT; i++){ 
            for (j = 0; j < QTDLT; j++){
                if(vetTexto[i] == vetLetras[j] && j+ 5 <QTDLT){ 
                    vetTexto[i] = vetLetras[j+ 5];
                }     
                else{ 
                    j = j + 5;
                    j = j - QTDLT; 
                    vetTexto[i] = vetLetras[j];
                }
            }
        }
    for (i = 0; i < CARACT; i++){ 
        printf ("%c", vetTexto[i]);
    }
    return 0;
}*/

#include<stdio.h>

int main(void)
{
        int n, i, soma, val;
        scanf("%d", &n);
        soma = 0;
        i = 0;
        while (i < n)
       {
           scanf("%d", &val);
            i = i + 1;
           soma = soma + val;
       }
       printf("%d", soma);
      return 0;
}
/*
#include<stdio.h>
#define TAM 1025
int main(){
  float media, soma, notas[TAM], max=0.0 , min=10.0;
  int n ;
  scanf("%i\n", &n);
  for(int i = 0; i < n; i++){
    scanf("%f", &notas[i]);
  }
  for(int i = 0; i < n; i++){
    if(notas[i] > max){
      max = notas[i];
    }
    if(notas[i] < min){
      min = notas[i];
    }
    soma+=notas[i];
  }
  printf("%.1f\n", (soma-min-max)/(n-2));
  return 0;
}

// cifra cesar
#include<stdio.h>
#include<string.h>
int main() {
    int n, i = 0, j, chave, tamanho;
    char *palavra = (char *) malloc(sizeof(char) * 50);;
    char alfabeto[26][27] = {
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
        "ZABCDEFGHIJKLMNOPQRSTUVWXY",
        "XZABCDEFGHIJKLMNOPQRSTUVWX",
        "XYZABCDEFGHIJKLMNOPQRSTUVW",
        "WXYZABCDEFGHIJKLMNOPQRSTUV",
        "VWXYZABCDEFGHIJKLMNOPQRSTU",
        "UVWXYZABCDEFGHIJKLMNOPQRST",
        "TUVWXYZABCDEFGHIJKLMNOPQRS",
        "STUVWXYZABCDEFGHIJKLMNOPQR",
        "RSTUVWXYZABCDEFGHIJKLMNOPQ",
        "QRSTUVWXYZABCDEFGHIJKLMNOP",
        "PQRSTUVWXYZABCDEFGHIJKLMNO",
        "OPQRSTUVWXYZABCDEFGHIJKLMN",
        "NOPQRSTUVWXYZABCDEFGHIJKLM",
        "MNOPQRSTUVWXYZABCDEFGHIJKL",
        "LMNOPQRSTUVWXYZABCDEFGHIJK",
        "KLMNOPQRSTUVWXYZABCDEFGHIJ",
        "JKLMNOPQRSTUVWXYZABCDEFGHI",
        "IJKLMNOPQRSTUVWXYZABCDEFGH",
        "HIJKLMNOPQRSTUVWXYZABCDEFG",
        "GHIJKLMNOPQRSTUVWXYZABCDEF",
        "FGHIJKLMNOPQRSTUVWXYZABCDE",
        "EFGHIJKLMNOPQRSTUVWXYZABCD",
        "DEFGHIJKLMNOPQRSTUVWXYZABC",
        "CDEFGHIJKLMNOPQRSTUVWXYZAB",
        "BCDEFGHIJKLMNOPQRSTUVWXYZA"
    };
    scanf("%d ", &n);
    for (i=0; i++ < n; i++) {
        fgets(palavra, 15, stdin);
        scanf("%i", &chave);
        tamanho = 0;
        while (palavra[tamanho] != '\0')
            tamanho++;
        j = 0;            
        for(j=0; j < tamanho; j++) {
            palavra[j] = alfabeto[chave][palavra[j] - 'A'];
        }
        printf("%s\n", palavra);
    }
    
    return 0;
}
#include <stdio.h>
#define TAM 15 
#define qtd 52
int main() {

    int i = 0;
    char texto[TAM];
    char letras[qtd] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
    'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (i = 0; i < TAM; i++) {
        fgets(texto, 15, stdin);
        if( texto < 4 || texto > TAM){
            break;
        }  
    }
    for (i = 0; i < TAM; i++) {
        texto[i] = 'A' + (texto[i] - 'A' + 3) % qtd;
    }
    for (i = 0; i < TAM; i++) {
        printf("%c", texto[i]);
    }

    return 0;
}
#include <stdio.h>

int main(){

    int n,v;
    char cod[50];

    scanf("%d",&n);
    for(int i = 0; i < n; i++){
            scanf("%s",&cod);
            scanf("%d",&v);
           
            for(int j = 0; j < 50; j++){
                    if(cod[j] == '\0') break;
                    if((cod[j] - v) < 65) printf("%c", (cod[j] - v)+ 26);
                    else printf("%c", (cod[j] - v));
            }     
    }
   
    return 0;
}*/
