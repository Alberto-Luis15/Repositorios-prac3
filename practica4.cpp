#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct subscription{
    char name[20];
    int time;
    char magazine[20];
};

int main(){
    struct subscription P[10];
    struct subscription *apuntador;
    apuntador=P;
    int a;
    char eliminar[20];
    int opcion;
    while(opcion!=4){
        
    cout<<"MENU"<<endl;
	cout<<"1. Dar de alta un dato"<<endl;
	cout<<"2. Eliminar dato"<<endl;
	cout<<"3. Mostrar datos"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Que deseas hacer: ";
    cin>>opcion;
    switch (opcion){
        case 1:
            for(int i=0;i<10; i++){
                if(P[i].name[0]=='n'){
                    cout<<"Nombre: "; 
					fflush(stdin);cin.getline(P[i].name,20,'\n');
                    cout<<"Tiempo de Suscripcion: "; 
					cin>>P[i].time;
                    cout<<"Nombre de la revista a la que esta suscrito: "; 
					fflush(stdin); cin.getline(P[i].magazine,20,'\n');
                    cout<<'\n';
                    break;
                    }else
                    cout<<"El "<<i+1<<" espacio esta ocupado"<<endl;
        }break;
        case 2:
            cout<<"Nombre del usuario que desea dar de baja: ";
			fflush(stdin);
			cin.getline(eliminar,20,'\n');
            for(int i=0; i<10; i++){
            	a=strcmp(apuntador->name,eliminar);
            	if (a!=0)
            		apuntador++;
            	else{
					P[i].name[0]='n';
                    cout<<"Usuario eliminado"<<endl;
				}
			}
            
            break;
            
        case 3:
        	cout<<"Verificar Datos de la estructura";
        	for(int i=0; i<11; i++){
        			cout<<"<-::DATOS GUARDADOS::->"<<endl;
       				cout<<"Name: "<<apuntador->name<<endl;
        			cout<<"Time: "<<apuntador->time<<endl;
        			cout<<"Magazine: "<<apuntador->magazine<<endl;
	}
		case 4:
			cout<<"Salir del programa: "<<endl;
		default: 
			cout<<".:Bye:. presiona una tecla"<<endl;
			break;	
    	
        
			
    }

    }

	
    return 0;  
}
