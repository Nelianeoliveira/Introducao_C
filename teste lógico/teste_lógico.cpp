#include <iostream>
using namespace std;
int main(){
	 int num1=10;
	 int num2=50;
	 int sol=1;
	 char opc='s';
	 //se (teste l�gico) for verdadeiro ele executa o if
	 //se n�o/ caso contr�rio ele executa o else
	
//teste l�goco
//>,<,>=,<=,==,
//10<5= false
//50>25= true
	
/*	se (dia de sol){
		vou ao clube
		se n�o / caso contr�rio(vou ao cinema)
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
