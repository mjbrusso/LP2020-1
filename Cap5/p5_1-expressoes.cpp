#include <iostream>

using namespace std;

int f1(){
    cout << "SIM"<< endl;
    return 0;
}

int f2(){
    cout << "NAO"<< endl;
    return 1;
}

int main()
{
    int a=5;
    
    a++;            			// Operador unário (um operando)
    int b = a*2;   				// Operador binário (dois operandos)   
    int c = (a>b) ? a : b;    	// Operador ternário (três operandos): expressão condicional
    
    int *p = &a;

    c = *p*b;  					// dereferenciamento de ponteiro (prefixado), multiplicação (infixado)

	cout << c << endl;
   
    double vf[]={1.5, a/3.0} ;  // Agregação com subexpressão estática e dinâmica

    int d = c | a;     			// Expressão binária (or bitwise)
    cout << d << endl;  
    
    cout << sizeof(vf) << endl; // Expressão categórica (tamanho)
    
    //c = f1() + f2();			// Ordem de avaliaçao dos operandos (precedência de operandos)?
    //cout << c << endl;
    
    //int i=0;
    //vf[i] = i++;                // Não determinismo na avaliação dos operandos
    //cout << vf[0] << ' ' << vf[1] << endl;

    //if(f1() && f2())        //  Curto circuito
        //cout << "OK" << endl;
	
    return 0;
}
