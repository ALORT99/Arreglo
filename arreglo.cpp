#include<iostream> 
#include<stdlib.h>
using namespace std; 
int arreglo[]={1,2,3,4,5,6,7,8,9,0}; 
int *p; 
float suma; 
float promedio;
int main() {
	system("color 1F");
	p=&arreglo[0]; 
	cout<<"arreglo directo"<<p<<endl; 
	cout<<"arreglo valor1: "<<*p<<endl;
	p++; 
	cout<<"arreglo valor2: "<<*p++<<endl;  
	cout<<"arreglo valor3: "<<*p<<endl; 
	p++;
	cout<<"arreglo valor4: "<<*p++<<endl; 
	cout<<"arreglo valor5: "<<*p<<endl;
	p++; 
	cout<<"arreglo valor6: "<<*p++<<endl; 
	cout<<"arreglo valor7: "<<*p<<endl; 
	p++; 
	cout<<"arreglo valor8: "<<*p++<<endl; 
	cout<<"arreglo valor9: "<<*p<<endl;
	p++; 
	cout<<"arreglo valor10: "<<*p++<<endl;
	for(int i=0;i<9;i++){
		suma= suma+arreglo[i]; 
		cout<<"La suma de los elementos es: "<<suma<<endl;
	}   
	promedio= suma/10; 
	cout<<"El Promedio de la suma es: "<<promedio<<endl;
	return 0;
}
