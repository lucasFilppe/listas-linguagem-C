#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, c;
    
    printf("Digite a quantidade de linas e colunas: ");
    scanf("%d %d", &l, &c);
    
    double** m = (double**)malloc(l * sizeof(double*));
    
    for(int i = 0; i < l; i++){
        m[i] = (double*)malloc(c *sizeof(double));
    }
    
    //le matriz
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%lf", &m[i][j]);
        }
        printf("\n");
    }
    
    //imprime matriz
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%lf ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}