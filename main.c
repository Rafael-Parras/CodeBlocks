#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void exercicio01(){
    float celsius, fahrenheit;

    printf("-----Conversor de Temperatura (C -> F)-----\n");

    // 1. Entrada de Dados
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // 2. Processamento
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // 3. Saída de Dados
    printf("\n%.1f graus Celsius equivalem a %.1f graus Fahrenheit.\n", celsius, fahrenheit);
    printf("-----------------------------------------------\n\n");
}
void exercicio02() {
    float fahrenheit, celsius;

    printf("-----Conversor de Temperatura (F -> C)-----\n");

    // 1. Entrada de Dados
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // 2. Processamento
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // 3. Saída de Dados
    printf("\n%.1f graus Fahrenheit equivalem a %.1f graus Celsius.\n", fahrenheit, celsius);
    printf("-----------------------------------------------\n\n");
}
void exercicio03(){
    int raiodalata, alturadalata;
    float volumedalata;

    printf("-----Cálculo do Volume de uma Lata de Óleo-----\n");

    //1. Entrada de Dados
    printf("Digite o raio da base da lata em centímetros:");
    scanf("%d", &raiodalata);

    printf("Digite a altura da lata em centímetros:");
    scanf("%d", &alturadalata);

    //2. Processamento
    volumedalata =  3.14 * raiodalata*raiodalata * alturadalata;

    //3. Saída de Dados
    printf("O volume da lata de óleo é %.2f cm^3\n", volumedalata);
    printf("-----------------------------------------------\n\n");

}
void exercicio04(){
    float distancia, consumo, litros;

    printf("----- Cálculo da Quantidade de Combustível Gasta em uma Viagem-----\n");

    //1. Entrada de Dados
    printf("Insira a distância percorrida em kms:");
    scanf("%f", &distancia);

    printf("Insira o consumo do veículo em quilômetros por litro: ");
    scanf("%f", &consumo);

    //2. Processamento
    litros = distancia / consumo;

    //3. Saída de Dados
    printf("A quantidade de combustível gasta na viagem é de %.2f\n", litros);
    printf("-----------------------------------------------\n\n");

}
void exercicio05(){
    float prestacao, atraso, juros, valor;

    printf("-----Cálculo do Valor de uma Prestação em Atraso-----\n");

    //1. Entrada de Dados
    printf("Insira o valor original da prestação: ");
    scanf("%f", &prestacao);

    printf("Insira o númreo de meses em atraso:");
    scanf("%f", &atraso);

    printf("Insira a taxa de juros mensal: ");
    scanf("%f", &juros);

    //2. Processamento
    valor = prestacao * (1+ (juros/100)* atraso);

    //3. Saída de Dados
    printf("O valo da prestação em atraso é de %.2f\n", valor);
    printf("-----------------------------------------------\n\n");
}
void exercicio06(){
    int a, b, x;
    int a_original, b_original;

    printf("-----Troca de valores entre variáveis-----\n");

    //1. Entrada de Dados
    printf("Insira o valor de A: ");
    scanf("%d", &a);

    printf("Insira o valor de B: ");
    scanf("%d", &b);

    // Salva os valores originais
    a_original = a;
    b_original = b;

    //2. Processamento - troca
    x = a;
    a = b;
    b = x;

    //3. Saída de Dados
    printf("Antes da troca: a = %d e b = %d\n", a_original, b_original);
    printf("Depois da troca: a = %d e b = %d\n", a, b);
    printf("-----------------------------------------------\n\n");
}
void exercicio07(){
    int a, b, c, d;
    int soma, multiplicacao;

    printf("----- Adição e Multiplicação de Quatro Números Inteiros -----\n");

    //1. Entrada de Dados
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    printf("Insira o valor de c: ");
    scanf("%d", &c);
    printf("Insira o valor de d: ");
    scanf("%d", &d);

    //2. Processamento
    soma = a + b + c + d;
    multiplicacao = a * b * c * d;

    //3. Saída de Dados
    printf("A soma dos quatro números é: %d\n", soma);
    printf("A multiplicação dos quatro números é: %d\n", multiplicacao);
    printf("-----------------------------------------------\n\n");
}
void exercicio08(){
float comprimento, largura, altura, volume;

    printf("-----Calculo do Volume de uma Caixa Retangular-----\n");

    // 1. Entrada de Dados

    printf("Insira o valor do comprimento da caixa retangular: ");
    scanf("%f", &comprimento);

    printf("Insira o valor da largura da caixa retangular: ");
    scanf("%f", &largura);

    printf("Insira o valor da altura da caixa retangular: ");
    scanf("%f", &altura);

    // 2. Processamento

    volume = comprimento * largura * altura;

    // 3. Saída de Dados

    printf("O volume da caixa é %.2f\n", volume);
    printf("-----------------------------------------------\n\n");
}
void exercicio09(){
    	printf("-----Cálculo do Quadrado de um Número Inteiro-----\n");
	int numero, quadrado;

	//1. Entrada de Dados

	printf(" Insira um numero inteiro: ");
	scanf("%d", &numero);

	//2. Processamento

	quadrado = numero * numero;

	//3. Saída de Dados

	printf("O quadrado do número lido é %d", quadrado);
	printf("-----------------------------------------------\n\n");
}
void exercicio10(){
	printf("-----Cálculo da Diferença entre Dois Números Inteiros-----\n");
	int N1, N2, resultado;

	//1. Entrada de Dados

	printf(" Insira dois numeros inteiro: ");
	scanf("%d %d", &N1, &N2);

	//2. Processamento

	resultado = N1 - N2;

	//3. Saída de Dados

	printf("O resultado da subtração é %d", resultado);
	printf("-----------------------------------------------\n\n");
}
void exercicio11(){

printf("-----Conversão de Dólar para Real-----\n");
	float dolar, real;

	//1. Entrada de Dados

	printf(" Insira um valor em dolar: ");
	scanf("%f", &dolar);

	//2. Processamento

	real = dolar * 5.60;

	//3. Saída de Dados

	printf("O resultado da conversão é %f", real);
	printf("-----------------------------------------------\n\n");
}
void exercicio12(){

    printf("-----Conversão de Real para Dólar-----\n");
	float dolar, real;

	//1. Entrada de Dados

	printf(" Insira um valor em reais: ");
	scanf("%f", &real);

	//2. Processamento

	dolar = real / 5.60;

	//3. Saída de Dados

	printf("O resultado da conversão é %f", dolar);

printf("-----------------------------------------------\n\n");}
void exercicio13(){

    printf("-----Cálculo da Soma dos Quadrados de Três Números-----\n");
	int N1, N2, N3, Q1, Q2, Q3, soma;

	//1. Entrada de Dados

	printf(" Insira um 3 valores númericos: ");
	scanf("%d %d %d", &N1, &N2, &N3);

	//2. Processamento

	Q1 = N1 * N1;
	Q2 = N2 * N2;
	Q3 = N3 * N3;
	soma = Q1 + Q2 + Q3;

	//3. Saída de Dados

	printf("O resultado é %d", soma);
printf("-----------------------------------------------\n\n");}
void exercicio14(){

    printf("-----Cálculo do Quadrado da Soma de Três Números-----\n");
	int N1, N2, N3, Q, soma;

	//1. Entrada de Dados

	printf(" Insira um 3 valores númericos: ");
	scanf("%d %d %d", &N1, &N2, &N3);

	//2. Processamento

	Q = N1 + N2 + N3;
	soma = Q * Q;

	//3. Saída de Dados

	printf("O resultado é %d", soma);
printf("-----------------------------------------------\n\n");}
void exercicio15(){

    printf("-----Cálculo do Produto e da Soma de Quatro Números-----\n");
	int N1, N2, N3, N4, mult, soma;

	//1. Entrada de Dados

	printf(" Insira um 4 valores númericos: ");
	scanf("%d %d %d %d", &N1, &N2, &N3, &N4);

	//2. Processamento

	mult = N1 * N3;
	soma = N2 + N4;

	//3. Saída de Dados

	printf("O resultado da multiplicação é %d\n", mult);
    printf("O resultado da adição é %d", soma);
printf("-----------------------------------------------\n\n");}
void exercicio16(){
    printf("-----Cálculo do Novo Salário com Aumento-----\n");
	float salario, porcentagem, aumento, novoSalario;

	//1. Entrada de Dados

	printf("Insira o valor do salário mensal: ");
	scanf("%f", &salario);

	printf("Insira a porcentagem de aumento: ");
	scanf("%f", &porcentagem);

	//2. Processamento

	aumento = salario * (porcentagem/100);
	novoSalario = salario + aumento;

	//3. Saída de Dados

	printf("Novo salário: %.2f", novoSalario);
	printf("-----------------------------------------------\n\n");
	}
void exercicio17(){

     printf("-----Cálculo da Área de uma Circunferência-----\n");
	float raio, area;

	//1. Entrada de Dados

	printf("Insira o valor do raio da circunferencia:");
	scanf("%f", &raio);

	//2. Processamento

	area = 3.14 * raio * raio;

	//3. Saída de Dados

	printf("A area é : %.2f", area);
	printf("-----------------------------------------------\n\n");
}
void exercicio18(){

    printf("----- Apuração de Votos em uma Eleição Sindical -----\n");

    int V1, V2, V3, nulos, brancos, total;
    float P1, P2, P3, Pn, Pb;

    // 1. Entrada de Dados
    printf("Insira a quantidade de votos para o candidato 1: ");
    scanf("%d", &V1);

    printf("Insira a quantidade de votos para o candidato 2: ");
    scanf("%d", &V2);

    printf("Insira a quantidade de votos para o candidato 3: ");
    scanf("%d", &V3);

    printf("Insira a quantidade de votos nulos: ");
    scanf("%d", &nulos);

    printf("Insira a quantidade de votos em brancos: ");
    scanf("%d", &brancos);

    // 2. Processamento

    total = V1 + V2 + V3 + nulos + brancos;
    P1 = (V1 * 100.0) / total;
    P2 = (V2 * 100.0) / total;
    P3 = (V3 * 100.0) / total;
    Pn = (nulos * 100.0) / total;
    Pb = (brancos * 100.0) / total;


    // 3. Saída de Dados
    printf("\nVotos totais = %d\n", total);
    printf("Candidato 1 = %.2f%%\n", P1);
    printf("Candidato 2 = %.2f%%\n", P2);
    printf("Candidato 3 = %.2f%%\n", P3);
    printf("Nulos = %.2f%%\n", Pn);
    printf("Brancos = %.2f%%\n", Pb);
    printf("-----------------------------------------------\n\n");

}
void exercicio19(){

    printf("----- Cálculo das Quatro Operações Básicas-----\n");

    int N1, N2, add, sub, mult, divi;

    // 1. Entrada de Dados
    printf("Insira 2 valores númericos: ");
    scanf("%d %d", &N1, &N2);

    // 2. Saída de Dados

    printf("Adição de %d + %d = %d\n", N1, N2, N1 + N2);
    printf("Subtração de %d - %d = %d\n", N1, N2, N1 - N2);
    printf("Multiplicação de %d x %d = %d\n", N1, N2, N1 * N2);
    printf("Divisão de %d / %d = %d\n", N1, N2, N1 / N2);
    printf("-----------------------------------------------\n\n");
}
void exercicio20(){

    printf("----- Cálculo da Velocidade de um Projétil -----\n");

    int km, hrs;
    float VP;

    // 1. Entrada de Dados
    printf("Insira a distancia percorrida em quilômetros: ");
    scanf("%d", &km);

    printf("Insira o tempo em horas: ");
    scanf("%d", &hrs);

    // 2. Processamento.

    VP = (km * 1.0 / hrs) / 3.6;

    // 3. Saída de Dados

    printf("Velocidade = %.2f m/s", VP);
    printf("-----------------------------------------------\n\n");

}
void exercicio21(){

    printf("----- Cálculo de Potência-----\n");

    int expo, base;
    double resultado;

    // 1. Entrada de Dados
    printf("Insira o valor inteiro para base:");
    scanf("%d", &base);

    printf("Insira o valor inteiro para o expoente: ");
    scanf("%d", &expo);

    // 2. Processamento.

    resultado = pow(base, expo);

    // 3. Saída de Dados

     printf("O resultado de %d elevado a %d é: %.0f\n", base, expo, resultado);
     printf("-----------------------------------------------\n\n");

}
void exercicio22(){

    printf("----- Cálculo do Volume de uma Esfera -----\n");

    float raio;
    double volume;

    // 1. Entrada de Dados
    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);

    // 2. Processamento.

    volume = (4.0/3.0) * M_PI * (raio*raio*raio);

    // 3. Saída de Dados

     printf("O Volume da esfera de raio %.2f é: %.2f", raio, volume);
    printf("-----------------------------------------------\n\n");


}
void exercicio23(){

    printf("----- Conversão de Pés para Metros -----\n");

    float fts, metros;

    // 1. Entrada de dados
    printf("Insira uma medida em pés: ");
    scanf("%f", &fts);

    // 2. Processamento
    metros = fts * 0.3048;

    // 3. Saída de dados
    printf("A medida equivalente em metros é: %.2f metros\n", metros);
    printf("-----------------------------------------------\n\n");
}
void exercicio24(){

    printf("----- Cálculo de Raiz -----\n");

    float base, indice, resultado;

    // 1. Entrada de dados
    printf("Insira a base e o índice da raiz: ");
    scanf("%f %f", &base, &indice);

    // 2. Processamento
    resultado = pow(base, 1.0 / indice);

    // 3. Saída de dados
    printf("A raiz de índice %.2f de %.2f é: %.4f\n", indice, base, resultado);
    printf("-----------------------------------------------\n\n");
}
void exercicio25(){
    printf("----- Sucessor e Antecessor de um Número Inteiro -----\n");

    int N1, antes, depois;

    // 1. Entrada de dados
    printf("Insira um valor númerico inteiro: ");
    scanf("%d", &N1);

    // 2. Processamento

    antes = N1 - 1;
    depois = N1 + 1;

    // 3. Saída de dados
    printf("O antecessor é %d e o sucessor é %d", antes, depois);
    printf("-----------------------------------------------\n\n");
}
void exercicio26(){

    printf("----- Cálculo do Quadrado da Divisão de Dois Números Inteiros -----\n");

    int N1, N2, divi, quadrado;

    // 1. Entrada de dados
    printf("Insira 2 valores numéricos inteiros: ");
    scanf("%d %d", &N1, &N2);

    // 2. Processamento
    divi = N1 / N2;
    quadrado = divi * divi;

    // 3. Saída de dados
    printf("Divisão: %d\n", divi);
    printf("Quadrado do resultado da divisão: %d\n", quadrado);

}



int main() {
    setlocale(LC_ALL, "");


    exercicio01();
    exercicio02();
    exercicio03();
    exercicio04();
    exercicio05();
    exercicio06();
    exercicio07();
    exercicio08();
    exercicio09();
    exercicio10();
    exercicio11();
    exercicio12();
    exercicio13();
    exercicio14();
    exercicio15();
    exercicio16();
    exercicio17();
    exercicio18();
    exercicio19();
    exercicio20();
    exercicio21();
    exercicio22();
    exercicio23();
    exercicio24();
    exercicio25();
    exercicio26();

    return 0;
}
