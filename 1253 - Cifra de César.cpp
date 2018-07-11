// Example program
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int n, casas;
	char string[50];
	
	cin >> n;	
	while(n--){
		cin >> string;
		cin >> casas;
		for(int x = 0; x<=50; x++){
			if(string[x] == '\0')
				break;
			if((string[x] - casas) <65){
				string[x] = (string[x] - casas) + 26;
			}else{
				string[x] -= casas;
			}	
		}
	cout << string << endl; 
	}
	
}
