#include <stdio.h>

#define col 3
#define fil 3

int main(){
    int matriz[fil][col];

    for(int i;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Ingrese el numero de la posicion %d, %d : ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i=0;i<fil;i++){
        for (int j=0;j<col;j++){
            printf("%d ",matriz[i][j]);
            if(j==col-1){
                printf("\n");
            }
        }
    }

    return 0;
}