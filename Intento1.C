include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *frase, palabra[10][20];
  char salida[10][20];
  char *pch=NULL;
  char *ar[10];
  int i=0;

  int n=0;
  frase=(char*)malloc(sizeof(char)*100);
  printf("ingrese una frase\n");
  fgets(frase, 100, stdin);
  pch = strtok(frase, " \n,.;");
  int m = 0;
  while (pch != NULL)
    {
      ar[m++] = pch;
      pch = strtok (NULL, " \n,.;");
    }
  for(int j=0;j<m;j++);
    printf("la frase dividida es" (strcmp(ar[j+10];
 printf("Ingrese el número de palabras a buscar:\n");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Ingrese la palabra %d: ", i+1);
        scanf("%s", palabra[i]); 
    }

    for (i = 0; i < n; i++) {
        for (m = 0; m < 10; m++) {
            if (strcmp(ar[i+10], palabra[m]) == 0) {
                strcpy(salida[i], palabra[m]);
                break;
            }
        }
    }

    printf("Palabras encontradas:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", salida[i]);
    }

    free(frase); 
    return 0;
}
