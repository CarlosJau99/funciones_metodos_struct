#include<iostream>
using namespace std;

struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
};
main() {
	Estudiante estudiante;
	
	int fila =0,columna =0;
	cout<<"cuantos estudiantes desea agregar:";
	cin>>fila;
	
	cout<<"cuantas notas por estudiante desea agregar:";
	cin>>columna;
	
	estudiante.codigo= new int [fila];
	estudiante.nombre= new string [fila];
	estudiante.notas= new int *[fila];
	for (int i=0;i<fila;i++){
			estudiante.notas[i]=new int[columna];
		}
	 cout<<"__________________Ingreso de notas_______________________"<<endl;
	
	
	for(int i=0;i<fila;i++){
		cout<<"codigo["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"nombre completo["<<i<<"]:";
		getline(cin,estudiante.nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"ingrese nota["<<ii<<"]:";
			cin>>*(*(estudiante.notas+i)+ii);
		}
			
		cout<<"___________________________________"<<endl;
	}
	
	
    system("pause");
}
