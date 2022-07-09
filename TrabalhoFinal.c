// Aluno: Natan da Silveira Ferreira
// DRE: 120027447

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
// A FUNÇÃO MAIN ESTÁ ABAIXO (as funções que retornam um 
//ponteiro/vetor precisam estar acima da main)


// Trabalho Final - semana 1:
int* gera_p_q(){
	
	int p = gera(30); // 30 bits é o máximo que gera 
	int q = gera(30);
	int v[2];
	v[0] = p ; v[1] = q;
	return v;
}
int gera(int b){
	// função auxiliar 
	int p, pv;
	int min = pow(2,b)-1;
	int  max = pow(2,b);
	
	srand(time(NULL));
	p=rand()%max + min;
	while(1){
		if(verifica_primo(p)){
			pv=p;
			return pv;
			break;
		}else{
			p=rand()%max + min;
		}
	}
}
int* interpreta_texto(char string[]){
	// retorna um vetor de int com cada elemento representando
	// cada caractere da string do parametro
	int tamanho, i=0;
	tamanho = strlen(string);
	int vetor[tamanho];
	while(tamanho--){
		vetor[i]= string[i];
		i++;
	}
	return vetor;
}

// MAIN:
int main(){
	int *v=interpreta_texto("natan");
	printf("%d\n%d\n%d",v[0],v[1],v[2]);
	//int *p= gera_p_q();
	//printf("%d %d",p[0],p[1]);
	return 0 ;
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

int inverso_modular(int e, int n){
	
	return 0;
}





// Trabalho Final - semana 4:
