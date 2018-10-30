#include <iostream>
#include <locale.h>//libreria para incluir tildes, � y demas

using namespace std;
void informacion();
void preguntas(string[],string[],int&,int&);
void porcentaje(int,int);
void continuar(string&);

int main(){
	string seguir;
	int buenas=0,malas=0;
	string solucionM[10]={"A","C","B","C","A","D","A","B","B","C"};
	string solucionm[10]={"a","c","b","c","a","d","a","b","b","c"};
	setlocale(LC_CTYPE, "Spanish");
	while(0<1){
		informacion();
		preguntas(solucionM,solucionm,buenas,malas);
		porcentaje(buenas,malas);
		continuar(seguir);
		if(seguir=="S" || seguir=="s"){	
		}else{
			break;
	}
	system("cls");
	}
	return 22;
}
void informacion(){
	cout<<" -------------"<<endl;
		cout<<"|Instrucciones|"<<endl;
		cout<<" -------------"<<endl;
		cout<<endl;
		cout<<"Se le mostrara unas lecturas las cuales seran evaluadas al final"<<endl;
		cout<<"Cuando pase una lectura no podra volver a leerla"<<endl;
		cout<<"Si escribe una opcion que no esta entre las dadas sera tomada como erronea"<<endl;
		cout<<"Al final resolvera un cuestionario de selecci�n multiple y se le mostrara el porcentaje de respuestas buenas y malas"<<endl;
		cout<<endl;
		system("pause");
		system("cls");
		cout<<" ---------------"<<endl;
		cout<<"|Primera lectura|"<<endl;
		cout<<" ---------------"<<endl;
		cout<<"La quimica"<<endl;
		cout<<"----------"<<endl;
		cout<<"Una ciencia central"<<endl;
		cout<<"La Qu�mica es la ciencia que estudia la estructura, la composici�n y las propiedades de la materia, as� como"<<endl;
		cout<<"las transformaciones que �sta experimenta durante las reacciones qu�micas."<<endl;
		cout<<endl;
		cout<<"Es una de las ciencias b�sicas porque numerosos campos de conocimiento, como por ejemplo la biolog�a, la"<<endl;
		cout<<"medicina, la geolog�a o la astronom�a, se apoyan en ella para desarrollar sus contenidos."<<endl;
		cout<<endl;
		cout<<"La Qu�mica ha estado siempre presente en la historia de la humanidad: nuestros primeros antepasados ya la"<<endl;
		cout<<"utilizaban cuando transformaban el barro en cer�mica, pintaban superficies con tintes naturales o conservaban"<<endl;
		cout<<"la comida en sal. Los fil�sofos griegos la miraban con desd�n por su car�cter pr�ctico muy lejano al pensamiento �puro�."<<endl;
		cout<<"No fue hasta el renacimiento y concretamente con Robert Boyle que se acu�� el nombre de Qu�mica y describi� el m�todo"<<endl;
		cout<<"experimental para adquirir nuevos conocimientos, practicando la inducci�n mental para interpretar la realidad observada."<<endl;
		cout<<"La Qu�mica a partir de este momento busc�, como toda ciencia experimental, el C�mo en lugar del Por qu�."<<endl;
		cout<<endl;
		cout<<"En el siglo XX, la Qu�mica profundiza en el estudio de la estructura de los �tomos y la formaci�n de las mol�culas,"<<endl;
		cout<<"f�rmulas y organismos complejos y la industria qu�mica se expande con la creaci�n de nuevos materiales, productos y f�rmacos"<<endl;
		cout<<"que ayudan a mejorar la calidad de vida de las personas."<<endl;
		cout<<endl;
		cout<<"Actualmente, la Qu�mica sigue aportando multitud de mejoras para el progreso de la sociedad, especialmente gracias a los"<<endl;
		cout<<"nuevos campos de estudio y sus aplicaciones"<<endl;
		cout<<endl;
		system("pause");
		system("cls");
		cout<<" ---------------"<<endl;
		cout<<"|Segunda lectura|"<<endl;
		cout<<" ---------------"<<endl;
		cout<<"Aplicaciones"<<endl;
		cout<<"----------"<<endl;
		cout<<"La Qu�mica se encuentra en todas partes: en la fotos�ntesis de las plantas, en el ADN de nuestras c�lulas, en los"<<endl;
		cout<<"medicamentos, en el color de nuestra ropa, en la elaboraci�n de combustibles... Ser�a posible afirmar que la"<<endl;
		cout<<" Qu�mica es una de las ciencias que m�s ha permitido avanzar a la sociedad y que m�s ha facilitado y mejorado"<<endl;
		cout<<"la vida de las personas. �Te imaginas el mundo sin vacunas, sin ordenadores o sin medios de transporte como el coche?"<<endl;
		cout<<endl;
		cout<<"Para entender las m�ltiples aplicaciones que tiene la Qu�mica, nos podemos fijar en las distintas disciplinas que hay"<<endl;
		cout<<"dentro de esta ciencia, y que se agrupan seg�n el tipo de estudio o la materia que analizan."<<endl;
		cout<<endl;
		cout<<"Clasificaci�n de las distintas ramas de la Qu�mica"<<endl;
		cout<<"En un intento por clasificar las distintas ramas de la Qu�mica debemos mencionar:"<<endl;
		cout<<endl;
		cout<<"Qu�mica org�nica: estudia los compuestos que contienen �tomos con enlaces carbono/hidr�geno, como los hidrocarburos,"<<endl;
		cout<<"los pol�meros o las prote�nas. Abarca todos los elementos naturales y los tejidos org�nicos. Nos proporciona"<<endl;
		cout<<"soluciones para mejorar nuestra calidad de vida en �mbitos como la higiene o la salud."<<endl;
		cout<<endl;
		cout<<"Qu�mica inorg�nica: estudia la formaci�n, composici�n, estructura y reacciones qu�micas de los elementos y compuestos"<<endl;
		cout<<"inorg�nicos, es decir, aquellos que no contienen enlaces de carbono/hidr�geno, como son los metales, los minerales"<<endl;
		cout<<"o los materiales cer�micos. Por ejemplo, la fibra �ptica, el hormig�n o los chips electr�nicos son aplicaciones"<<endl;
		cout<<"de la qu�mica inorg�nica."<<endl;
		cout<<endl;
		cout<<"Bioqu�mica: Estudia las sustancias presentes en los organismos vivos, como plantas, animales, microorganismos"<<endl;
		cout<<"o seres humanos."<<endl;
		cout<<endl;
		cout<<"Qu�mica-f�sica: estudia la materia y sus transformaciones mediante la aplicaci�n de conocimientos f�sicos como el"<<endl;
		cout<<"movimiento, el tiempo, la energ�a, las fuerzas, etc."<<endl;
		cout<<endl;
		cout<<"Qu�mica anal�tica: tiene como finalidad el estudio de la composici�n qu�mica de un material o muestra, mediante"<<endl;
		cout<<"diferentes m�todos de laboratorio."<<endl;
		cout<<endl;
		system("pause");
		system("cls");
}
void preguntas(string solucionM[],string solucionm[],int &buenas,int &malas){
	string respuesta;
	int aux=1;
	buenas=0;
	malas=0;
	for(int i=0;i<10;i++){
		switch(aux){
			case 1:
				cout<<"1.�Que estudia la quimica?"<<endl;
				cout<<endl;
				cout<<"A. La materia"<<endl;
				cout<<"B. La fuerza"<<endl; 
				cout<<"C.la gravedad"<<endl;
				cout<<"D.la ciencia"<<endl;
				cout<<"Respuesta:";
				cin>>respuesta;
				if(respuesta==solucionM[i] || respuesta==solucionm[i]){
					buenas+=1;	
				}else{
					malas+=1;
				}
				aux+=1;
				system("pause");
				system("cls");
				break;
			case 2:
				cout<<"2.�De que esta formado un elemento?"<<endl;
				cout<<endl;
				cout<<"A. Compuestos"<<endl;
				cout<<"B. Sustancias"<<endl;
				cout<<"C. Atomos"<<endl;
				cout<<"D. Materia "<<endl;
				cout<<"Respuesta:";
				cin>>respuesta;
				if(respuesta==solucionM[i] || respuesta==solucionm[i]){
					buenas+=1;	
				}else{
					malas+=1;
				}
				aux+=1;
				system("pause");
				system("cls");
				break;
			case 3:
				cout<<"3.� Donde es aplicada la quimica?"<<endl;
				cout<<endl;
				cout<<"A. Variables"<<endl;
				cout<<"B. ADN de las celulas"<<endl;
				cout<<"C. animales"<<endl;
				cout<<"D. Artefactos"<<endl;
				cout<<"Respuesta:";
				cin>>respuesta;
				if(respuesta==solucionM[i] || respuesta==solucionm[i]){
					buenas+=1;	
				}else{
					malas+=1;
				}
				aux+=1;
				system("pause");
				system("cls");
				break;
			case 4:
				cout<<"4.� En que siglo se profundiza el estudio de la quimica?"<<endl;
				cout<<endl;
				cout<<"A. XVII"<<endl;
				cout<<"B. XV"<<endl;
				cout<<"C.XX"<<endl;
				cout<<"D.XIX"<<endl;
				cout<<"Respuesta:";
				cin>>respuesta;
				if(respuesta==solucionM[i] || respuesta==solucionm[i]){
					buenas+=1;	
				}else{
					malas+=1;
				}
				aux+=1;
				system("pause");
				system("cls");
				break;
			case 5:
				cout<<"5.�Que estudia la quimica organica?"<<endl;
				cout<<endl;
				cout<<"A. Compuestos de carbono e hidrogeno"<<endl;
				cout<<"B. Compuestos de Azufre y fosforo"<<endl;
				cout<<"C. Metales"<<endl;
				cout<<"D. Gases nobles"<<endl;
				cout<<"Respuesta:";
				cin>>respuesta;
				if(respuesta==solucionM[i] || respuesta==solucionm[i]){
					buenas+=1;	
				}else{
					malas+=1;
				}
				aux+=1;
				system("pause");
				system("cls");
				break;
			case 6:
				cout<<"6. �que estudia la quimica inorganica?"<<endl;
				cout<<endl;
				cout<<"A. Compuesto de carbono e hidrogeno"<<endl;
				cout<<"B. Metales alcalinos"<<endl;
				cout<<"C. Halogenos"<<endl;
				cout<<"D. Todas las anteriores"<<endl; 
				cout<<"Respuesta:";
				cin>>respuesta;
				if(respuesta==solucionM[i] || respuesta==solucionm[i]){
					buenas+=1;	
				}else{
					malas+=1;
				}
				aux+=1;
				system("pause");
				system("cls");
				break;
			case 7:
				cout<<"7. �Que estudia la bioqu�mica?"<<endl;
				cout<<endl;
				cout<<"A. Sustancias en los seres vivos"<<endl;
				cout<<"B. Sustancia en los metales"<<endl;
				cout<<"C. Sustancias en los alimentos"<<endl;
				cout<<"D. Sustancias en los animales"<<endl;
				cout<<"Respuesta:";
				cin>>respuesta;
				if(respuesta==solucionM[i] || respuesta==solucionm[i]){
					buenas+=1;	
				}else{
					malas+=1;
				}
				aux+=1;
				system("pause");
				system("cls");
				break;
			case 8:
				cout<<"8. �Que estudia la fisico-quimica?"<<endl;
				cout<<endl;
				cout<<"A. La fuerza"<<endl;
				cout<<"B. Las aplicaciones fisicas en la materia"<<endl;
				cout<<"C. La materia"<<endl;
				cout<<"D. La gravedad"<<endl;
				cout<<"Respuesta:";
				cin>>respuesta;
				if(respuesta==solucionM[i] || respuesta==solucionm[i]){
					buenas+=1;	
				}else{
					malas+=1;
				}
				aux+=1;
				system("pause");	
				system("cls");
				break;
			case 9:
				cout<<"9. � Que estudia la quimica analitica?"<<endl;
				cout<<endl;
				cout<<"A. La materia"<<endl;
				cout<<"B. La composici�n qu�mica"<<endl; 
				cout<<"C. La composici�n fisica"<<endl;
				cout<<"D. Todas las anteriores"<<endl;
				cout<<"Respuesta:";
				cin>>respuesta;
				if(respuesta==solucionM[i] || respuesta==solucionm[i]){
					buenas+=1;	
				}else{
					malas+=1;
				}
				aux+=1;
				system("pause");
				system("cls");
				break;
			case 10:
				cout<<"10.� En que campos se relaciona la quimica?"<<endl;
				cout<<endl;
				cout<<"A. Filosof�a, psicologia"<<endl;
				cout<<"B. Pol�tica y sociolog�a"<<endl;
				cout<<"C. Biologia, fisica"<<endl;
				cout<<"D. Todas las anteriores"<<endl; 
				cout<<"Respuesta:";
				cin>>respuesta;
				if(respuesta==solucionM[i] || respuesta==solucionm[i]){
					buenas+=1;	
				}else{
					malas+=1;
				}
				aux+=1;
				system("pause");
				system("cls");
				break;
		}
	}

}
void porcentaje(int buenas,int malas){
	cout<<"pocentaje de resouestas buenas:";
	cout<<(buenas*100)/10<<endl;
	cout<<"pocentaje de resouestas malas:";
	cout<<(malas*100)/10<<endl;
	system("pause");
	system("cls");
}
void continuar(string &seguir){
	cout<<"Desea continuar S/N?";
	cin>>seguir;
}
