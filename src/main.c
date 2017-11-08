/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int prime(int num){
	
	if(num == 1) return 0;
	if(num == 2) return 1;
	if(num % 2 == 0) return 0;
	
	for(int i = 3; i <= num/2; i+= 2){
		
		if ((num % i) == 0) return 0;
	}
	return 1;
}

int main() {

	int num_in;
  FILE *sort;
  
  sort = popen("sort -n -r", "w");
  
  
  while(scanf("%d\n", &num_in) != EOF){
  	
  	if(num_in == -1) break;
  	
  	else{
  	
  		if((prime(num_in) == 0)) fprintf(sort, "%d\n", num_in);
  	}
  	  
  }
  
  pclose(sort);
    
  return 0;
}
