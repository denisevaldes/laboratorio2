#include<iostream>
#include<string>
using namespace std;

class PilaNum {

    private:
    int tope_maximo;
    int cabezera;
    double *values;

    public:
    PilaNum(){
        
    }
    PilaNum(int tope_maximo){
        this-> tope_maximo = tope_maximo -1;
        this-> cabezera = -1;
        this-> values =new double[tope_maximo];
    }
    void push(double x){ // Agregar datos a la pila

        if (pilaLlena()){
            cout<<"desbordamiento de pila"<<endl;
        }else{
            this->values[++this->cabezera] = x;
        }
    }
    double pop(){//Sacar elementos de la PILA
        if (pilaVacia()){

            return -1;

        }else{

            return this->values[--this->cabezera];
        }
    } 
    double top(){//Tomar el primer valor
        if(pilaVacia()){
            return -1;

        }else{
            return this->values[this->cabezera];
        }

    }
    void imprimirPila(){
        int i = 0;
        for(i = this->tope_maximo; i>=0; i--){

            cout<<"\t|\t"<< this->values[i]<<"\t|\t";//aqui se imprimen los valores guardados en la pila
            
        }
        

    }
    bool pilaVacia(){
        if(cabezera == -1){
            return true;
        }else{
            return false;
        }
    }

    bool pilaLlena(){
        if(cabezera == tope_maximo){
            return true;
        }else{
            return false;
        }
    }

};