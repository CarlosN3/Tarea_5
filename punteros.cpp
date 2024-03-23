#include <iostream>

using namespace std;

main (){
	
	int edad = 25,*p_edad;
	p_edad = &edad;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<*p_edad<<endl;

	
	cout<<"----------Camiar Variable------------"<<endl;
	edad = 50;
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	
	cout<<"----------Camiar otra Variable------------"<<endl;
	int	edad2 = 100;
	p_edad =&edad2;
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	cout<<"Edad2: "<<edad2<<endl;
	
	
	system("pause");
	
}
