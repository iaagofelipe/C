#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
	char name[100];
	unsigned int matricula;
	char curso[100];
};

int main(){
	struct Aluno alunos[5];
	struct Aluno estudante;

/*
* struct Aluno alunos[5];
* struct Aluno estudante;
* strcpy(estudante.name, "afonso");
* estudante.matricula = 001;
* strcpy(estudante.curso, "Ciência da computação");
* printf("%s/n", estudante.name);
* alunos[0] = estudante;	
*/ 

for (int i = 0; i<5; i++){
	printf("Digite seu nome: ");
	fgets(estudante.name, 100, stdin);

	printf("Digite sua matrícula: ");
	scanf("%d", &estudante.matricula);
	setbuf(stdin, NULL);

	printf("Digite seu curso ");
	fgets(estudante.curso, 100, stdin);
	alunos[i] = estudante;
}

return 0;
}

