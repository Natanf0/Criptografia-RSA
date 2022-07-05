// Aluno: Natan da Silveira Ferreira
// DRE: 120027447

#include<stdio.h>
#include<stdbool.h>

int main(){
	int x;
	scanf("%d",&x);
	printf("%d",verifica_primo(x));
	return 0 ;
}

// Trabalho Final - semana 1:
int gera_p_q(int b){
	int vet[2];
	
	return 0;
	
}

int mdc(int g, int q){
	int resto;
	while(q!=0){
		resto=g%q;
		g=q;
		q=resto;
	}
	return g;
}



// Trabalho Final - semana 2:

int numero_div(int n){
	// Função auxiliar 
	int cont=0, i=1;
	while(i<=n){
		if(n%i==0){
			cont++;
			if(cont>2) break;
		}
		i++;
	}
	return cont;
}
int verifica_primo(int j){
	int div_j;
	div_j = numero_div(j);
    	if(div_j==2){
    		return 1 ;
		}else{
			return 0;
		}
	
}





// Trabalho Final - semana 3:






// Trabalho Final - semana 4:
