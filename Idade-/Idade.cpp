#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void idade(int n){
	
 	char str1[50] ="\n";
    for(int i=0;i<=n;i++){
         if(i>=18 && i<=60){
            cout<<"Adulto\n";
             cout<<str1;
        }
        else if(i<18){
            cout<<"Crianca\n";
             cout<<str1;
        }
        else if(i>60 && i<=120){
            cout<<"Idoso\n";
             cout<<str1;
        }
        else{
        
            cout<<"Voce é uma lenda!";
			
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    idade(n);
}

