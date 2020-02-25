
#include <iostream>
#include <string>
#include<conio.h>
using namespace std;

int main() {
    string nombre, factura;
    char opcion, orden = 'S';
    bool haSalido = false;
    string pedidos;
    int total_a_pagar = 0, tiempo = -1, duracion;

    cout << "**********Bienvenido al restaurant de comida rapida XYZ**********" << endl << endl;
    cout << "Ingrese su nombre para procesar su pedido  :  ";
    getline(cin, nombre);

     while (orden == 'S') {

        cout << "Bienvenid@ " << nombre << endl << endl;
        cout << "Seleccione la letra correspondiente a lo que desa ordenar" << endl;
        cout << "J..Jugo Natural......................PRECIO:$30,Tiempo estimado:15 min " << endl;
        cout << "T..tostadas..........................PRECIO:$45,Tiempo estimado,7 min" << endl;
        cout << "P..pizza.............................PRECIO:$250,Tiempo estimado,20 min" << endl;
        cout << "B..Batidas...........................PRECIO:$75,Tiempo estimado ,10 min " << endl;
        cout << "S..Sandwich..........................PRECIO:$60,Tiempo estimado,10 min" << endl;
        cout << "K..picapollo.........................PRECIO:$100,Tiempo estimado 20 min" << endl;
        cout << "A..Agua..............................PRECIO:$25,Tiempo estimado 3 min" << endl;
        cout << "R..Resfresco.........................PRECIO:$40,tiempo estimado 3 min" << endl;
        cout << "Opcion: ";
        cin>>opcion;
        toupper(opcion);
        opcion = toupper(opcion);
        system("cls");

        switch (opcion) {
            case 'J': 
                
                cout << "Ha selecionado Jugo Natural";
                factura += "\nJugo Natural:..............................$30";
                total_a_pagar += 30;
                cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                
                cin>>orden;
                toupper(orden);
                orden = toupper(orden);
               
                duracion = 15;
                if (duracion > tiempo) {
                    tiempo = duracion;
                }
                system("cls");

                while ((orden != 'S')&&(orden != 'N')) {
                    cout << "\n Ha digitado la opcion incorrecta";
                    cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                    
                    cin>>orden;
                    toupper(orden);
                    orden = toupper(orden);
                }

                break;

             case 'T': 
                cout << "Ha selecionado Tostada  ";
                factura += "\nTostada:..............................$45";
                total_a_pagar += 45;
                cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                
                cin>>orden;
                toupper(orden);
                orden = toupper(orden);
                
                duracion = 7;
                if (duracion > tiempo) {
                    tiempo = duracion;
                }
                system("cls");




                while ((orden != 'S')&&(orden != 'N')) {
                    cout << "\n Ha digitado la opcion incorrecta";
                    cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                    
                    cin>>orden;
                    toupper(orden);
                    orden = toupper(orden);
                    
                    system("cls");
                }

                break;
            
            case 'P': 
                cout << "Ha selecionado Pizza  ";
                factura += "\nPizza:..............................$250";
                total_a_pagar += 250;
                cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
               
                cin>>orden;
                toupper(orden);
                orden = toupper(orden);
                
                duracion = 20;
                if (duracion > tiempo) {
                    tiempo = duracion;
                }

                system("cls");
                while ((orden != 'S')&&(orden != 'N')) {
                    cout << "\n Ha digitado la opcion incorrecta";
                    cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                   
                    cin>>orden;
                    toupper(orden);
                    orden = toupper(orden);
                    
                    system("cls");
                }
                break;


            case 'B': 
                cout << "Ha selecionado Batida  ";
                factura += "\nBatida:..............................$75";
                total_a_pagar += 75;
               
                cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                cin>>orden;
                toupper(orden);

                orden = toupper(orden);
                duracion = 10;
                if (duracion > tiempo) {
                    tiempo = duracion;
                }

               system("cls");
                while ((orden != 'S')&&(orden != 'N')) {
                    cout << "\n Ha digitado la opcion incorrecta";
                   
                    cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                    cin>>orden;
                    toupper(orden);
                    orden = toupper(orden);
                    
                    system("cls");
                }
                break;
           
            case 'S': 
                
                cout << "Ha selecionado Sandwich ";
                factura += "\nSandwich..............................$60";
                total_a_pagar += 60;

                cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                cin>>orden;
                toupper(orden);

                orden = toupper(orden);

                duracion = 5;
                if (duracion > tiempo) {
                    tiempo = duracion;
                }


                system("cls");
                while ((orden != 'S')&&(orden != 'N')) {
                    cout << "\n Ha digitado la opcion incorrecta";
                    cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                    
                    cin>>orden;
                    toupper(orden);
                    orden = toupper(orden);
                    
                    system("cls");
                }

                break;
           
            case 'K': 
                
                cout << "Ha selecionado picapollo ";
                factura += "\nPicapollo:..............................$100";


                total_a_pagar += 100;
                cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                
                cin>>orden;
                toupper(orden);
                orden = toupper(orden);
                
                duracion = 30;
                if (duracion > tiempo) {
                    tiempo = duracion;
                }


                system("cls");
                while ((orden != 'S')&&(orden != 'N')) {
                    cout << "\n Ha digitado la opcion incorrecta";
                    
                    cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                    cin>>orden;
                    toupper(orden);
                    orden = toupper(orden);
                    system("cls");
                }
                break;
            
            case 'A':
                
                cout << "Ha selecionado Agua,   ";
                factura += "\nAgua:..............................$25";
                total_a_pagar += 25;
                
                cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                cin>>orden;
                toupper(orden);
                orden = toupper(orden);
                
                duracion = 3;
                if (duracion > tiempo) {
                    tiempo = duracion;
                }
               

                 system("cls");
                while ((orden != 'S')&&(orden != 'N')) {
                    cout << "\n Ha digitado la opcion incorrecta";
                    
                    cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                    cin>>orden;
                    toupper(orden);
                    orden = toupper(orden);
                    
                    system("cls");
                }
                break;
           
            case 'R':
                
                cout << "Ha selecionado Refresco ";
                factura += "\nRefresco:..............................$40";

                total_a_pagar += 40;
                cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                cin>>orden;
                toupper(orden);
                orden = toupper(orden);
                
                duracion = 3;
                if (duracion > tiempo) {
                    tiempo = duracion;
                }

                system("cls");
                while ((orden != 'S')&&(orden != 'N')) {
                    cout << "\n Ha digitado la opcion incorrecta";
                    cout << "\n    Desea seguir ordenando?:  S----->Si       N------>No  ";
                    cin>>orden;
                    
                    toupper(orden);
                    orden = toupper(orden);
                    system("cls");
                }
                break;
            default: cout << "Esta opcion es invalida, favor seleccionar opccion del menu";
                break;
}
}
    cout << "**********Recibo de pago del restaurant de comida rapida XYZ**********" << endl;
    cout << "CLIENTE: " << nombre;
    cout << factura << endl;
    cout << "TOTAL:" << total_a_pagar<<" $ " << endl;
    cout << "TIEMPO DE ESPERA:" << tiempo<<" min";

 return 0;
}
