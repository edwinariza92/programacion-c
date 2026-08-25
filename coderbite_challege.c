#include <stdio.h> 
#include <string.h>
#include <ctype.h>

void LongestWord(char * sen) {
  int longitudActual = 0;
  int longitudMaxima = 0;
  int inicioMaxima;
  int i;
  for (i = 0; sen[i] != '\0'; i++)
  {
    if (isalnum(sen[i]))
    {
        longitudActual ++;
    }
    else if (longitudActual>longitudMaxima)
    {
        longitudMaxima = longitudActual;
        inicioMaxima = i - longitudActual;
        longitudActual = 0;
    }  
  }
  if (longitudActual > longitudMaxima)
  {
    longitudMaxima = longitudActual;
    inicioMaxima = i - longitudActual;
    longitudActual = 0;
  }
  
printf("%.*s", longitudMaxima, sen + inicioMaxima);
  

}

int main(void) {
   LongestWord("fun&!! time");     // Esperado: time
   printf("\n");
   LongestWord("I love dogs");     // Esperado: love
   printf("\n");
   return 0;
}
