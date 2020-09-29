#include<iostream>

using namespace std;
int  main(){
	int a[20],tamanho , inservlr, inicio, fim, meio, result, searchvalue, value;
	
 	cout << " Insira o numero de indices:";
 	cin >> tamanho;
 	
 	cout << "\n Entre com os valores: \n";
	for(inservlr=0;inservlr<tamanho;inservlr++){
   		cin >> a[inservlr];
	}
	
	cout << "Insira o valor que deseja buscar: \n";
 	cin >> searchvalue;
	inicio = 0;
 	fim = tamanho-1;
 	result = 0;

 	while(inicio <= fim && result==0){
  		meio = (inicio+fim)/2;
  		
		if(searchvalue > a[meio]){
   			inicio=meio+1;
   			value=a[meio];
		
		}else if(searchvalue < a[meio]){
   			fim=meio-1;
  			value=a[meio];
  		}else{
  			result=1;
		}
	}
	
 	if(result){
 		cout<<"\n Valor encontrado \n posicao no vetor:  " << meio << endl;	
 	}else{
 		cout<<" valor nao encontrado \n";
 	}


}
