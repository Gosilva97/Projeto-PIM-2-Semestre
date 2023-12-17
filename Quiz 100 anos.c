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
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "100 anos de arte moderna %s.csv", buffer);
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
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "100 anos de arte moderna %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

        system("cls");

        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);
    printf("Conforme as obras e historia que voce viu tem um quiz para avaliar se voce prestou atencao\n");
    getch();
    system("cls");

        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("Pergunta 1: A semana de Arte Moderna foi criada com influencia de qual movimento artistico?\n");
        printf("a) Futurismo \n");
        printf("b) Impressionismo \n");
        printf("c) Cubismo \n");
        printf("d) Modernismo \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "d"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e d) Modernismo\n");
    }
    printf("Pergunta 2: Qual era a intencao com movimento do modernismo?\n");
        printf("a) Segmentar a Alta Cultura \n");
        printf("b) Renovacao das Artes  \n");
        printf("c) Expressao da arte europeia\n");
        printf("d) Exaltar a arte classica\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "b"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e b) Renovacao das Artes\n");
    }
        printf("Pergunta 3: Quem viabilizou o movimento da Semana da Arte Moderna?\n");
        printf("a) Luis de Camoes \n");
        printf("b) Washington Luis \n");
        printf("c) Paulo Prado \n");
        printf("d) Frida Kahlo \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "c"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e c) Paulo Prado\n");
    }
        printf("Pergunta 4: Quem pintou a obra “Abapuru”?\n");
        printf("a) Tarsila do Amaral \n");
        printf("b) Di Cavalcante  \n");
        printf("c) Victor Brecheret  \n");
        printf("d) Anita Malfati  \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "a"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e a) Tarsila do Amaral\n");
    }
        printf("Pergunta 5: A semana da Arte Moderna em 1922 despertou a renovacao artistica brasileira ao ponto de ser\ninfluencia na criacao de qual genero musical?\n");
        printf("a) Samba  \n");
        printf("b) Bossa Nova  \n");
        printf("c) Punk Rock  \n");
        printf("d) Jazz  \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "b"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e b) Bossa Nova\n");
    }
        printf("Pergunta 6: Onde foi realizada a Semana da Arte Moderna?\n");
        printf("a) MIS  \n");
        printf("b) MASP \n");
        printf("c) Teatro Municipal \n");
        printf("d) Museu de Arte Sacra \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "c"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e c) Teatro Municipal\n");
    }
        printf("Pergunta 7: Qual foi o movimento criado apos a Semana de Arte Moderna de 1922 que tinha o objetivo e\n acreditava que a arte brasileira deveria ser exportada?\n");
        printf("a) Barroco  \n");
        printf("b) Pau Brasil \n");
        printf("c) Fauvismo \n");
        printf("d) Abstracionismo\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "b"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e b) Pau Brasil\n");
    }
        printf("Pergunta 8: Em qual semana e celebrada a Semana da Arte Moderna? \n");
        printf("a) 27 a 30 de junho \n");
        printf("b) 25 a 31 de dezembro \n");
        printf("c) 13 a 17 de fevereiro \n");
        printf("d) 2 a 9 de abril\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "c"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e c) 13 a 17 de fevereiro\n");
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