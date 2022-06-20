#include <iostream>
using namespace std;
int main(){
	 int num1=10;
	 int num2=50;
	 int sol=1;
	 char opc='s';
	 //se (teste lógico) for verdadeiro ele executa o if
	 //se não/ caso contrário ele executa o else
	
//teste lógoco
//>,<,>=,<=,==,
//10<5= false
//50>25= true
	
/*	se (dia de sol){
		vou ao clube
		se não / caso contrário(vou ao cinema)
		*/
	
	if (num1<num2 ){
		cout<<"Resultado VERDADEIRO\n";
	
	}else{
		cout<<"resultado FALSO\n";
	}
	if (sol==1){
		cout<<"Vou au clube\n";
	}else{
		cout<<"Vou ao cinema\n";
	}
	return 0;
}
