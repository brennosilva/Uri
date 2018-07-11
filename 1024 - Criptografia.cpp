// Example program
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string entrada, inverso;    	  
	int cont,x;		
	do{
		scanf("%d\n", &cont);
		getline(cin,entrada);
		x=entrada.length() - 1;
		inverso = entrada; 		
	    for(int i=0; i<=entrada.length(); i++){    	
	        if(isupper(entrada[i]) || islower(entrada[i]))  {
	            entrada[i] += 3;  			  
			}       
			inverso[x] = entrada[i]; x--;  
	    }
	    for(int i=(entrada.length()/2); i<=entrada.length(); i++){	    	
	    		inverso[i] -= 1; 						
		}
	    cout << inverso << endl;
	    cont--;
	}while(cont!=0);
}
