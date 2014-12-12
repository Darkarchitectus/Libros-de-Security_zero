#include<stdio.h>



int main()

{

int n,m,i,j,k;

float a[25][26],b[25][26],apoyo;



printf("\n MÉTODO DE GAUSS-JORDAN");

printf("\n\n Ingrese el nº de incógnitas \n\n Nº de Ecuaciones = ");

scanf("%d",&n);

printf("\n Ingrese coeficientes\n");

/* Datos para iniciar método */

for(i=1;i<=n;i++)

{

printf("\n Fila %d \n",i);

for(j=1;j<=n+1;j++)

{

printf(" Ingrese a(%d,%d) = ",i,j);

scanf("%f",&a[i][j]);

}

}

/* Fin Del Ciclo De Solicitud De Datos */

/* Proceso Principal */

m=n+1;

do

{

if(a[1][1]==0)

{

k=m-1;

for(i=2;i<=k;i++)

{

if(a[i][1]!=0)

{

for(j=1;j<=m;j++)

{

apoyo=a[i][j];

a[i][j]=a[1][j];

a[1][j]=apoyo;

}

}

}

}

else

{

for(j=2;j<=m;j++)

{

for(i=2;i<=n;i++)

{

b[i-1][j-1]=a[i][j]-a[1][j]*a[i][1]/a[1][1];

}

}

for(j=2;j<=m;j++)

{

b[n][j-1]=a[1][j]/a[1][1];

}

m=m-1;

for(j=1;j<=m;j++)

{

for(i=1;i<=n;i++)

{

a[i][j]=b[i][j];

}

}

}

}

while(m>1);

printf("\n\n SOLUCION DEL SISTEMA\n ");

for(i=1;i<=n;i++)

{

printf("\n X(%d) = %1.4f",i,a[i][1]);

}

printf("\n\n Fin del programa");

getchar();

}
