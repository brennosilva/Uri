#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char numero[1110];
	int n, soma;
	scanf("%d", &n);
	for (int i = 0; i<n; i++){
	    scanf("%s", numero);
	    int t = strlen(numero);
	    for(int x=0; x < t; x++){	        
	        if(numero[x] == '1'){
	            soma += 2;    
	            
	        }else if(numero[x] == '2'){
	            soma += 5;    
	            
	        }else if(numero[x] == '3'){
	            soma += 5;    
	            
	        }else if(numero[x] == '4'){
	            soma += 4;    
	            
	        }else if(numero[x] == '5'){
	            soma += 5;    
	            
	        }else if(numero[x] == '6'){
	            soma += 6;    
	            
	        }else if(numero[x] == '7'){
	            soma += 3;    
	            
	        }else if(numero[x] == '8'){
	            soma += 7;    
	            
	        }else if(numero[x] == '9'){
	            soma += 6;    
	            
	        }else if(numero[x] == '0'){
	            soma += 6;  	            
	        }
	    }
	    printf("%d leds\n", soma);
	    soma = 0;
	}
    
	
	
}