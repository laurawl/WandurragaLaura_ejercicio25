#include<iostream>

using 
namespace std;

void relleno(int l,float **m);

void imprimecabezas(int l,float **m);

void imprime(int l,float **m);

int main(){

cout<<"Escriba un numero del 3 al 11"<<endl;

int l=0;

cin>>l;

if(l>=3 & l<=11)
    {
    cout<<"El numero esta en el rango valido:"<<endl;
    float **matriz =new float *[l];
    for (int i =0; i < l; ++i)
        {
        matriz[i] =new float[l+2];
        }

    relleno(l,matriz);

    imprimecabezas(l,matriz);
    
    imprime(l,matriz);


    }

    else{cout<<"El numero no esta en el rango valido"<<endl;
    }

return 0;

}



void relleno(int l,float **M){
    for(int i=0; i<l+2;i++)
    {
        for(int j=0; j<l;j++)
       {
        M[j][i]=i+j;
      }
    }

}

void imprimecabezas(int l,float **m){
    int i;

    float sum=0;

    for (i =0; i <l;i++) 
    {
    sum+=m[i][0];
    cout<<m[i][0]<<" "<<sum<<"\n";
    }

}

void imprime(int l,float **m){
    int i, j;

for (j=0; j < l+2 ;j++){

for (i=0; i <l;i++) {

cout<<" "<<m[i][j]<<" ";

}

cout<<endl;

}

}