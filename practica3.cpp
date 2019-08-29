#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main(int argc, char** argv){
    int arr[10];
    int *puntero;
    puntero=&arr[0];
    int mayor=INT_MIN;

    for(int i=0; i<=9; i++){
        cout<<"Ingresa los valores del arreglo"<<endl;
        cin>>arr[i];
    }
    for(int *puntero=&arr[0]; puntero<=&arr[9]; puntero++){
        if(*puntero>mayor)mayor=*puntero;
    }
    cout<<"El numero mayor es: "<<mayor<<endl;
    return 0;
}
