int leerN(int li, int ls){
	int n;
	
	do{
		cout << endl << "Ingrese la cantidad de valores a procesar: [1.." << ls << "]: ";
		cin >> n;
	}while(n<li or n>ls);
	return n;
}


void leerVector(int n1, int val1[]){
	for(int i=0; i < n1; i++){
	cout << endl << "Ingrese el numero de la posicion [" << i << "]: ";	
	cin >> val1[i];
	}
}

void imprimirVector(int n2, int val2[]){
		for(int i=0; i < n2; i++){
		cout << endl << "Valor de la posicion [" << i << "]: " << val2[i];
	}
}

void imprimirRevVector(int n2, int val2[]){
		for(int i=n2-1; i >= 0; i--){
		cout << endl << "Valor de la posicion [" << i << "]: " << val2[i];
	}
}

void ordenarVectorAsc(int n3, int val3[]){
	for(int p=0; p < n3-1; p++){
		for(int c = p+1; c < n3; c++){
			if(val3[p] > val3[c]){
				int aux;
				aux = val3[p];
				val3[p] = val3[c];
				val3[c] = aux;
			}
		} 
	}
}

void InvertirVector(int n, int val4[]){
    int aux;
    for(int i = 0; i < n / 2; i++){
        aux = val4[i];
        val4[i] = val4[n - 1 - i];
        val4[n - 1 - i] = aux;
    }
}

