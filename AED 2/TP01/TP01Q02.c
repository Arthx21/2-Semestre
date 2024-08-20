#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
  bool parada = true;
  char palavra[300];
  int tamanho;
  char x = 'x';

  while (parada) {

    fgets(palavra, 300, stdin);

    if (palavra[0] == 'F' && palavra[1] == 'I' && palavra[2] == 'M' )
    {
      parada = false;
    }
    else
    {
      bool resp = true;

      tamanho = strlen(palavra) - 1;
      int j = tamanho - 1;
      tamanho = tamanho / 2;

      for (int i = 0; i < tamanho; i++)
        {
          if (palavra[i] != palavra[j])
          {
            resp = false;
          }
          j--;
        }

      if (resp)
      {
        printf ("SIM\n");
      } else {
        printf ("NAO\n");
      }

    }
  }
  return 0;
}
