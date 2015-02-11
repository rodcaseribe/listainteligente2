#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
    system("color f6");
    int Vetor[10] ;
    int max = 9;
    int controldec = -1;
    int opcao;
    do
    {
        system("cls");
        printf("\t\t\tRodolfo Casemiro Ribeiro RA:5200209 \n\t " );
        printf("\t\tEngenharia da Computacao              \n\t " );
 	    printf("\t\tLista Estatica c/ menu \n\t " );
	    printf("\t\t===================================\n\n\n");
	    printf("  MENU\n");
	    printf(" =========\n");
		printf("  -1  |  Inserir sequencialmente deslocando valores\n");	
	    printf("   1  |  Inserir sequencialmente ordenado\n");
	    printf("   2  |  Inserir por ID \n"); 
	    printf("   3  |  Remover\n");
	    printf("   4  |  Remover por ID\n"); 
        printf("   5  |  Consulta po ID \n");
        printf("   6  |  Substituir\n"); 
        printf("   7  |  Sair\n");        
        scanf("%d", &opcao);
        if (opcao == -1)
            {
                int id, Valor;
                printf("Digite o ID e o Valor: ");
                scanf("%d %d", &id, &Valor);
                if (id < 0)
                    printf("ID Sem Valor\n");
                else if (id > controldec + 1)
                    printf("Id Sem Valor\n");
                else
                {
                    int i;
                    for (i = controldec; i >= id; i--)
                        Vetor[i + 1] = Vetor[i];
                    controldec++;
                    Vetor[id] = Valor;
                }
                system("pause");
            }
         if (opcao == 1 || opcao == 2)
        {
            Beep(1300,300);
            if (controldec == max)
            {
                printf("Vetor Completo\n");
                system("pause");
                continue;
            }

            if (opcao == 1)
            {
                int Valor;
                printf("Informe o Valor: ");
                scanf("%d", &Valor);
                controldec++;
                Vetor[controldec] = Valor;
                system("pause");
            }
            else if (opcao == 2)
            {
                int id, Valor;
                printf("Digite o ID e o Valor: ");
                scanf("%d %d", &id, &Valor);
                if (id < 0)
                    printf("ID Sem Valor\n");
                //else if (id > controldec + 1)
                    //printf("Id Sem Valor\n");
                else 
                {
                    int i;
                    for (i = controldec; i >= id; i--)
                        Vetor[i + 1] = Vetor[i];
                    controldec++;
                    Vetor[id] = Valor;
                }
                system("pause");
            }
        }
         if (opcao == 3 || opcao == 4)
        {
            Beep(1300,300);
            if (opcao == 3)
            {
                if (controldec == -1)
                    printf("Vetor Sem Valor\n");
                else
                    controldec--;
                    
                system("pause");
            }
            else if (opcao == 4)
            {
                int id;
                printf("Digite o ID: ");
                scanf("%d", &id);
                
                if (id < 0)
                    printf("ID Sem Valor\n");
                else if (id > controldec)
                    printf("ID Sem Valor\n");
                else
                {
                    int i;
                    for (i = id; i < controldec; i++)
                    {
                        Vetor[i] = Vetor[i + 1];
                    }
                    controldec--;
                }
                system("pause");
            }
        } 
        if (opcao == 5)
        {
            Beep(1300,300);      
            int id;
            printf("Informe o ID: ");
            scanf("%d", &id);
            
            if (id < 0)
                printf("ID Sem Valor\n");
            //else if (id > controldec)
                //printf("ID Sem Valor\n");
            else
                printf("Valor do ID: %d\n", Vetor[id]);
            
            system("Pause");
        }
        else if (opcao == 6)
        {
            Beep(1300,300); 
            int id, Valor;
            printf("Informe o ID e o Valor: ");
            scanf("%d %d", &id, &Valor);
            
            if (id < 0)
                printf("ID Sem Valor\n");
            else if (id > controldec)
                printf("ID Sem Valor\n");
            else
                Vetor[id] = Valor;
            system("pause");
        }   
		                    
    } 
    while (opcao != 0);
    system("Pause");
    return 0;
}

