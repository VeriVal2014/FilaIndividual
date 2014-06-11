#include <stdio.h>
#define MAX 50

int fila[MAX];
int calda = - 1;
int cabeca = - 1;

main()
{
	int op;
	while (1)
	{
	    system("cls");
		printf("1.Inserir elemento na fila \n");
		printf("2.Deletar elemento na fila \n");
		printf("3.Imprimir fila \n");
		printf("4.Imprimir primeiro da fila \n");
		printf("0.Sair \n");
		printf("Digite sua opcao : ");
		scanf("%d", &op);
		switch (op)
		{
			case 1:
                inserir();
                break;
			case 2:
                deletar();
                break;
			case 3:
                imprimir();
                break;
			case 4:
                imprimirPrimeiro();
                break;
			case 0:
                exit(1);
			default:
                printf("\nOpcao invalida! \n\n");
                getch();
                break;
		}
	}
}

inserir()
{
	int add_item;
	if (calda == MAX - 1)
		printf("\nFila cheia \n\n");
	else
	{
		if (cabeca == - 1)
/*If queue is initially empty */
			cabeca = 0;
		printf("\nInserir elemento na fila : ");
		scanf("%d", &add_item);
		calda = calda + 1;
		fila[calda] = add_item;
		printf("Elemento %d inserido na fila", add_item);
		printf("\n");
		getch();
	}
}

deletar()
{
	if (cabeca == - 1 || cabeca > calda)
	{
		printf("\nFila Vazia \n\n");
		getch();
		return ;
	}
	else
	{
		printf("\nElemento deletado : %d\n\n", fila[cabeca]);
		cabeca = cabeca + 1;
		getch();
	}
}

imprimir()
{
	int i;
	if (cabeca == - 1){
		printf("\nFila Vazia! \n\n");
		getch();
	}
	else
	{
		printf("\nFila: \n");
		for (i = cabeca; i <= calda; i++)
			printf("%d ", fila[i]);
		printf("\n\n");
		getch();
	}

}

imprimirPrimeiro()
{
	int i;
	if (cabeca == - 1){
		printf("\nFila Vazia! \n\n");
		getch();
	}
	else
	{
		printf("\nPrimeiro da Fila: \n");
            i = cabeca;
			printf("%d ", fila[i]);
		printf("\n\n");
		getch();
	}

}
