#include<iostream>

using namespace std;

int main(){
	int matriz [100][100], filas, columnas, suma,div;
	
	cout<< "INGRESE LAS FILAS Y COLUMNAS DE LA MATRIZ A SUMAR"<<endl;
	cout<< "Ingrese las filas"<<endl;
	cin >> filas;
	cout<< "Ingrese las columnas"<<endl;
	cin >> columnas;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Ingrese un dato "<<endl;
			cin>>matriz[i][j];
			suma += matriz[i][j];
		}
	} 
	
 cout<< "la Suma de La matriz es: "<< suma<<endl;;

    if (suma%2==0){
    	cout<< "la suma no es un valor primo"<<endl;
    }
    else{
    	cout<< "VALOR PRIMO"<<endl ;
		cout<< "MOSTRANDO MATRIZ"<<endl ;
    	for(int i=0;i<filas;i++){
		  for(int j=0;j<columnas;j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}	
    }

	return 0;
}

