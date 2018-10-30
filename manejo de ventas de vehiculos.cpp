#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <vector>

using namespace std;

struct vehiculo{
    string tipo;
    string placa;
    string modelo;
    string puerta;
    string capacidad;
    string tipocombustible;
    string numllantas;
    string estado;
    int cantidad = {1};
    float precio = {0};
};

vector<vehiculo> automovil;
vector<vehiculo> inventario;

struct factura{
    string id;
    string idr;
    string fecha;
    string nombre;
    float total ={0};
    string placa;
    string modelo;
    int cantidad;
    float precio = {0};
};

vector <factura> recibosup;
vector <factura> reciboin;

void crear_factura(){
    factura superior, inferior;
    string dato;
    char re;
    char re2;
    string datoaux;
    int auxi;
    cout<<"\n\t==CREAR VENTA - FACTURA==";
    cout<<"\n\tDigite ID de la factura Venta : ";
    cin>>datoaux;
    superior.id = datoaux;
    cout<<"\n\tDigite la Fecha (dd/mm/aa): ";
    cin>>superior.fecha;
    cout<<"\n\tDigite el nombre del cliente : ";
    cin>>superior.nombre;
    recibosup.push_back(superior);
    do{
        do{
            cout<<"\n\tDigite la placa del vehiculo que desea comprar: ";
            cin>>dato;
            for(int i=0; i<automovil.size(); i++){
                if (dato == automovil[i].placa){
                    cout<<"\n\tTipo : "<<automovil[i].tipo;
                    cout<<"\n\tPlaca : "<<automovil[i].placa;
                    cout<<"\n\tModelo : "<<automovil[i].modelo;
                    cout<<"\n\tNumero de puertas : "<<automovil[i].puerta;
                    cout<<"\n\tCapacidad : "<<automovil[i].capacidad;
                    cout<<"\n\tTipo de combustible: "<<automovil[i].tipocombustible;
                    cout<<"\n\tNumero de llantas: "<<automovil[i].numllantas;
                    cout<<"\n\t------------------------------------";
                    auxi = i;
                }
            }cout<<"\n\t===DESEA COMPRAR ESTE VEHICULO 'S' o 'N': ";
            cin>>re;
            }while (re == 'n' or re== 'N');
        if (re == 's' or re == 'S'){
            for (int k=0; k<inventario.size(); k++){
                if (automovil[auxi].modelo == inventario[k].modelo){
                    inventario[k].cantidad -= 1;
                }
            }
            cout<<"\n\tCantidad a comprar: ";
            cin>>inferior.cantidad;
            inferior.idr = datoaux;
            inferior.total = automovil[auxi].precio;
            inferior.precio = automovil[auxi].precio;
            inferior.placa = automovil[auxi].placa;
            inferior.modelo = automovil[auxi].modelo;
            cout<<"\n\t------------------------------------";
            reciboin.push_back(inferior);
        }cout<<"\n\t---Desea agregar otro vehiculo a la lista: ";
        cin>>re2;
    }while (re2 == 's' or re2 == 'S');
}

void mostrar_factura_ingreso(){
    char r;
    string fac;
    int h;
    do{
        cout<<"\n\tDigite ID de la factura de ingreso: ";
        cin>>fac;
        for (int i=0; i<recibosup.size() ; i++){
        if (fac == recibosup[i].id){
            cout<<"\n\t=====FACTURA=======";
            cout<<"\n\tID: " <<recibosup[i].id;
            cout<<"\n\tFECHA: "<<recibosup[i].fecha;
            cout<<"\n\tNOMBRE: "<<recibosup[i].nombre;
            cout<<"\n\tTOTAL: "<<recibosup[i].total;
            cout<<"\n\t-----CONTENIDO------";
            h=i;
            cout<<"\n\tPLACA: "<<reciboin[h].placa<< " -MODELO: " <<reciboin[h].modelo<< " -CANTIDAD: "<<reciboin[h].cantidad;
            }
        }cout<<"\n\tRegresar buscar otra factura 's' o 'n': ";
        cin>>r;
    }while (r=='s' or r == 'S');
}

void mostrar_factura_ventas(){
    char r;
    string fac;
    float acu = 0;
    do{
        cout<<"\n\tDigite ID de la factura de venta: ";
        cin>>fac;
        for (int i=0; i<reciboin.size() ; i++){
            if (fac == reciboin[i].idr){
                acu += reciboin[i].total;
            }
        }
        for (int i=0; i<recibosup.size() ; i++){
            if (fac == recibosup[i].id){
                cout<<"\n\t=====FACTURA=======";
                cout<<"\n\tID: " <<recibosup[i].id;
                cout<<"\n\tFECHA: "<<recibosup[i].fecha;
                cout<<"\n\tNOMBRE: "<<recibosup[i].nombre;
                cout<<"\n\tTOTAL: "<<acu;
                cout<<"\n\t-----CONTENIDO------";
            for (int j=0; j<reciboin.size() ; j++)
                if (fac == reciboin[j].idr){
                    cout<<"\n\tPLACA: "<<reciboin[j].placa<< " -MODELO: " <<reciboin[j].modelo<< " -CANTIDAD: "<<reciboin[j].cantidad<<" -PRECIO: "<<reciboin[j].precio;
                }
            }
        }cout<<"\n\tRegresar buscar otra factura 's' o 'n': ";
        cin>>r;
    }while (r=='s' or r == 'S');
}

void menu(){
    cout<< "\n\tMENU PRINCIPAL";
    cout<< "\n\t1. Entrada de datos";
    cout<< "\n\t2. Mostrar Vehiculos";
    cout<< "\n\t3. Buscar vehiculo";
    cout<< "\n\t4. Actualizar datos";
    cout<< "\n\t5. Eliminar datos";
    cout<< "\n\t6. Mostrar inventario";
    cout<< "\n\t7. Vender vehiculo";
    cout<< "\n\t8. Mostrar factura ingreso(buscar)";
    cout<< "\n\t9. Mostrar factura venta(buscar)";
    cout<< "\n\tG. Guardar en Archivo";
    cout<< "\n\tE. Salir del programa";
    cout<< "\n\tEscoja opcion: ";
}

void entrarDatos(){
    vehiculo v;
    factura f, m;
    f.precio = 0;
    cout<<"\n\tID del ingreso (factura-Ingreso): ";
    cin>>f.id;
    cout<<"\n\tNombre del porveedor: ";
    cin>>f.nombre;
    cout<<"\n\tFecha de ingreso: ";
    cin>>f.fecha;
    cout<<"\n\tDigite numero de Placa del vehiculo: ";
    cin>>v.placa;
    m.placa = v.placa;
    cout<<"\n\tDigite Tipo de vehiculo (terrestre, fluvial, etc...): ";
    cin>>v.tipo;
    cout<<"\n\tDigite modelo del vehiculo(mazda, audi, ferrari, etc...): ";
    cin>>v.modelo;
    m.modelo = v.modelo;
    cout<<"\n\tDigite numero de puertas: ";
    cin>>v.puerta;
    cout<<"\n\tDigite la capacidad del vehiculo: ";
    cin>>v.capacidad;
    cout<<"\n\tDigite tipo de combustible: ";
    cin>>v.tipocombustible;
    cout<<"\n\tDigite numero de llantas del vehiculo: ";
    cin>>v.numllantas;
    cout<<"\n\tDigite el precio del vehiculo ingresado: ";
    cin>>v.precio;
    recibosup.push_back(f);
    reciboin.push_back(m);
    automovil.push_back(v);
    inventario.push_back(v);
    for (int j=0; j<inventario.size(); j++){
        for (int i=1; i<inventario.size(); i++){
            if (j != i){
                if (inventario[j].modelo == inventario[i].modelo ){
                    inventario.erase(inventario.begin()+i);
                    inventario[j].cantidad += 1;
                    inventario[j].precio = v.precio;
                }
            }
        }
    }




}

void mostrar_inv(){
    char p;
    do{
        cout<<"\n\t=====INVENTARIO======";
        for(int i=0; i<inventario.size(); i++){
            if (inventario[i].cantidad != 0){
                cout<<"\n\tModelo: " <<inventario[i].modelo;
                cout<<"\n\tCantidad: "<<inventario[i].cantidad;
                cout<<"\n\tPrecio: "<<inventario[i].precio;
                cout<<"\n\t----------------------------------";
            }
    }
       cout<<"\n\n--Desea ir al menu 's': ";
       cin>>p;
    }while(p == 'n' or p =='N');

}

void mostrarDatos(){
    char r;
    do
    {
        cout<<"\n\t====== Vehiculos ======";
        for(int i=0; i<automovil.size(); i++)
        {
            cout<<"\n\tTipo : "<<automovil[i].tipo;
            cout<<"\n\tPlaca : "<<automovil[i].placa;
            cout<<"\n\tModelo : "<<automovil[i].modelo;
            cout<<"\n\tNumero de puertas : "<<automovil[i].puerta;
            cout<<"\n\tCapacidad : "<<automovil[i].capacidad;
            cout<<"\n\tTipo de combustible: "<<automovil[i].tipocombustible;
            cout<<"\n\tNumero de llantas: "<<automovil[i].numllantas;
            cout<<"\n\t------------------------------------";
        }
        cout<<"\n\t----------Desea limpiar la pantalla y volver al menu 'S' o 'N': ";
        cin>>r;
    }while (r == 'n' or r == 'N');
}

void buscar(){
    string dato;
    char r;
    do
    {
    cout<<"\t\nDigite dato con el cual desea buscar el vehiculo: ";
    cin>>dato;
    for(int i=0; i<automovil.size(); i++){
        if (dato == automovil[i].tipo)
        {
            cout<<"\n\tTipo : "<<automovil[i].tipo;
            cout<<"\n\tPlaca : "<<automovil[i].placa;
            cout<<"\n\tModelo : "<<automovil[i].modelo;
            cout<<"\n\tNumero de puertas : "<<automovil[i].puerta;
            cout<<"\n\tCapacidad : "<<automovil[i].capacidad;
            cout<<"\n\tTipo de combustible: "<<automovil[i].tipocombustible;
            cout<<"\n\tNumero de llantas: "<<automovil[i].numllantas;
            cout<<"\n\t------------------------------------";
        }
        if (dato == automovil[i].placa)
        {
            cout<<"\n\tTipo : "<<automovil[i].tipo;
            cout<<"\n\tPlaca : "<<automovil[i].placa;
            cout<<"\n\tModelo : "<<automovil[i].modelo;
            cout<<"\n\tNumero de puertas : "<<automovil[i].puerta;
            cout<<"\n\tCapacidad : "<<automovil[i].capacidad;
            cout<<"\n\tTipo de combustible: "<<automovil[i].tipocombustible;
            cout<<"\n\tNumero de llantas: "<<automovil[i].numllantas;
            cout<<"\n\t------------------------------------";
        }
        if (dato == automovil[i].modelo)
        {
            cout<<"\n\tTipo : "<<automovil[i].tipo;
            cout<<"\n\tPlaca : "<<automovil[i].placa;
            cout<<"\n\tModelo : "<<automovil[i].modelo;
            cout<<"\n\tNumero de puertas : "<<automovil[i].puerta;
            cout<<"\n\tCapacidad : "<<automovil[i].capacidad;
            cout<<"\n\tTipo de combustible: "<<automovil[i].tipocombustible;
            cout<<"\n\tNumero de llantas: "<<automovil[i].numllantas;
            cout<<"\n\t------------------------------------";
        }
        if (dato == automovil[i].puerta)
        {
            cout<<"\n\tTipo : "<<automovil[i].tipo;
            cout<<"\n\tPlaca : "<<automovil[i].placa;
            cout<<"\n\tModelo : "<<automovil[i].modelo;
            cout<<"\n\tNumero de puertas : "<<automovil[i].puerta;
            cout<<"\n\tCapacidad : "<<automovil[i].capacidad;
            cout<<"\n\tTipo de combustible: "<<automovil[i].tipocombustible;
            cout<<"\n\tNumero de llantas: "<<automovil[i].numllantas;
            cout<<"\n\t------------------------------------";
        }
        if (dato == automovil[i].capacidad)
        {
            cout<<"\n\tTipo : "<<automovil[i].tipo;
            cout<<"\n\tPlaca : "<<automovil[i].placa;
            cout<<"\n\tModelo : "<<automovil[i].modelo;
            cout<<"\n\tNumero de puertas : "<<automovil[i].puerta;
            cout<<"\n\tCapacidad : "<<automovil[i].capacidad;
            cout<<"\n\tTipo de combustible: "<<automovil[i].tipocombustible;
            cout<<"\n\tNumero de llantas: "<<automovil[i].numllantas;
            cout<<"\n\t------------------------------------";
       }
        if (dato == automovil[i].tipocombustible)
        {
            cout<<"\n\tTipo : "<<automovil[i].tipo;
            cout<<"\n\tPlaca : "<<automovil[i].placa;
            cout<<"\n\tModelo : "<<automovil[i].modelo;
            cout<<"\n\tNumero de puertas : "<<automovil[i].puerta;
            cout<<"\n\tCapacidad : "<<automovil[i].capacidad;
            cout<<"\n\tTipo de combustible: "<<automovil[i].tipocombustible;
            cout<<"\n\tNumero de llantas: "<<automovil[i].numllantas;
            cout<<"\n\t------------------------------------";
        }
        if (dato == automovil[i].numllantas)
        {
            cout<<"\n\tTipo : "<<automovil[i].tipo;
            cout<<"\n\tPlaca : "<<automovil[i].placa;
            cout<<"\n\tModelo : "<<automovil[i].modelo;
            cout<<"\n\tNumero de puertas : "<<automovil[i].puerta;
            cout<<"\n\tCapacidad : "<<automovil[i].capacidad;
            cout<<"\n\tTipo de combustible: "<<automovil[i].tipocombustible;
            cout<<"\n\tNumero de llantas: "<<automovil[i].numllantas;
            cout<<"\n\t------------------------------------";
        }
    }
    cout<<"\n\t===Desea limpiar la pantalla y volver al menu  's' de lo contrario presione 'n' para buscar otro vehiculo: ";
    cin>>r;
    }while (r == 'n' or r == 'N');
}

void actualizar(){
    string dato;
    int k=0;
    string dato2;
    cout<<"\t\nDigite Modelo o Placa de vehiculo(s) que desea actualizar: ";
    cin>>dato;
    for(int i=0; i<automovil.size(); i++){
        if (dato == automovil[i].modelo)
        {
            k=i;
        }
        if (dato == automovil[i].placa)
        {
            k=i;
        }
        cout<<"\n\tDigite dato que desea cambiar: ";
        cin>>dato2;
        if (dato2 == automovil[k].modelo)
        {
            cout<<"\n\tDigite el modelo por el cual desea cambiar el anterior: ";
            cin>>automovil[k].modelo;
        }
        if (dato2 == automovil[k].tipo)
        {
            cout<<"\n\tDigite tipo de vehiculo por el cual desea cambiar el anterior: ";
            cin>>automovil[k].tipo;
        }
        if (dato2 == automovil[k].placa)
        {
            cout<<"\n\Digite numero de placa nueva para el vehiculo: ";
            cin>>automovil[k].placa;
        }
        if (dato2 == automovil[k].puerta)
        {
            cout<<"\n\tDigite numero de puertas que se han modificado a este vehiculo: ";
            cin>>automovil[k].puerta;
        }
        if (dato2 == automovil[k].capacidad)
        {
            cout<<"\n\tDigite la capacidad que se le ha modificado al vehiculo : ";
            cin>>automovil[k].capacidad;
        }
        if (dato2 == automovil[k].tipocombustible)
        {
            cout<<"\n\tDigite el tipo de combustible que se le ha cambiado al vehiculo: ";
            cin>>automovil[k].tipocombustible;
        }
        if (dato2 == automovil[k].numllantas)
        {
            cout<<"\n\tDigite numero de llantas que se le ha modificado al equipo: ";
            cin>>automovil[k].numllantas;
        }
    }
}

void eliminar(){
    int aux3;
    string dato3;
    cout<<"\t\nDigite numero de placa del vehiculo que desea eliminar: ";
    cin>>dato3;
    for(int i=0; i<automovil.size(); i++){
        if (dato3 == automovil[i].placa)
        {
            automovil.erase(automovil.begin()+i);
            aux3 = i;
        }
    }
    for (int k=0; k<inventario.size(); k++){
        if (automovil[aux3].modelo == inventario[k].modelo){
            inventario[k].cantidad -= 1;
        }
    }
}

string convertidorRealaCadena(float A){
    ostringstream ostr;
    ostr << A;
    return ostr.str();
}

bool guardar_arc(){
    string vehi;
    for(int i = 0; i < automovil.size(); i++){
            if(automovil[i].placa != "000"){
                vehi += automovil[i].placa +"\n";
                vehi += automovil[i].modelo +"\n";
                vehi += automovil[i].puerta +"\n";
                vehi += automovil[i].capacidad +"\n";
                vehi += automovil[i].tipocombustible +"\n";
                vehi += automovil[i].numllantas +"\n";
            }
    ofstream o;
    o.open("Vehiculos.csv");//Abro el archivo
    o<<vehi;
    o.close();//Cierro el archivo
    }
//********************************************************************************************
    string inv;
    for(int j = 0; j < inventario.size(); j++){
            if (inventario[j].modelo != "000"){
                 inv += inventario[j].modelo+"\n";
                 inv += convertidorRealaCadena(inventario[j].cantidad)+"\n";
            }
    }
    ofstream i;
    i.open("Inventario.csv");
    i<<inv;
    i.close();
//********************************************************************************************
    string fac;
    for(int k = 0; k < recibosup.size(); k++){
            if (recibosup[k].fecha != "000"){
                fac += recibosup[k].id+"\n";
                fac += recibosup[k].fecha+"\n";
                fac += recibosup[k].nombre+"\n";
            }
    }

    ofstream fs;
    fs.open("FacturaSuperior.csv");
    fs<<fac;
    fs.close();
//********************************************************************************************
    string fac2;
    for(int l = 0; l < reciboin.size(); l++){
            if (reciboin[l].placa != "000"){
                fac2 += reciboin[l].placa+"\n";
                fac2 += reciboin[l].modelo+"\n";
                fac2 += reciboin[l].cantidad+"\n";
            }
    }
    ofstream fi;
    fi.open("FacturaInferior.csv");
    fi<<fac2;
    fi.close();
}

int main() {
    char aux = '0';
    while(aux != 'E'){
        menu();
        cin>> aux;
        switch(aux) {
            case '1':
                        entrarDatos();
                        break;
            case '2':
                        mostrarDatos();
                        break;
            case '3':
                        buscar();
                        break;
            case '4':
                        actualizar();
                        break;
            case '5':
                        eliminar();
                        break;

            case '6':
                        mostrar_inv();
                        break;

            case '7':
                        crear_factura();
                        break;

            case '8':
                        mostrar_factura_ingreso();
                        break;

            case '9':
                        mostrar_factura_ventas();
                        break;

            case 'G':
                        guardar_arc();
                        break;

            case 'E':
                        break;

            default:
                    {
                        cout << "\n\n\tERROR!";
                        system("PAUSE");
                        aux = '0';
                    }
        }system("CLS");
    }
    cout << "\n\n\tGracias ¡Hasta la proxima!...\n\n";
    return 0;
}


