/***************************************************
* Fecha: Agosto-2022
* Autor: Laura Gomez
* Tema: Introducciòn a la programaciòn C
* Tòpico: Programa en C que acepte dos enteros del usuario y calcule el producto de los
dos enteros.
****************************************************/
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <stdbool.h>


/*Funciòn que valida el ingreso de enteros positivos*/
bool validar_negativo(int n){
	bool v = false;
	
	if(n>0)	 { v = true; }
	
return v;

}

/*Funciòn que recibe 2 enteros y calcula el producto de los 2*/
void multiplicar (){
	int a,b,producto;
	
	//Se requiere 2 enteros
	printf("\n Ingrese el primer nùmero: ");
	scanf("%d",&a);
	printf(" Ingrese el segundo nùmero: ");
	scanf("%d",&b);
	
	
	//se calcula el producto
	producto=a*b;
	printf("\n El producto entre %d y %d es: %d\n",a,b,producto);
	printf("\n");
	
}

/*Funciòn que convierte los dias en años,semanas y dias*/
void convertir(){
	int num_dias,anios,semanas,dias;
	
	//Se requiere el nùmero de dias a convertir
	printf("\n Ingrese el nùmero de dias: ");
	scanf("%d",&num_dias);
	
	//valida que sea positivo el # de dias
	if(validar_negativo(num_dias)==true)
	{
		//Se convierte a años,semanas,dias
		anios=num_dias/365;
		semanas=(num_dias%365)/7;
		dias=(num_dias%365)%7;
		
		printf("\n Los  %d dias equivalen a: %d Años, %d semanas, %d dias\n",num_dias,anios,semanas,dias);
		printf("\n");
	}
	else
	{
		printf("\n El nùmero ingresado es invàlido");
		printf("\n");
	}
	
}

/*Funciòn que calcula la distancia entre dos puntos*/
void distancia(){
	int x_1, y_1, x_2, y_2;
	float distancia;

	//Se requiere las dos coordenadas de los puntos
	printf("\n Ingrese el valor de la posiciòn en X del primer punto X1: ");
	scanf("%d",&x_1);
	printf(" Ingrese el valor de la posiciòn en Y del primer punto Y1: ");
	scanf("%d",&y_1);
	printf(" Ingrese el valor de la posiciòn en X del segundo punto X2: ");
	scanf("%d",&x_2);
	printf(" Ingrese el valor de la posiciòn en Y del segundo punto Y2: ");
	scanf("%d",&y_2);
		
	
	//Se calcula la distancia
	distancia=sqrt(pow(x_2 - x_1,2) + pow(y_2  - y_1,2));
	printf("\n La distancia entre el primer punto (%d,%d) y el segundo punto (%d,%d) es: %f\n",x_1,y_1,x_2,y_2,distancia);

}

/*Funciòn que muestra los 10 primeros numeros naturales*/
void primeros_10(){
	
	printf("\n Los primeros 10 nùmeros naturales: ");
	
	for(int i=1; i<11;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
}

/*Funciòn piramide de * */
void piramide(){
	int lineas;
	//Se requiere avisar y recibir la cantidad de lineas
	printf("\nLa cantidad màxima permitida de líneas del triangulo es de 14 lineas. \n");
	printf("\nIngrese la cantidad de lineas: ");
	scanf("%d",&lineas);
	
	if(validar_negativo(lineas)==true && lineas < 15)//Se valida que el dato ingresado sea posiitivo y menor a 15
	{
		for(int i=0;i<lineas;i++)
		{
			for(int j=0; j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n El nùmero ingresado es invàlido");
		printf("\n");
	}

}

/*Funciòn que imprime matriz de unos*/
void matriz_unos(){
	int N;
	//Se requiere el tamaño de la matriz
	printf("\nEl tamaño de la matriz debe ser menor a 8. \n");
	printf("\nIngrese el tamaño de la matriz: ");
	scanf("%d",&N);
	
	
	if(validar_negativo(N)==true && N<8)//Se evalua si el numero es valido y si es menor a 8
	{
		int matrix[N][N];
		printf("\n");
		
		for(int i=0;i<N;i++)
		{
			for(int j=0; j<N;j++)
			{	
				matrix[i][j]=1;//se llena cada espacio del nùmero 1
				printf(" %d ",matrix[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n El nùmero ingresado es invàlido");
		printf("\n");
	}
}

/*Funciòn que imprime matriz de numeros enteros aleatorios*/
void matriz_llena(){
	int N;

	//Se requiere el tamaño de la matriz
	printf("\nEl tamaño de la matriz debe ser menor a 8. \n");
	printf("\nIngrese el tamaño de la matriz: ");
	scanf("%d",&N);
	
	
	if(validar_negativo(N)==true && N<8)//Se evalua si el numero es valido y si es menor a 8
	{
		int matrix[N][N];
		printf("\n");
		printf("\nMatriz \n");
		for(int i=0;i<N;i++)
		{
			for(int j=0; j<N;j++)
			{	
				matrix[i][j]= rand()%10;//se llena cada espacio de nùmeros aleatorios
				printf(" %d ",matrix[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n El nùmero ingresado es invàlido");
		printf("\n");
	}
}

/*Funciòn que imprime 2 matrices de numeros enteros aleatorios y la suma de las matrices*/
void suma_matrices(){
	int N, i, j;

	//Se requiere el tamaño de las matriz
	printf("\nEl tamaño de la matriz debe ser menor a 8. \n");
	printf("\nIngrese el tamaño de la matriz: ");
	scanf("%d",&N);
	
	if(validar_negativo(N)==true && N<8)//Se evalua si el nùmero es valido y si es menor a 8
	{
		int matrixA[N][N], matrixB[N][N], suma[N][N];
		printf("\n");
		
		printf("\nMatriz A\n");
		for( i=0;i<N;i++)
		{
			for( j=0; j<N;j++)
			{	
				matrixA[i][j]= rand()%10;//se llena cada espacio de nùmeros aleatorios
				printf(" %d ",matrixA[i][j]);
			}
			printf("\n");
		}
		
		printf("\nMatriz B\n");
		for( i=0;i<N;i++)
		{
			for(j=0; j<N;j++)
			{	
				matrixB[i][j]= rand()%10;//se llena cada espacio de nùmeros aleatorios
				printf(" %d ",matrixB[i][j]);
			}
			printf("\n");
		}
		
		printf("\nMatriz del resultado de la suma de Matriz A y Matriz B: \n");
		 for(  i=0;i<N;i++)
		 {

     			for( j=0;j<N;j++)
     			{

            			suma[i][j]= matrixA[i][j] + matrixB[i][j];//se suman las matrices
            			printf(" %d ",suma[i][j]);
      			}
      			printf("\n");
 		}
	}
	else
	{
		printf("\n El nùmero ingresado es invàlido");
		printf("\n");
	}
}

/*Funciòn que imprime 2 matrices de numeros enteros aleatorios y la resta de las matrices*/
void resta_matrices(){
	int N, i, j;

	//Se requiere el tamaño de las matriz
	printf("\nEl tamaño de la matriz debe ser menor a 8. \n");
	printf("\nIngrese el tamaño de la matriz: ");
	scanf("%d",&N);
	
	
	if(validar_negativo(N)==true && N<8)//Se evalua si el nùmero es valido y si es menor a 8
	{
		int matrixA[N][N], matrixB[N][N], resta[N][N];
		printf("\n");
		
		printf("\nMatriz A\n");
		for( i=0;i<N;i++)
		{
			for(j=0; j<N;j++)
			{	
				matrixA[i][j]= rand()%10;//se llena cada espacio de nùmeros aleatorios
				printf(" %d ",matrixA[i][j]);
			}
			printf("\n");
		}
		
		printf("\nMatriz B\n");
		for(i=0;i<N;i++)
		{
			for( j=0; j<N;j++)
			{	
				matrixB[i][j]= rand()%10;//se llena cada espacio de nùmeros aleatorios
				printf(" %d ",matrixB[i][j]);
			}
			printf("\n");
		}
		
		printf("\nMatriz del resultado de la resta de Matriz A y Matriz B: \n");
		 for(  i=0;i<N;i++)
		 {

     			for( j=0;j<N;j++)
     			{

            			resta[i][j]= matrixA[i][j] - matrixB[i][j];//se restan las matrices
            			printf(" %d ",resta[i][j]);
      			}
      			printf("\n");
 		}
	}
	else
	{
		printf("\n El nùmero ingresado es invàlido");
		printf("\n");
	}
}

/*Funciòn que imprime 2 matrices de numeros enteros aleatorios y el producto de las matrices*/
void producto_matrices(){
	int N,temporal,i,j,k;
	

	//Se requiere el tamaño de las matriz
	printf("\nEl tamaño de la matriz debe ser menor a 8. \n");
	printf("\nIngrese el tamaño de la matriz: ");
	scanf("%d",&N);
	
	
	if(validar_negativo(N)==true && N<8)//Se evalua si el nùmero es valido y si es menor a 8
	{	
		int matrixA[N][N], matrixB[N][N], producto[N][N];
		printf("\n");
		
		printf("\nMatriz A\n");
		for( i=0;i<N;i++)
		{
			for(j=0; j<N;j++)
			{	
				matrixA[i][j]= rand()%10;//se llena cada espacio de nùmeros aleatorios
				printf(" %d ",matrixA[i][j]);
			}
			printf("\n");
		}
		
		printf("\nMatriz B\n");
		for( i=0;i<N;i++)
		{
			for( j=0; j<N;j++)
			{	
				matrixB[i][j]= rand()%10;//se llena cada espacio de nùmeros aleatorios
				printf(" %d ",matrixB[i][j]);
			}
			printf("\n");
		}
		
		printf("\nMatriz del resultado de la resta de Matriz A y Matriz B: \n");
		for( i=0;i<N;i++)
		{
			for( j=0;j<N;j++)
			{ 	
				temporal=0;
				for(k=0;k<N;k++)
				{
					temporal+= matrixA[i][k] * matrixB[k][j];
					producto[i][j]=temporal;
				}
				printf(" %d ",producto[i][j]);
			} 
			printf("\n");
		}
	}
	else
	{
		printf("\n El nùmero ingresado es invàlido");
		printf("\n");
	}
}

/*Funciòn invoca a las funciones segùn la opciòn ingresada*/
void llamar (int opcion){
	
	/*Consola de clasificaciòn*/
	if(opcion==1)
	{
		multiplicar();
	}
	if(opcion==2)
	{
		convertir();
	}
	if(opcion==3)
	{
		distancia();
	}
	if(opcion==4)
	{
		primeros_10();
	}
	if(opcion==5)
	{
		piramide();
	}
	if(opcion==6)
	{
		matriz_unos();
	}
	if(opcion==7)
	{
		matriz_llena();
	}
	if(opcion==8)
	{
		suma_matrices();
	}
	if(opcion==9)
	{
		resta_matrices();
	}
	if(opcion==10)
	{
		producto_matrices();
	}
	else if(opcion==11)
	{
		printf("\nGracias por preferir nuestros servicios\n");
		printf("\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
	}
		

}







