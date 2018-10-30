#include <iostream>
#include <cstdlib>

using namespace std;
void menu(int &);
void xelemento(string[],string[],string[],string[]);
void metales(string[],string[],string[],string[]);
void metalest(string[],string[],string[],string[]);
void nometales(string[],string[],string[],string[]);
void gases(string[],string[],string[],string[]);
void lantanidos(string[],string[],string[],string[]);
void actinidos(string[],string[],string[],string[]);
int main(){
    int opcion;
    string elementos[131] = {"HIDROGENO","HELIO",
    "LITIO","BERILIO","BORO","CARBONO","NITROGENO","OXIGENO","FLUOR","NEON",
    "SODIO","MAGNESIO","ALUMINIO","SILICIO","FOSFORO","AZUFRE","CLORO","ARGON",
    "POTASIO","CALCIO","ESCANDIO","TITANIO","VANADIO","CROMO","MANGANESIO","HIERRO","COBALTO","NIQUEL","COBRE","ZINC","GALIO","GERMANIO","ARSENICO","SELENIO","BROMO","KRIPTON",
    "RUBIDIO","ESTRONCIO","ITRIO","ZIRCONIO","NIOBIO","MOLIBDENO","TECNECIO","RUTENIO","RODIO","PALADIO","PLATA","CADMIO","INDIO","ESTANO","ANTIMONIO","TELURIO","YODO","XENON",
    "CESIO","BARIO","LANTANO","CERIO","PRASEODIMIO","NEODIMIO","PROMETIO","SAMARIO","EUROPIO","GADOLINIO","TERBIO","DISPROSIO","HOLMIO","ERBIO","TULIO","YETERBIO","LUTECIO","HAFNIO",
    "TANTALIO","TUNGSTENO","RENIO","OSMIO","IRIDIO","PLATINO","ORO","MERCURIO","TALIO","PLOMO","BISMUTO","POLONIO","ASTATO","RANDON","FRANCIO","RADIO","ACTINIO","TORIO",
    "PROTACTENIO","URANIO","NEPTUNIO","PLUTONIO","AMERICIO","CURIO","BERKELIO","CALIFORNIO","EINSTENIO","FERMIO","MENDELEVIO","NOBELIO","LAWRENCIO","RUTERFORDIO",
    "DUBNIO","UNILHEXIO","UNILHEPTIO","UNILHOCTIO","UNILMONIO","UNUNNILIO","PLUTIRIO","DARWANZIO","TUSTRANO","ERRISTENEO","MERCHEL","NECTAREN","EFELIO","OBERON",
    "MELTNENIO","UNUNNILIUM","UNUNUNIUM","UNUNBLUM","UNUNTIUM","UNUNQUADIUM","UNUNPETIUM","UNUNHAXIUM","UNUNSEPTIUM","UNUNOCTIUM","UNUNENIUM","UNBINILLIUM","UNBIUNIUM"};

    string simbolos[131] = {"H","He",
    "Li","Be","B","C","N","O","F","Ne",
    "Na","Mg","Al","Si","P","S","Cl","Ar",
    "K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr",
    "Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe",
    "Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu","Hf",
    "Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn","Fr","Ra","Ac","Th",
    "Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr","Rf",
    "Db","Sg","Bh","Hs","Mt","Uun","Uuu","Uub","Uut","Uuq","Uup","Uwh","Uus","Uuo",
    "Mt","Uun","Uuu","Uub","Uut","Uuq","Uup","Uuh","Uus","Uuo","Uue","Uun","Ubu"};
    
    string pesoatomico[131] = {"1,0079","4,0026",
    "6,941","9,0122","10,811","12,0107","14,0067","15,9994","18,9984","20,179",
    "22,969","9,0122","26,9815","28,086","30,9738","32,066","35,453","39,948",
    "39,098","112,40","44,956","47,90","50,941","51,996","54,938","55,847","58,933","58,693","63,54","63,39","69,72","72,59","74,9216","78,96","79,909","83,80",
    "85,467","81,62","88,905","91,22","92,906","95,94","98,90","101,07","102,905","106,42","107,868","112,411","114,818","118.818","121,760","127,60","126,904","131,50",
    "132,905","137,34","138,905","140,12","104,907","144,34","145","150,35","151,96","157,25","158,925","162,50","164,930","167,26","168,934","173,04","174,97","178,49",
    "180,948","183,85","186,2","190,2","192,2","195,078","196,966","112,411","204,38","207,2","208,980","210","210","222","223","226","227","232,038",
    "231,032","328,028","237,048","244","243","243","247","251","254","257","260","259","262","261",
    "262","266","262","265","266","271","272","285","289","289","279","282","286","292",
    "266","271","272","---","---","---","---","---","---","---","---","---","---"};
    
    string densidad[131] = {"0,71","0,179",
    "0,53","1,816","2,32","2,62","0,808","1,426","1,696","1,20",
    "0,97","1,816","2,70","2,33","1,82","2,046","1,56","1,65",
    "0,86","1,65","3,0","4,50","5,96","7,19","7,43","7,86","8,9","8,9","8,92","7,140","5,91","5,32","5,72","4,8","3,12","2,818",
    "1,53","2,6","5,51","6,49","8,55","10,2","11,5","12,2","12,4","12,0","10,5","8,65","7,31","5,750","6,684","6,24","4,94","3,96",
    "1,90","3,5","6,15","6,78","6,77","7,00","6,46","7,54","5,26","7,89","8,27","8,54","8,80","9,05","9,33","6,98","9,84","13,1",
    "1,66","19,3","21,0","22,48","22,5","21,45","19,3","8,65","11,85","11,34","9,8","9,4","---","9,91","---","5","10,07","11,7",
    "15,4","18,00","20,4","19,8","13,6","13,51","---","---","---","---","---","---","---","19,08",
    "19,90","---","---","---","---","---","8,80","23,40","3","624","102","98,0","620","22,6",
    "---","---","---","---","---","---","---","---","---","---","---","---","---"};
    while(0<1){
        system("cls");
        menu(opcion);
        switch(opcion){
            case 1:
                xelemento(elementos,simbolos,pesoatomico,densidad);
                break;
            case 2:
                metales(elementos,simbolos,pesoatomico,densidad);
                break;
            case 3:
                metalest(elementos,simbolos,pesoatomico,densidad);
                break;
            case 4:
                nometales(elementos,simbolos,pesoatomico,densidad);
                break;
            case 5:
                gases(elementos,simbolos,pesoatomico,densidad);
                break;
            case 6:
                lantanidos(elementos,simbolos,pesoatomico,densidad);
                break;
            case 7:
                actinidos(elementos,simbolos,pesoatomico,densidad);
                break;
        }
        if(opcion==8){
            break;
        }
    }
    return 70;
}
void menu(int &opcion){
    cout<<"                                       Menu Principal"<<endl;
    cout<<"1.Buscar cualquier elemento"<<endl;
    cout<<"2.Metales"<<endl;
    cout<<"3.Metales de transicion"<<endl;
    cout<<"4.No metales"<<endl;
    cout<<"5.Gases nobles"<<endl;
    cout<<"6.Lantanidos"<<endl;
    cout<<"7.Actinidos"<<endl;
    cout<<"8.Salir"<<endl;
    cout<<"Ingrese opcion:";
    cin>>opcion;
    while(opcion<1 || opcion>8){
        system("cls");
        cout<<"                                       Menu Principal"<<endl;
        cout<<"1.Buscar cualquier elemento"<<endl;
        cout<<"2.Metales"<<endl;
        cout<<"3.Metales de transicion"<<endl;
        cout<<"4.No metales"<<endl;
        cout<<"5.Gases nobles"<<endl;
        cout<<"6.Lantanidos"<<endl;
        cout<<"7.Actinidos"<<endl;
        cout<<"8.Salir"<<endl;
        cout<<"Ingrese opcion:";
        cin>>opcion;
    }
}
void xelemento(string elementos[],string simbolos[],string pesoatomico[],string densidad[]){
    system("cls");
    string nombre;
    int natomico,aux=0,aux2=0;
    int opcion1;
    cout<<"De que forma desea buscar el elemento:"<<endl;
    cout<<"1.Nombre"<<endl;
    cout<<"2.Numero atomico"<<endl;
    cout<<"3.salir"<<endl;
    cout<<"Ingrese opcion:";
    cin>>opcion1;
    while(opcion1<1 || opcion1>3){
        system("cls");
        cout<<"Ingrese un valor valido"<<endl;
        system("pause");
        system("cls");
        cout<<"De que forma desea buscar el elemento:"<<endl;
        cout<<"1.Nombre"<<endl;
        cout<<"2.Numero atomico"<<endl;
        cout<<"Ingrese opcion:";
        cin>>opcion1;
    }
    switch(opcion1){
        case 1:
            system("cls");
            cout<<"Ingrese el nombre en mayuscula del elemento deseado:";
            cin>>nombre;
            system("cls");
            for(int i=0;i<131;i++){
                if(nombre==elementos[i]){
                    cout<<"Nombre del elemento:"<<elementos[i]<<endl;
                    cout<<"Simbolo del elemento:"<<simbolos[i]<<endl;
                    cout<<"numero atomico del elemento:"<<i+1<<endl;
                    cout<<"Peso atomico:"<<pesoatomico[i]<<endl;
                    cout<<"Densidad:"<<densidad[i]<<endl;
                    aux2+=1;
                    system("pause");
                }
                if(i==130 && aux2==0){
                	cout<<"No se encontro elemento"<<endl;
                	cout<<"usted ingreso:"<<nombre<<endl;
                	system("pause");
				}
            }
            break;
        case 2:
            system("cls");
            cout<<"Ingrese el numerico atomico:";
            cin>>natomico;
            for(int i=1;i<132;i++){
                if(natomico==i){
                    cout<<"Nombre del elemento:"<<elementos[i-1]<<endl;
                    cout<<"Simbolo del elemento:"<<simbolos[i-1]<<endl;
                    cout<<"numero atomico del elemento:"<<i<<endl;
                    cout<<"Peso atomico:"<<pesoatomico[i]<<endl;
                    cout<<"Densidad:"<<densidad[i]<<endl;
                    aux+=1;
                    system("pause");
                }
                if(i==130 && aux==0){
                	cout<<"No se encontro elemento"<<endl;
                	cout<<"Numero atomico ingresado:"<<natomico<<endl;
                	system("pause");
				}
            }
            break;
    }
}
void metales(string elementos[],string simbolos[],string pesoatomico[],string densidad[]){
    system("cls");
    int aux2=0;
    string buscar;
    cout<<"                                       Metales"<<endl;
    cout<<elementos[0]<<","<<simbolos[0]<<endl;
    for(int i=0;i<131;i++){
        if(i>1 && i<4){
            cout<<elementos[i]<<","<<simbolos[i]<<endl;
        }
        if(i>9 && i<12){
            cout<<elementos[i]<<","<<simbolos[i]<<endl;
        }
        if(i>17 && i<20){
            cout<<elementos[i]<<","<<simbolos[i]<<endl;
        }
        if(i>35 && i<38){
            cout<<elementos[i]<<","<<simbolos[i]<<endl;
        }
        if(i>53 && i<56){
            cout<<elementos[i]<<","<<simbolos[i]<<endl;
        }
        if(i>84 && i<87){
            cout<<elementos[i]<<","<<simbolos[i]<<endl;
        }
    }
    cout<<"Ingrese Simbolo del elemento:";
    cin>>buscar;
    system("cls");
            for(int i=0;i<131;i++){
                if(buscar==simbolos[i]){
                    cout<<"Nombre del elemento:"<<elementos[i]<<endl;
                    cout<<"Simbolo del elemento:"<<simbolos[i]<<endl;
                    cout<<"numero atomico del elemento:"<<i+1<<endl;
                    cout<<"Peso atomico:"<<pesoatomico[i]<<endl;
                    cout<<"Densidad:"<<densidad[i]<<endl;
                    aux2+=1;
                    system("pause");
                }
                if(i==130 && aux2==0){
                	cout<<"No se encontro elemento"<<endl;
                	cout<<"usted ingreso:"<<buscar<<endl;
				}
            }
    system("pause");

}
void metalest(string elementos[],string simbolos[],string pesoatomico[],string densidad[]){
    system("cls");
    int aux2=0;
    string buscar;
    cout<<"                                       Metales de Transicion"<<endl;
    for(int i=0;i<131;i++){
        if(i>19 && i<30){
            cout<<elementos[i]<<","<<simbolos[i]<<"   ";
        }
        if(i==29){
            cout<<endl;
        }
        if(i>37 && i<48){
            cout<<elementos[i]<<","<<simbolos[i]<<"  ";
        }
        if(i==47){
            cout<<endl;
        }
        if(i==56){
            cout<<elementos[56]<<","<<simbolos[56]<<"  ";
        }
        if(i>70 && i<80){
            cout<<elementos[i]<<","<<simbolos[i]<<"  ";
        }
        if(i==79){
            cout<<endl;
        }
        if(i==88){
            cout<<elementos[88]<<","<<simbolos[88]<<"  ";
        }
        if(i>102 && i<109){
            cout<<elementos[i]<<","<<simbolos[i]<<"  ";
        }
        if(i==108){
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<"Ingrese Simbolo del elemento:";
    cin>>buscar;
    system("cls");
            for(int i=0;i<131;i++){
                if(buscar==simbolos[i]){
                    cout<<"Nombre del elemento:"<<elementos[i]<<endl;
                    cout<<"Simbolo del elemento:"<<simbolos[i]<<endl;
                    cout<<"numero atomico del elemento:"<<i+1<<endl;
                    cout<<"Peso atomico:"<<pesoatomico[i]<<endl;
                    cout<<"Densidad:"<<densidad[i]<<endl;
                    aux2+=1;
                }
                if(i==130 && aux2==0){
                	cout<<"No se encontro elemento"<<endl;
                	cout<<"usted ingreso:"<<buscar<<endl;
				}
            }
    system("pause");
}
void nometales(string elementos[],string simbolos[],string pesoatomico[],string densidad[]){
    system("cls");
    int aux2=0;
    string buscar;
    cout<<"                                       No Metales"<<endl;
    for(int i=0;i<131;i++){
        if(i>3 && i<9){
            cout<<elementos[i]<<","<<simbolos[i]<<"   ";
        }
        if(i==8){
            cout<<endl;
        }
        if(i>11 && i<17){
            cout<<elementos[i]<<","<<simbolos[i]<<"  ";
        }
        if(i==16){
            cout<<endl;
        }
        if(i>29 && i<35){
            cout<<elementos[i]<<","<<simbolos[i]<<"  ";
        }
        if(i==34){
            cout<<endl;
        }
        if(i>47 && i<53){
            cout<<elementos[i]<<","<<simbolos[i]<<"  ";
        }
        if(i==52){
            cout<<endl;
        }
        if(i>79 && i<85){
            cout<<elementos[i]<<","<<simbolos[i]<<"  ";
        }
        if(i==84){
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<"Ingrese Simbolo del elemento:";
    cin>>buscar;
    system("cls");
            for(int i=0;i<131;i++){
                if(buscar==simbolos[i]){
                    cout<<"Nombre del elemento:"<<elementos[i]<<endl;
                    cout<<"Simbolo del elemento:"<<simbolos[i]<<endl;
                    cout<<"numero atomico del elemento:"<<i+1<<endl;
                    cout<<"Peso atomico:"<<pesoatomico[i]<<endl;
                    cout<<"Densidad:"<<densidad[i]<<endl;
                    aux2+=1;
                }
                if(i==130 && aux2==0){
                	cout<<"No se encontro elemento"<<endl;
                	cout<<"usted ingreso:"<<buscar<<endl;
				}
            }
    system("pause");
}
void gases(string elementos[],string simbolos[],string pesoatomico[],string densidad[]){
    system("cls");
    int aux2=0;
    string buscar;
    cout<<"                                       Gases Nobles"<<endl;
    cout<<elementos[1]<<","<<simbolos[1]<<endl;
    cout<<elementos[9]<<","<<simbolos[9]<<endl;
    cout<<elementos[17]<<","<<simbolos[17]<<endl;
    cout<<elementos[35]<<","<<simbolos[35]<<endl;
    cout<<elementos[53]<<","<<simbolos[53]<<endl;
    cout<<elementos[85]<<","<<simbolos[85]<<endl;
    cout<<endl;
    cout<<"Ingrese Simbolo del elemento:";
    cin>>buscar;
    system("cls");
            for(int i=0;i<131;i++){
                if(buscar==simbolos[i]){
                    cout<<"Nombre del elemento:"<<elementos[i]<<endl;
                    cout<<"Simbolo del elemento:"<<simbolos[i]<<endl;
                    cout<<"numero atomico del elemento:"<<i+1<<endl;
                    cout<<"Peso atomico:"<<pesoatomico[i]<<endl;
                    cout<<"Densidad:"<<densidad[i]<<endl;
                    aux2+=1;
                }
                if(i==130 && aux2==0){
                	cout<<"No se encontro elemento"<<endl;
                	cout<<"usted ingreso:"<<buscar<<endl;
				}
            }
    system("pause");
}
void lantanidos(string elementos[],string simbolos[],string pesoatomico[],string densidad[]){
    system("cls");
    int aux2=0;
    string buscar;
    cout<<"                                       Lantanidos"<<endl;
    for(int i=0;i<131;i++){
        if(i>56 && i<71){
            cout<<elementos[i]<<","<<simbolos[i]<<endl;
        }

    }
    cout<<endl;
    cout<<"Ingrese Simbolo del elemento:";
    cin>>buscar;
    system("cls");
            for(int i=0;i<131;i++){
                if(buscar==simbolos[i]){
                    cout<<"Nombre del elemento:"<<elementos[i]<<endl;
                    cout<<"Simbolo del elemento:"<<simbolos[i]<<endl;
                    cout<<"numero atomico del elemento:"<<i+1<<endl;
                    cout<<"Peso atomico:"<<pesoatomico[i]<<endl;
                    cout<<"Densidad:"<<densidad[i]<<endl;
                    aux2+=1;
                }
                if(i==130 && aux2==0){
                	cout<<"No se encontro elemento"<<endl;
                	cout<<"usted ingreso:"<<buscar<<endl;
				}
            }
    system("pause");
}
void actinidos(string elementos[],string simbolos[],string pesoatomico[],string densidad[]){
    system("cls");
    int aux2=0;
    string buscar;
    cout<<"                                       Actinidos"<<endl;
    for(int i=0;i<131;i++){
        if(i>88 && i<103){
            cout<<elementos[i]<<","<<simbolos[i]<<endl;
        }

    }
    cout<<endl;
    cout<<"Ingrese Simbolo del elemento:";
    cin>>buscar;
    system("cls");
            for(int i=0;i<131;i++){
                if(buscar==simbolos[i]){
                    cout<<"Nombre del elemento:"<<elementos[i]<<endl;
                    cout<<"Simbolo del elemento:"<<simbolos[i]<<endl;
                    cout<<"numero atomico del elemento:"<<i+1<<endl;
                    cout<<"Peso atomico:"<<pesoatomico[i]<<endl;
                    cout<<"Densidad:"<<densidad[i]<<endl;
                    aux2+=1;
                }
                if(i==130 && aux2==0){
                	cout<<"No se encontro elemento"<<endl;
                	cout<<"usted ingreso:"<<buscar<<endl;
				}
            }
    system("pause");
}
