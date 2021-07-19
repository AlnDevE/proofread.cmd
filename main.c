#include <stdio.h>
#include <stdlib.h>


 struct Aluno{
        char nome[256];
        int num_alu;
        char respostas[51];

    }; typedef struct Aluno alunos;

int main()
{
    int op,corretas;
    float tam,aux,nota;
    char gabarito[51];
    alunos aluno;
    printf("| proofread.cmd |   CADASTRAR GABARITO \n\n\n");
    printf("Digite a quantidade de questoes (Max 50):  ");
    scanf("%f",&tam);
    aux=10/tam;
    fflush(stdin);
        if (tam<=0){
            printf("\nErro o tamanho deve ser superior a 0\7\n\n");
            system("PAUSE");
        }
        else{
            for (int i=0;i<tam;i++){
        system("cls");
        printf("| GABA-CMD |\n\n");
        printf("Questao %d \nDigite a resposta: ",i+1);
        scanf("%c", &gabarito[i]);
            if(gabarito[i]!='a'&& gabarito[i]!='b' && gabarito[i]!='c' && gabarito[i]!='d'&& gabarito[i]!='e'){
            printf("\n\7ERRO, A resposta cadastrada nao deve ser diferente de (a,b,c,d,e)\n\n");
            i-=1;
        system("pause");
        }
        fflush(stdin);
        }}
    do{
    system("cls");
    printf("| proofread.cmd |\n\n\n1. Corrigir Prova\n2. Sair\n\nDigite uma opcao: ");
    scanf("%d",&op);
    fflush(stdin);
    system("cls");
    switch(op){

    case 1:
    corretas=0;
    printf("Digite o Nome do Aluno: ");
    scanf("%s",&aluno.nome);
    fflush(stdin);
    printf("\nDigite o numero da matricula: ");
    scanf("%d",&aluno.num_alu);
    fflush(stdin);
    system("cls");

        for(int i=0;i<tam;i++){
        printf("| proofread.cmd |\n\n");
        printf("Questao %d \nDigite a resposta: ",i+1);
        scanf("%c",&aluno.respostas[i]);
        if(aluno.respostas[i]!='a'&& aluno.respostas[i]!='b' && aluno.respostas[i]!='c' && aluno.respostas[i]!='d'&& aluno.respostas[i]!='e'){
            printf("\n\7ERRO, A resposta digitada nao deve ser diferente de (a,b,c,d,e)\n\n");
            i-=1;
        system("pause");
        }
        fflush(stdin);
        system("cls");
        }
        for(int j=0;j<tam;j++){
                if (aluno.respostas[j]==gabarito[j]){
                    corretas+=1;

        }}
        nota=aux*corretas;
        printf("| GABA-CMD |\n\n");
        printf("Nome do aluno: %s\nNumero da Matricula: %d\nQuestoes Corretas: %d\n\n | NOTA: %.1f |\n\n",aluno.nome,aluno.num_alu,corretas,nota);

        FILE*pointer = fopen("aluno.txt","a+");

    fprintf(pointer, "Nome: %s Matrícula: %d Nota: %.1f\n",aluno.nome,aluno.num_alu,nota);
    fclose(pointer);
    system("PAUSE");
    break;

    case 2:
        op=2;
    break;

        }} while(op!=2);


}
