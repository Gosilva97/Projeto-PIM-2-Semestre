/*Projeto PIM no 2º Semestre de 2023
de: Bruno Apolinario, Felipe Cesar, Guilherme Oliveira, Iuri Placido, Stefanny Almeida*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#define TAM 100000

typedef struct pessoa{
    char nome[60];
    char documento[20];
    int idade;
    char fone[15];
    char email[100];
    int quantidade;
    float valor;
    int status1;    //100 anos da semana de arte moderna
    int status2;    //150 anos de Santos Dumont
    int status3;    //Jogos olimpicos de Paris 2024
    int status4;    //Avanco da Inteligencia Artificial
}visitantes;

//Prototipos
    void sobre();
    void menu();
    void lista();
    void identificar();
    void umasessao();
    void duassessoes();
    void tressessoes();
    void pagamento();
    void formadepagamento();
    char addcompra();
    void criarArquivo();

//Variaveis globais
    FILE *arq;
    int cont=1;
    visitantes max[TAM];
    float ingresso = 10.00;
    char data[80];
    char hora[80];
    const char*expo1 = "100 anos da semana de arte moderna";
    const char*expo2 = "150 anos de Santos Dumont";
    const char*expo3 = "Jogos olimpicos de Paris 2024";
    const char*expo4 = "Avanco da Inteligencia Artificial";


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
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Relatorio do Mes %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    //Cabecalho do arq
    fprintf(arq, "ID;NOME;DOCUMENTO;IDADE;EMAIL;TELEFONE;QUANTIDADE;EXPOSICOES;TIPO;VALOR;%s;%s;%s;%s;HORA\n", expo1, expo2, expo3, expo4);
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
void identificar(void){
    
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
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Relatorio do Mes %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    if (arq == NULL){
        printf ("Erro!\nO arq da lista nao pode ser aberto!\n");
        getch();
        menu();
    }else{

        printf ("ID: %i\n\n", cont);
        printf (" Digite o Nome: ");
        scanf("%s", &max[cont].nome);
        getchar();
        printf (" Digite o Documento: ");
        scanf("%s", &max[cont].documento);
        getchar();
        printf (" Digite a Idade: ");
        scanf("%d", &max[cont].idade);
        getchar();
        printf (" Digite o Celular: ");
        scanf("%s", &max[cont].fone);
        getchar();
        printf (" Digite o E-mail: ");
        scanf("%s", &max[cont].email);
        getchar();
        printf ("Quantas Sessoes: (Max. 4)");
        scanf("%d", &max[cont].quantidade);
        getchar(); 

        fprintf(arq, "%i;", cont);
        fprintf(arq, "%s;", max[cont].nome);
        fprintf(arq, "%s;", max[cont].documento );
        fprintf(arq, "%d;", max[cont].idade );
        fprintf(arq, "%s;", max[cont].email );
        fprintf(arq, "%s;", max[cont].fone );
        fprintf(arq, "%d;", max[cont].quantidade );
        
        fclose(arq);
 
        switch (max[cont].quantidade)
        {
        case 1:
            umasessao();
            break;
        case 2:
            duassessoes();
            break;
        case 3:
            tressessoes();
            break;
        case 4:

            max[cont].status1 = 1;  max[cont].status2 = 1;  max[cont].status3 = 1; max[cont].status4 = 1;

            fprintf(arq, "%s, %s, %s e %s;", expo1, expo2, expo3, expo4);
            pagamento();
            break;
        default:
        printf("Digite uma opcao valida");
            break;
        }

        FILE *arq = fopen(nomedoarquivo, "a");

        fprintf(arq, "%i;", max[cont].status1 );
        fprintf(arq, "%i;", max[cont].status2 );
        fprintf(arq, "%i;", max[cont].status3 );
        fprintf(arq, "%i;", max[cont].status4 );
        fprintf(arq, "%s;", hora);
        fprintf(arq,"\n");
        printf("\n Compra efetuada com sucesso ");

        cont++;
        fclose(arq);
        addcompra();
}}
//Comprar mais
char addcompra(){

    system("cls");

    char op;

        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("\n Deseja comprar mais? [S ou N]?\n" );
    op = getch();
    switch (op)
    {
    case 's':
        return op;
        break;
    case 'n':
        printf("\n Obrigado ");
        getch();
        main();
        break;
    default:
        printf("Digite uma opcao valida");
        break;
    }
}
//Compra de uma exbicao
void umasessao(){
    int umop = 1;

    system("cls");

        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);
    
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%m-%Y", timeinfo);
    char nomedoarquivo[100];
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Relatorio do Mes %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    printf("\n\nMenu de Exposicao\n\n");
    printf("1. %s\n",expo1);
    printf("2. %s\n",expo2);
    printf("3. %s\n",expo3);
    printf("4. %s\n",expo4);
    scanf("%i", &umop);

    switch (umop)
    {
        case 1:
            max[cont].status1 = 1;  max[cont].status2 = 0;  max[cont].status3 = 0; max[cont].status4 = 0;
            printf("Ingresso para %s", expo1);
            fprintf(arq, "%s;", expo1);
            break;

        case 2:
            max[cont].status1 = 0;  max[cont].status2 = 1;  max[cont].status3 = 0; max[cont].status4 = 0;
            printf("Ingresso para %s", expo2);
            fprintf(arq,"%s;", expo2);
            break;

        case 3:
            max[cont].status1 = 0; max[cont].status2 = 0; max[cont].status3 = 1; max[cont].status4 = 0;
            printf("Ingresso para %s", expo3);
            fprintf(arq, "%s;", expo3);
            break;

        case 4:
            max[cont].status1 = 0; max[cont].status2 = 0; max[cont].status3 = 0; max[cont].status4 = 1;
            printf("Ingresso para %s", expo4);
            fprintf(arq, "%s;", expo4);
            break;

        default:
            printf("Digite uma opcao valida");
            break;
    }
    fclose(arq);
    pagamento();
}
//Compra de 2 exbicoes
void duassessoes(){
    int doop = 1;

    system("cls");

        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);
    
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%m-%Y", timeinfo);
    char nomedoarquivo[100];
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Relatorio do Mes %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    printf("\n\tMenu de Exposicao\n\n");
    printf("1. %s e %s\n", expo1, expo2);
    printf("2. %s e %s\n", expo1, expo3);
    printf("3. %s e %s\n", expo1, expo4);
    printf("4. %s e %s\n", expo2, expo3);
    printf("5. %s e %s\n", expo2, expo4);
    printf("6. %s e %s\n", expo3, expo4);

    scanf("%i", &doop);

        switch(doop)
    {
        case 1:
            max[cont].status1 = 1; max[cont].status2 = 1; max[cont].status3 = 0; max[cont].status4 = 0;
            printf("%s e %s\n", expo1, expo2);
            fprintf(arq, "%s e %s;", expo1, expo2);
            break;

        case 2:
             max[cont].status1 = 1; max[cont].status2 = 0; max[cont].status3 = 1; max[cont].status4 = 0;
            printf("%s e %s\n", expo1, expo3);
            fprintf(arq, "%s e %s;", expo1, expo3);
            break;

        case 3:
            max[cont].status1 = 1; max[cont].status2 = 0; max[cont].status3 = 0; max[cont].status4 = 1;
            printf("%s e %s\n", expo1, expo4);
            fprintf(arq, "%s e %s;", expo1, expo4);
            break;

        case 4:
             max[cont].status1 = 0; max[cont].status2 = 1; max[cont].status3 = 1; max[cont].status4 = 1;
            printf("%s e %s\n", expo2, expo3);
            fprintf(arq, "%s e %s;", expo2, expo3);
            break;

        case 5:
            max[cont].status1 = 0; max[cont].status2 = 1; max[cont].status3 = 0; max[cont].status4 = 1;
            printf("%s e %s\n", expo2, expo4);
            fprintf(arq, "%s e %s;", expo2, expo4);
            break;

        case 6:
            max[cont].status1 = 0; max[cont].status2 = 0; max[cont].status3 = 1; max[cont].status4 = 1;
            printf("%s e %s\n", expo3, expo4);
            fprintf(arq, "%s e %s;", expo3, expo4);
            break;

        default:
            printf("Digite uma opcao valida");
            break;
    }
    fclose(arq);
    pagamento();
}
//Compra de 3 exbicoes
void tressessoes(){
    int trop = 1;

    system("cls");

        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora); 

    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%m-%Y", timeinfo);
    char nomedoarquivo[100];
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Relatorio do Mes %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");


    printf("\n\tMenu de Exposicao\n\n");
    printf("1. %s, %s e %s\n", expo1, expo2, expo3);
    printf("2. %s, %s e %s\n", expo1, expo2, expo4);
    printf("3. %s, %s e %s\n", expo1, expo3, expo4);
    printf("4. %s, %s e %s\n", expo2, expo3, expo4);

    scanf("%i", &trop);

    switch(trop)
    {
        case 1:
            max[cont].status1 = 1; max[cont].status2 = 1; max[cont].status3 = 1; max[cont].status4 = 0;
            printf("%s, %s e %s\n", expo1, expo2, expo3);
            fprintf(arq,"%s, %s e %s;", expo1, expo2, expo3);
            break;

        case 2:
            max[cont].status1 = 1; max[cont].status2 = 1; max[cont].status3 = 0; max[cont].status4 = 1;
            printf("%s, %s e %s\n", expo1, expo2, expo4);
            fprintf(arq, "%s, %s e %s;", expo1, expo2, expo4);
            break;

        case 3:
             max[cont].status1 = 1; max[cont].status2 = 0; max[cont].status3 = 1; max[cont].status4 = 1;
            printf("%s, %s e %s\n", expo1, expo3, expo4);
            fprintf(arq, "%s, %s e %s;", expo1, expo3, expo4);
            break;

        case 4:
            max[cont].status1 = 0; max[cont].status2 = 1; max[cont].status3 = 1; max[cont].status4 = 1;
            printf("%s, %s e %s\n", expo2, expo3, expo4);
            fprintf(arq,"%s, %s e %s;", expo2, expo3, expo4);
            break;

        default:
            printf("Digite uma opcao valida");
            break;
    }
    fclose(arq);
    pagamento();
}
//Pagamento
void pagamento(){
    int tipoing = 1;

    system("cls");

        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%m-%Y", timeinfo);
    char nomedoarquivo[100];
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Relatorio do Mes %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    printf("\n\tMenu de Exposicao\n\n");
    printf("Qual tipo de ingresso?\n\n");
    printf("1. Inteira\n");
    printf("2. Meia\n");
    printf("3. Gratuidade (Terá verificacao na entrada)\n\n");

    scanf("%i", &tipoing);

    switch (tipoing)
    {
    case 1:
        (max[cont].valor) = (ingresso * (max[cont].quantidade));
        printf("Valor a ser pago R$ %.2lf\n", (max[cont].valor));
        fprintf(arq, "Inteira;");
        formadepagamento();
        break;
    case 2:
        (max[cont].valor) = (ingresso * (max[cont].quantidade)*0.5);
        printf("Valor a ser pago R$ %.2lf\n", (max[cont].valor));
        fprintf(arq, "Meia;");
        formadepagamento();
        break;
    case 3:
        (max[cont].valor) = 0;
        printf("Gratuito");
        fprintf(arq, "Gratuito;");
        fprintf(arq, "%.2lf;", max[cont].valor );
        break;

    default:
        printf("Digite uma opcao valida");
        break;
    }
    fclose(arq);
}
//Forma de pagamento
void formadepagamento(){
    int forma = 1;
    float pago;
    float troco;

    system("cls");

        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%m-%Y", timeinfo);
    char nomedoarquivo[100];
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Relatorio do Mes %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    printf("\n\tMenu de Exposicao\n\n");
    printf("Qual modalidade de Pagamento\n\n");
    printf("1. Pix\n");
    printf("2. Cartao de Credito\n");
    printf("3. Cartao de Debito\n");
    printf("4. Dinheiro\n");// (Funcao disponivel apenas para caixa fisico e nao auto atendimento)

    scanf("%i", &forma);

    switch (forma)
    {
    case 1:
        printf("Valor a ser pago R$ %.2lf\n", (max[cont].valor));
        printf("\t\tAguardando pagamento\n");
        system("pause");
        printf("\t\tPagamento Aprovado\n");
        fprintf(arq, "%.2lf;", max[cont].valor );

        break;
    case 2:
        printf("Valor a ser pago R$ %.2lf\n", (max[cont].valor));
        printf("\t\tAguardando pagamento\n");
        system("pause");
        printf("\t\tPagamento Aprovado\n");
        fprintf(arq, "%.2lf;", max[cont].valor );

        break;
    case 3:
        printf("Valor a ser pago R$ %.2lf\n", (max[cont].valor));
        printf("\t\tAguardando pagamento\n");
        system("pause");
        printf("\t\tPagamento Aprovado\n");
        fprintf(arq, "%.2lf;", max[cont].valor );

        break;
    case 4:
        printf("Valor a ser pago R$ %.2lf\n", (max[cont].valor));
        printf("\t\tValor pago\n");
        scanf("%f", &pago);
        troco = (pago - max[cont].valor);
        system("pause");
        printf("\t\tTroco R$ %.2lf", troco);
        printf("\t\tPagamento Aprovado\n");
        fprintf(arq, "%.2lf;", max[cont].valor );

        break;



    default:("Digite uma opcao valida");
        break;
    }

        fclose(arq);
}
//Lista das Exposicoes
void lista(){
    system("cls");

        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("Sessoes Disponiveis\n\n");
    printf("\t\t%s\n\t\t%s\n\t\t%s\n\t\t%s\n", expo1, expo2, expo3, expo4);
    printf("\t\tPressione qualquer teclar para voltar ao menu");
    getch();
    menu();
}
//Sobre o Museu
void sobre(){
    system("cls");

        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("\t\tMuseu Atemporal\n\n\n");
    printf("O Museu Atemporal tem como missao(missao pegar o do grupo)\n\n");
    printf("\tProjeto de:\n\tBruno Apolinario\n\tFelipe Cesar\n\tGuilherme Oliveira\n");
    printf("\tIuri Placido\n\tStefanny Almeida\n");
    printf("\t\tPressione qualquer teclar para voltar ao menu");
    getch();
    menu();
}
//Menu Principal
void menu(){
    char opcao;
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
    printf(" 1 - Comprar\n\n 2 - Lista de Exposicoes\n\n 3 - Sobre o Museu\n\n 4 - Voltar\n\n0 - Criar o arquivo (necessario sempre que iniciar um dia)\n\n");
    opcao = getch();

    switch(opcao)
    {
    case '1':
        identificar();
        break;

    case '2':
        lista();
        break;

    case '3':
        sobre();
        break;

    case '4':
        main();
        break;

    case '0':
        criarArquivo();
        break;

    default:
    printf("Digite uma opcao valida");
    }}while (opcao);
}
//Main Inicial e Configurado
int main(){
    system("cls");
    system("title Painel de Compra");
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
    menu();
    system("pause");
}