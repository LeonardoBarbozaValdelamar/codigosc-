#include <iostream>
#include <locale.h>//libreria para incluir tildes, ñ y demas

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
		cout<<"Al final resolvera un cuestionario de selección multiple y se le mostrara el porcentaje de respuestas buenas y malas"<<endl;
		cout<<endl;
		system("pause");
		system("cls");
		cout<<" ---------------"<<endl;
		cout<<"|Primera lectura|"<<endl;
		cout<<" ---------------"<<endl;
		cout<<"La quimica"<<endl;
		cout<<"----------"<<endl;
		cout<<"Una ciencia central"<<endl;
		cout<<"La Química es la ciencia que estudia la estructura, la composición y las propiedades de la materia, así como"<<endl;
		cout<<"las transformaciones que ésta experimenta durante las reacciones químicas."<<endl;
		cout<<endl;
		cout<<"Es una de las ciencias básicas porque numerosos campos de conocimiento, como por ejemplo la biología, la"<<endl;
		cout<<"medicina, la geología o la astronomía, se apoyan en ella para desarrollar sus contenidos."<<endl;
		cout<<endl;
		cout<<"La Química ha estado siempre presente en la historia de la humanidad: nuestros primeros antepasados ya la"<<endl;
		cout<<"utilizaban cuando transformaban el barro en cerámica, pintaban superficies con tintes naturales o conservaban"<<endl;
		cout<<"la comida en sal. Los filósofos griegos la miraban con desdén por su carácter práctico muy lejano al pensamiento “puro”."<<endl;
		cout<<"No fue hasta el renacimiento y concretamente con Robert Boyle que se acuñó el nombre de Química y describió el método"<<endl;
		cout<<"experimental para adquirir nuevos conocimientos, practicando la inducción mental para interpretar la realidad observada."<<endl;
		cout<<"La Química a partir de este momento buscó, como toda ciencia experimental, el Cómo en lugar del Por qué."<<endl;
		cout<<endl;
		cout<<"En el siglo XX, la Química profundiza en el estudio de la estructura de los átomos y la formación de las moléculas,"<<endl;
		cout<<"fórmulas y organismos complejos y la industria química se expande con la creación de nuevos materiales, productos y fármacos"<<endl;
		cout<<"que ayudan a mejorar la calidad de vida de las personas."<<endl;
		cout<<endl;
		cout<<"Actualmente, la Química sigue aportando multitud de mejoras para el progreso de la sociedad, especialmente gracias a los"<<endl;
		cout<<"nuevos campos de estudio y sus aplicaciones"<<endl;
		cout<<endl;
		system("pause");
		system("cls");
		cout<<" ---------------"<<endl;
		cout<<"|Segunda lectura|"<<endl;
		cout<<" ---------------"<<endl;
		cout<<"Aplicaciones"<<endl;
		cout<<"----------"<<endl;
		cout<<"La Química se encuentra en todas partes: en la fotosíntesis de las plantas, en el ADN de nuestras células, en los"<<endl;
		cout<<"medicamentos, en el color de nuestra ropa, en la elaboración de combustibles... Sería posible afirmar que la"<<endl;
		cout<<" Química es una de las ciencias que más ha permitido avanzar a la sociedad y que más ha facilitado y mejorado"<<endl;
		cout<<"la vida de las personas. ¿Te imaginas el mundo sin vacunas, sin ordenadores o sin medios de transporte como el coche?"<<endl;
		cout<<endl;
		cout<<"Para entender las múltiples aplicaciones que tiene la Química, nos podemos fijar en las distintas disciplinas que hay"<<endl;
		cout<<"dentro de esta ciencia, y que se agrupan según el tipo de estudio o la materia que analizan."<<endl;
		cout<<endl;
		cout<<"Clasificación de las distintas ramas de la Química"<<endl;
		cout<<"En un intento por clasificar las distintas ramas de la Química debemos mencionar:"<<endl;
		cout<<endl;
		cout<<"Química orgánica: estudia los compuestos que contienen átomos con enlaces carbono/hidrógeno, como los hidrocarburos,"<<endl;
		cout<<"los polímeros o las proteínas. Abarca todos los elementos naturales y los tejidos orgánicos. Nos proporciona"<<endl;
		cout<<"soluciones para mejorar nuestra calidad de vida en ámbitos como la higiene o la salud."<<endl;
		cout<<endl;
		cout<<"Química inorgánica: estudia la formación, composición, estructura y reacciones químicas de los elementos y compuestos"<<endl;
		cout<<"inorgánicos, es decir, aquellos que no contienen enlaces de carbono/hidrógeno, como son los metales, los minerales"<<endl;
		cout<<"o los materiales cerámicos. Por ejemplo, la fibra óptica, el hormigón o los chips electrónicos son aplicaciones"<<endl;
		cout<<"de la química inorgánica."<<endl;
		cout<<endl;
		cout<<"Bioquímica: Estudia las sustancias presentes en los organismos vivos, como plantas, animales, microorganismos"<<endl;
		cout<<"o seres humanos."<<endl;
		cout<<endl;
		cout<<"Química-física: estudia la materia y sus transformaciones mediante la aplicación de conocimientos físicos como el"<<endl;
		cout<<"movimiento, el tiempo, la energía, las fuerzas, etc."<<endl;
		cout<<endl;
		cout<<"Química analítica: tiene como finalidad el estudio de la composición química de un material o muestra, mediante"<<endl;
		cout<<"diferentes métodos de laboratorio."<<endl;
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
				cout<<"1.¿Que estudia la quimica?"<<endl;
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
				cout<<"2.¿De que esta formado un elemento?"<<endl;
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
				cout<<"3.¿ Donde es aplicada la quimica?"<<endl;
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
				cout<<"4.¿ En que siglo se profundiza el estudio de la quimica?"<<endl;
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
				cout<<"5.¿Que estudia la quimica organica?"<<endl;
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
				cout<<"6. ¿que estudia la quimica inorganica?"<<endl;
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
				cout<<"7. ¿Que estudia la bioquímica?"<<endl;
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
				cout<<"8. ¿Que estudia la fisico-quimica?"<<endl;
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
				cout<<"9. ¿ Que estudia la quimica analitica?"<<endl;
				cout<<endl;
				cout<<"A. La materia"<<endl;
				cout<<"B. La composición química"<<endl; 
				cout<<"C. La composición fisica"<<endl;
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
				cout<<"10.¿ En que campos se relaciona la quimica?"<<endl;
				cout<<endl;
				cout<<"A. Filosofía, psicologia"<<endl;
				cout<<"B. Política y sociología"<<endl;
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
