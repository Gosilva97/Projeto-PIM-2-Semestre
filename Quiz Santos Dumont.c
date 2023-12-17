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
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Santos Dumont %s.csv", buffer);
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
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Santos Dumont %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

        system("cls");

        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);
    printf("Conforme as obras e historia que voce viu tem um quiz para avaliar se voce prestou atencao\n");
    getch();
    system("cls");

        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("Pergunta 1: Qual o modelo do aviao Santos Drummond utilizou?\n");
        printf("a) 14bis \n");
        printf("b) 1419 \n");
        printf("c) flyer1\n");
        printf("d) 747\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "a"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e a) 14bis\n");
    }
    printf("Pergunta 2: Qual foi o equipamento que Santos Dumont modificou trazendo melhoria e qualidade de vida?\n");
        printf("a) Telegrafo \n");
        printf("b) Relógio de Pulso \n");
        printf("c) Chuveiro Aquecido a alcool\n");
        printf("d) Cadeira de Balanço\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "c"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e c) Chuveiro Aquecido a alcool\n");
    }
        printf("Pergunta 3: Qual foi a data do primeiro voou do 14 bis?\n");
        printf("a) 12 de novembro de 1906 \n");
        printf("b) 23 de outubro de 1906 \n");
        printf("c) 4 de janeiro de 1907 \n");
        printf("d) 25 de dezembro de 1905 \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "b"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e b) 23 de outubro de 1906\n");
    }
        printf("Pergunta 4: Em que ano Santos Dumont criou seu dirigivel?\n");
        printf("a) 1901 \n");
        printf("b) 1903 \n");
        printf("c) 1898 \n");
        printf("d) 1893 \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "c"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e c) 1898\n");
    }
        printf("Pergunta 5: Onde Santos Dumont nasceu?\n");
        printf("a) Cabangu \n");
        printf("b) Dourado \n");
        printf("c) Belo Horizonte \n");
        printf("d) Montes Claros \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "a"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e a) Cabangu\n");
    }
        printf("Pergunta 6: Onde Santos Dumont morreu?\n");
        printf("a) Belo Horizonte \n");
        printf("b) Paris \n");
        printf("c) Rio de Janeiro\n");
        printf("d) Guaruja\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "d"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e d) Guaruja\n");
    }
        printf("Pergunta 7: Quem era os pais de Santos Dumont?\n");
        printf("a) Henrique Dumont e Francisca de Paula Santos \n");
        printf("b) Paulo Dumont e Francisca de Paula Santos \n");
        printf("c) Henrico Paulo Dumont e Camile Santos Dumont \n");
        printf("d) Alessandro Santos Dumont e Maria Antonieta Dumont\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "a"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e a) Henrique Dumont e Francisca de Paula Santos\n");
    }
        printf("Pergunta 8: Qual era o nome completo de Santos Dumont? \n");
        printf("a) Alessandro Santos Dumont \n");
        printf("b) Antonio Santos Dumont \n");
        printf("c) Jose Santos Dumont \n");
        printf("d) Alberto Santos Dumont\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "d"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e d) Alberto Santos Dumont\n");
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