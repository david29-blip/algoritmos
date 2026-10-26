/*
    Archivos de cabecera de uso frecuente como funciones
    Para llamar a este archivo de cabacera a otro archivo se debe usar:
    #include "funciones_frecuentes.h"
    osea el nombre que pusimos a los archivos de cabecera
*/

/* Archivo de cabecera con funciones frecuentes */
#ifndef NC
#define NC 100
#endif

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

void imprimirVector(int n2, int *val2){
		for(int i=0; i < n2; i++){
		cout << endl << "Valor de la posicion [" << i << "]: " << *val2;        //Con apuntadores w asldhjahudaoshdf
        val2++;
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

void leerMatriz(int f1, int c1, int a[][NC]){
    cout << endl << "Ingreso de elementos de la matriz" << endl;
    for(int i=0;i<f1;i++){
        for(int j=0;j<c1;j++){
            cout << "Ingresa el numero para la posicion [" << i << "," << j << "]: "; 
            cin >> a[i][j];
        }
    }	
}

void imprimirMatriz(int f2, int c2, int a[][NC]){
    cout << endl << "Impresion de elementos de la matriz" << endl;
    for(int i=0;i<f2;i++){
        cout << "[";
        for(int j=0;j<c2;j++){
        cout << a[i][j];
        if(j < c2 - 1){
            cout << "\t";
        }
        }
        cout << "]" << std::endl;
    }
}

int SumaElementosVector(int x[], int c1){     //Calcula la suma de elementos de un vector
    int sum = 0;
    for(int i = 0; i < c1; i++){
        sum += x[i];
    }
    return sum;
}

void SumarFilas(int f3, int c3, int a[][NC]){
    cout << endl << "Impresion de la sumatoria de cada fila de la matriz" << endl;
    for(int i = 0; i < f3; i++){
        int sum = 0;
        for(int j = 0; j < c3; j++){
            sum += a[i][j];
        }
        cout << endl << "Suma de los valores de la fila [" << i << "]: " << sum;
    }
}	

void SumarColumnas(int f4, int c4, int a[][NC]){
    cout << endl << "Impresion de la sumatoria de cada columna de la matriz" << endl;
    for(int j = 0; j < c4; j++){
        int sum = 0;
        for(int i = 0; i < f4; i++){
            sum += a[i][j];
        }
        cout << endl << "Suma de los valores de la columna [" << j << "]: " << sum;
    }
}	

void MatrizTranspuestaCuadrada(int f1, int c1, int a[][NC]){  
    for(int i = 0; i < f1; i++){  
        int aux;
        for(int j = i + 1; j < c1; j++){
            aux = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = aux;
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


bool TriangularSuperior(int f, int c, int mat[][NC]){
    bool superior = false;
    for(int i = 0; i < f; i++){
        for(int j = i + 1; j < c; j++){
            if(mat[i][j] != 0){
                superior = true;
            }
        }
    }
    return superior;
}


bool TraingularInferior(int c, int mat[][NC]){
    bool inferior = false;
    for(int i = 1; i < c; i++){
        for(int j = 0; j < i; j++){
            if(mat[i][j] != 0){
                inferior = true;
            }
        }
    }
    return inferior;
}


void OrdenarTriangularSuperiorDESCENDENTE(int f, int c, int mat[][NC], int aux1[]){
    int cont = 0;
    for(int i = 0; i < f; i++){
        for(int j = i + 1; j < c; j++){
            aux1[cont] = mat[i][j];
            if(mat[i][j] != 0){
            }
            cont = cont + 1;
        }
    }
    ordenarVectorAsc(cont, aux1);
    InvertirVector(cont, aux1);
    cont = 0;
    for(int i = 0; i < f; i++){
        for(int j = i + 1; j < c; j++){
            mat[i][j] = aux1[cont];
            cont = cont + 1;
        }
    }
}

void OrdenarTriangularInferiorASC(int c, int mat[][NC], int aux1[]){
    int cont = 0;
    for(int i = 1; i < c; i++){
        for(int j = 0; j < i; j++){
            aux1[cont] = mat[i][j];
            if(mat[i][j] != 0){
            }
            cont = cont + 1;
        }
    }
    ordenarVectorAsc(cont, aux1);
    cont = 0;
    for(int i = 1; i < c; i++){
        for(int j = 0; j < i; j++){
            mat[i][j] = aux1[cont];
            cont = cont + 1;
        }
    }
}