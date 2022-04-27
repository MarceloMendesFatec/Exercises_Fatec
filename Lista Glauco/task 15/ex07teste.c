#include <tchar.h>
#include <stdio.h>
#include <stdbool.h>

int _tmain(int argc, _TCHAR* argv[])
{
bool bExit = false;

//var declaration
int lin,col,tab[4][4],
 
    ii = 0,
    jj = 0,
    contador = 0;


//calc

for (lin = 0; lin < 4; lin++)
{
    for (col = 0; col < 4; col++)
    {
        if (lin != 0 || col != 0)
        {
            do
            {
                printf("%d %d-> ", lin, col);
                scanf("%d", &tab[lin][col]);
                int temp = contador;
                bool numeroRepetido = false;

                for (ii = 0; ii < 4; ii++)
                {
                    for (jj = 0; jj < 4; jj++)
                    {
                        if (tab[lin][col] == tab[ii][jj])
                        {
                            printf("Numero repetido em [%d,%d],contador=%d \n", ii,jj,contador);
                            ii = 5;
                            jj = 5;
                            bExit = true;
                            numeroRepetido = true;
                        }

                        temp--;

                        if (temp == 0)
                        {
                            ii = 5;
                            jj = 5;
                        }
                    }
                }

                if (!numeroRepetido)
                {
                    contador++;
                    bExit = false;
                }

            } while (bExit);
        }
        else
        {
            printf("%d %d -> ", lin, col);
            scanf("%i", &tab[lin][col]);
            contador++;
        }
    }
}

// output
printf("\n");
for (lin = 0; lin < 4; lin++)
{
    for (col = 0; col < 4; col++)
    {
        printf("\t %d ", tab[lin][col]);
    }
    printf("\n");
}



return 0;
}
