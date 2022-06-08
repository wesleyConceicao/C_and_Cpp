/*/TRAMPOS C++

//exercicio 2 
//volume esfera 
#include<iostream>
#define PI 3.14
#include<cmath>
int main(){
    float v, r;
    cout << "raio:";
    cin >> r;
    v=(4*PI*pow(r,3))/3;
    printf("V = %.3f\n",v);
    return 0;
}

//1037 em c++  
#include<iostream>
using namespace std;
int main()
{
    float a;
    cout << "entre como valor:" << endl;
    cin >> a;
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
        if  (a < 0 || a > 100.0){
            printf("Fora do intervalo");
        }
    }
}
#include<iostream>
// using namespace std; significa que podemos usar nomes para objetos e variáveis ​​da biblioteca padrão
int main(){ //Isso é chamado de função . Qualquer código dentro de suas chaves {}será executado.
    std::cout << "hello world!\n"; 
    std::cout << "Estou aprendendo c++\n";
    return 0; //finaliza a função
}*/


