#include<iostream>
#include<cmath>
using namespace std;
int calcularmenormayor(int n);
int calculardecimal(int n,float n2,float n3);
int calcularraiz(int n);
int calcularfactorial(int n);
//parte de lupe
bool esPrimo(int nm) {

    if (nm < 2) {
        return false;
    }
    int raiz = sqrt(nm);
    for (int i = 2; i <= raiz; ++i) {
        if (nm % i == 0) {
            return false;
        }
    }

    return true;
}
int main(){
    
  int n;
  float n2,n3;
  cout<<"ingresa el numero natural ";
  cin>>n;
  cout<<"ingresa los dos numeros decimales"<<endl;
  cin>>n2>>n3;
  int resulr=calcularraiz(n);
  cout<<"A)"<<resulr<<endl;
  int resulf=calcularfactorial(n);
  cout<<"B)"<<resulf<<endl;
  if (esPrimo(n)) {
        cout <<"C)"<< n << " es primo." << "\n";
    } else {
        cout <<"C)"<< n << " no es primo." << "\n";
    }
    int resuld=calculardecimal( n,n2,n3);
    cout<<"D)"<<resuld<<endl;
    int reulm=calcularmenormayor(n);
  return 0;
}
//parte de leonardo
int calcularraiz(int n){
    int raiz=(sqrt(n));
    return raiz;
}
//parte de gabriel
int calcularfactorial(int n){
    cout<<"con que numero quieres sacar la factorial"<<endl;
    int nf;
    cin>>nf;
    int factorial=(n%nf);
    return factorial;
}
//parte de luisa
int calculardecimal(int n,float n2, float n3){
    
   int  decimal=pow(n,(n2+n3));
     return decimal;
    
}
//parte de santi
int calcularmenormayor(int n){
    if(n<100)
    {
        cout<<"E)"<<"el numero no es mayor que 100";
    }else if(n>50 && n<99)
    {
        cout<<"E)"<<"el numero es mayor a cincuenta";
    }else if(n>100)
    {
        cout<<"E)"<<"el numero es mayor que 100";
    }
    return 0;
}
