#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#define TAM 10000

typedef struct identificacao{
    int id;
    int pontuacao;
}interacao;

//Prototipos
void quiz();
void criarArquivo();
void menu();

//Variaveis Globais
    char data[80];
    char hora[80];
    int cont=1;
    FILE *arq;
    interacao max[TAM];

void criarArquivo(){
    struct tm *timeinfo;
    char buffer[80];
    setlocale(LC_ALL, "pt_BR");
    time_t agora = time(NULL);
    struct tm *tempo_local = localtime(&agora);
    strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
    strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);

    system("cls");

    printf("Data: %s\n", data);
    printf("Hora: %s\n", hora);
  
    timeinfo = localtime(&agora);

    strftime(buffer, sizeof(buffer), "%m-%Y", timeinfo);
    char nomedoarquivo[100];
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "IA %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    //Cabecalho do arq
    fprintf(arq, "ID;Pontuacao\n");
    if (arq == NULL){
        printf ("Erro!\nO arq da lista nao pode ser aberto!\n");
        getch();
        menu();
    }
    printf("\t\tArquivo %s criado com sucesso.\n",nomedoarquivo);
    fclose(arq);
    system("Pause");
    system("cls");
    menu();

}
void quiz(){
    char resposta;

        struct tm *timeinfo;
        char buffer[80];
        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);

    system("cls");

    printf("Data: %s\n", data);
    printf("Hora: %s\n", hora);
  
    timeinfo = localtime(&agora);

    strftime(buffer, sizeof(buffer), "%m-%Y", timeinfo);
    char nomedoarquivo[100];
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "IA %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

        system("cls");

        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);
    printf("Conforme as obras e historia que voce viu tem um quiz para avaliar se voce prestou atencao\n");
    getch();
    system("cls");

        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("Pergunta 1: Quem e considerado o pai da computacao?\n");
        printf("a) Alan Turing \n");
        printf("b) Elon Musk \n");
        printf("c) Steve Jobs\n");
        printf("d) Bill Gates\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "a"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e a) Alan Turing\n");
    }
    printf("Pergunta 2: Quem criou o programa Eliza?\n");
        printf("a) Alan Turing \n");
        printf("b) Bill Gates \n");
        printf("c) Joseph Weizenbaum \n");
        printf("d) Steve Wozniak\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "c"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e c) Joseph Weizenbaum\n");
    }
        printf("Pergunta 3: Qual é considerado o sitema pioneioro em inteligencia artificial?\n");
        printf("a) Eliza \n");
        printf("b) Dendral \n");
        printf("c) Chat GPT \n");
        printf("d) OpenAI \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "b"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e b) Dendral\n");
    }
        printf("Pergunta 4: Quem Foi que desenvolveu a linguagem de programacao LISP uma das principais linguagen\n para trabalhar com IA?\n");
        printf("a) John McCarthy \n");
        printf("b) Daniel Craw \n");
        printf("c) Bill Gates \n");
        printf("d) Google \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "a"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e a) John McCarthy\n");
    }
        printf("Pergunta 5: Quem foi que em 1958 propos o Perceptron, um modelo de rede neural artifical\nque introduziu uma nova abordagem para representacao de redes neurais?\n");
        printf("a) Alan Turing \n");
        printf("b) Frank Rosenblatt \n");
        printf("c) Allen Newell \n");
        printf("d) Herbert Simon \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "b"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e b) Frank Rosenblatt\n");
    }
        printf("Pergunta 6: Metodos fracos e IA Fraca foram propostos como elementos racionais mais simples\npara compor sistemas mais complexos. No inicio de que decada isso aconteceu?\n");
        printf("a) 1980 \n");
        printf("b) 1930 \n");
        printf("c) 2000\n");
        printf("d) 1970\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "d"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e d) 1970\n");
    }
        printf("Pergunta 7: O que e Machine Learning em alicacao de inteligencia artifical?\n");
        printf("a) Um hardware que rouba dados \n");
        printf("b) Capacidade de aprender e melhorar automaticamento com a experiencia\n");
        printf("c) Processamento de Linguagem Natural\n");
        printf("d) Uma placa do hardware\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "b"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e b) Capacidade de aprender e melhorar automaticamento com a experiencia\n");
    }
        printf("Pergunta 8: Qual dessas opcoes nao e uma vantagem da Inteligencia Artifical? \n");
        printf("a) Reducao do erro humano \n");
        printf("b) Decisoes mais rapidas \n");
        printf("c) Trabalha apenas 8 horas por dia \n");
        printf("d) Disponibilidade 24x7 \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "c"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e c) Trabalha apenas 8 horas por dia\n");
    }
    printf("Voce acertou %d perguntas de 8.\n", max[cont].pontuacao);

    fprintf(arq, "ID: %i\nAcertou: %i\n", max[cont].id, max[cont].pontuacao);

    cont++;
    printf("Obrigado por participar\n");
    fclose(arq);
    main();
}
void menu(){    char opcao;
    system("cls");
    do{
        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("\t\tMenu Museu Atemporal\n\n");
    printf(" 1 - Interagir\n\n 4 - Voltar\n\n0 - Criar o arquivo (necessario sempre que iniciar um dia)\n\n");
    opcao = getch();

    switch(opcao)
    {
    case '1':
        quiz();
        break;

    case '0':
        criarArquivo();
        break;

    default:
    printf("Digite uma opcao valida");
    }}while (opcao);

}
int main(){
    system("cls");
    system("title Painel da Obra");
    system("color F0");// Define a cor de plano de fundo e da fonte

        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("\n\n\t\tBem Vindo ao Museu Atemporal\n\n");
    printf("\tVeja todas as funcoes disponiveis no menu.\n");
    printf("\tUse os numeros para selecionar a opcao desejada.\n");
    printf("\tPressione qualquer tecla para continuar\n\t");
    getch();
    system("cls");
    menu();
    system("pause");
}