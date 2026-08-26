#include <stdio.h> 
#include <string.h>

void LongestWord(char * str) {
  int longitudActual = 0;
  int longitudMaxima = 0;
  int inicioMaxima;
  int i;
  for (i = 0; str[i] != '\0'; i++)
  {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
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
printf("%d",longitudMaxima);
  
  

}

int main(void) {
   LongestWord("hello world");     // Esperado: time
   printf("\n");
   LongestWord("a bb ccc");     // Esperado: love
   printf("\n");
   LongestWord("programming is fun");     // Esperado: love
   printf("\n");
   LongestWord("");     // Esperado: love
   printf("\n");
    LongestWord("   ");     // Esperado: love
   printf("\n");
   return 0;
}
