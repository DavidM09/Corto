#include <iostream>

using namespace std;

int main (){

    int edad;
    int categoria;
    int stud;
    int pro;
    int mny = 1000;
    int total;


 cout << "Por favor ingrese su edad: "<< endl; //solicitando edad al usuario
 cin >> edad;


 if (edad < 16){
 cout << "La edad minima es 16" << endl; //requisito minimo de edad
 return 1;
 }
 else if (edad >= 16){
    cout << "Por favor ingrese una categoria: " << endl; // menu de categoriad
    cout << "1. Estudiante  " << endl;
    cout << "2. Profesional " << endl;
    cout << "3. Ver todos " << endl;
    cin >> categoria ;

    switch (categoria){

        case 1:
        cout << "Lista de dispositivos disponibles - 20% off " << endl; // dispositivos de estudiante
        cout << "1. Laptop Basica: $900 " << endl;
        cout << "2. Tablet Estudiantil: $600 " << endl;
        cout << "3. Chromebook: $700" << endl;
        cin >> stud;

        switch (stud){                                                // resultados de las compras

            case 1:
            cout <<"Laptop Basica - su total es de $720" << endl;
            total = (mny - 720);
            cout <<"Compra exitosa usted a comprado Laptop Basica, su saldo restante es de:" << total << endl;

            break;
            
            return 0;

            case 2:
            cout <<"Tablet Estudiantil - su total es de $480" << endl;
            total = (mny - 480);
            cout <<"Compra exitosa usted a comprado Tablet Estudiantil , su saldo restante es de: " << total << endl;
            break;

            return 0;

            case 3:
            cout <<"Chromebook - su total es de $560" << endl;
            total = (mny - 560);
            cout <<"Compra exitosa usted a comprado Chromebook, su saldo restante es de: " << total << endl;
            break;

            return 0;

            default:

            cout << "ingrese un dato correcto" << endl;

            break;

            return 0;

        }

        break;

        case 2:
        cout << "Lista de dispositivos disponibles - 10% off " << endl; // dispositivos para profesionales 
        cout << "1. Laptop Avanzada: $1500 " << endl;
        cout << "2. Tablet Pro: $1200 " << endl;
        cout << "3. Estacion de Trabajo: $2000" << endl;
        cin >> pro;

         switch (pro){                                                  //resultados de las compras

            case 1: 
            cout <<"Laptop Avanzada - su total es de $1350" << endl;
            total = (mny - 1350);
            cout <<"Su compra no a sido exitosa, Laptop Avanzada saldo faltante $350" <<  endl;
            break;

            case 2:
            cout <<"Tablet Pro - su total es de $1080" << endl;
            total = (mny - 1080);
            cout <<"Su compra no a sido exitosa, Tablet Pro saldo faltante $80" << endl;
            break;

            case 3:
            cout <<"Estacion de Trabajo - su total es de $1800" << endl;
            total = (mny - 1800);
            cout <<"Su compra no a sido exitosa,  Estacion de Trabajo saldo faltante $800" << endl;
            break;

            default:

            cout << "ingrese un dato correcto" << endl;

            break;

            return 0;

    } 

    break; 

      case 3:
        cout << "Lista de dispositivos disponibles (estudiantiles) " << endl; // dispositivos de estudiante
        cout << "1. Laptop Basica: $900 " << endl;
        cout << "2. Tablet Estudiantil: $600 " << endl;
        cout << "3. Chromebook: $700" << endl;

        cout << "Lista de dispositivos disponibles (Profesionales) " << endl; // dispositivos para profesionales 
        cout << "1. Laptop Avanzada: $1500 " << endl;
        cout << "2. Tablet Pro: $1200 " << endl;
        cout << "3. Estacion de Trabajo: $2000" << endl;

        return 1;


}



}


return 0;
}