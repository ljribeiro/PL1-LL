#include <stdio.h>

int main(void) {
  int l, c, i, j, centroL, centroC, extraL, extraC;
  //quantas colunas tem?
  printf("Quantas linhas tem a matriz? ");
  scanf ("%d", &l);
  printf("Quantas colunas tem a matriz? ");
  scanf("%d", &c);
  //criar matriz
  int mat[l][c];
  //encher aquilo
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      printf("Qual está na posição %d, %d: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
  //linhas par
  if(l%2==0){
    //linha par coluna par
    if(c%2==0){
      centroL=l/2;
      centroC=c/2;
      extraL=centroL-1;
      extraC=centroC-1;
      printf("Colunas pares e linhas pares, com centro de %d, %d, %d e %d.\n", mat[extraL][extraC], mat[extraL][centroC], mat[centroL][extraC], mat[centroL][centroC]);
    }
    //linha par & coluna impar
    else{
      centroL=l/2;
      centroC=c/2;
      extraL=centroL-1;
      printf("Colunas ímpares e linhas pares, com centro de %d e %d.\n", mat[extraL][centroC], mat[centroL][centroC]);
    }
  }
  //linhas impar
  else{
    //linha impar coluna impar
    if(c%2!=0){
      centroL=l/2;
      centroC=c/2;
      printf("Colunas e Linhas impares, com centro de %d.\n", mat[centroL][centroC]);
    }
    //linha impar coluna par
    else{
      centroL=l/2;
      centroC=c/2;
      extraC=centroC-1;
      printf("Colunas pares e linhas ímpares, com centro de %d e %d.\n", mat[centroL][extraC], mat[centroL][centroC]);
    }
  }
  return 0;
}
