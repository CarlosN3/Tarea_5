#include <iostream>
using namespace std;
// puntero con asignacion de memoria dinamica;
// new = reservar con espacio en memoria
// delete [] = liberar la memoria
main () {
	/*int total =0;
	int notas[total];
	char res;
	int *p_notas = notas;
	
	do{
		cout<<"Ingrese nota "<<total<<":";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>res;
	}while (res=='s' || res=='S');
	
	cout<<"----------Mostrar notas----------"<<endl;
	for (int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
	}*/
	
	
	/*int total =0,*p_notas;
	p_notas = new int[total];
	char res;
	
	do{
		cout<<"Ingrese nota "<<total<<":";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>res;
	}while (res=='s' || res=='S');
	
	cout<<"----------Mostrar notas----------"<<endl;
	for (int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
	}
	dele[] p_notas;*/
	
	int fil = 0, col = 0,**pm_notas;
	cout<<"Ingrese cantidad de Estudiantes: ";
	cin>>fil;
	cout<<"Ingrese la cantidad de  Notas por estudiante : ";
	cin>>col;
	
	pm_notas = new int *[fil];
	for (int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
	for (int i=0;i<fil;i++){
		cout<<"_____________Estudiante______________"<<i<<endl;
		for (int ii=0;ii<col;ii++){
			cout<<"Estudiantes "<<i<<", Nota: "<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"___________________"<<endl;
	}
	cout<<"-----Mostar notas----------"<<endl;
	for (int i=0;i<fil;i++){
		for (int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"_____________________________"<<endl;
	}	
	for (int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}	
	
	delete [] pm_notas;
	system("pause");
}
