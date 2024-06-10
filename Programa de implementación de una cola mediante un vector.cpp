#include <iostream>
//INTEGRANTES
//ANTONIO JERONIMO RAMIREZ
//RUBEN RAMIREZ ALBA
using namespace std;
const int MAX = 20;
int cola[MAX];
int cabeza=-1;
int fin=-1;
void mostrarCola(){
    cout << "------------------------------------------------------------------------" << endl;
    cout << "|                                Cola                                  |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    if (cabeza == -1) {
        cout << "Cola vacia." << endl;
        return;
    }
	cout<<"[cabeza]"<<endl;
    cout<<" |"<<endl;
    cout<<" ="<<endl;
    for (int i = cabeza; i <= fin; i++){
        cout<<"["<<cola[i]<<"]\t";
    }
    cout<<"<--COLA"<<"//"<<(fin-cabeza+1)<<" elemento(s)"<<endl;
}
void encolarElemento(){
    int elemento;
    if (fin==MAX-1) {
    	system("cls");
    	cout << "------------------------------------------------------------------------" << endl;
    	cout << "|                        No se puede encolar el                        |" << endl;
		cout << "|                    elemento, la cola está llena.                     |" << endl;
    	cout << "------------------------------------------------------------------------" << endl;
    	system("pause");
    	system("cls");
        return;
	}
	cout << "------------------------------------------------------------------------" << endl;
	cout << "|                    Ingrese el elemento a encolar:                    |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cin>>elemento;
	system("cls");
    for(int i=cabeza; i<=fin; i++) {
        if (cola[i] == elemento) {
            cout << "------------------------------------------------------------------------" << endl;
			cout << "|                          Ya esta en la cola                          |" << endl;
    		cout << "------------------------------------------------------------------------" << endl;
    		system("pause");
    		system("cls");
            return;
        }
    }
    if(cabeza==-1){
        cabeza = 0;
    }
    fin++;
    cola[fin]=elemento;
    mostrarCola();
    cout<<endl;
    system("pause");
    system("cls");
}
void desencolarElemento(){
	if (cabeza == -1) {
        cout << "------------------------------------------------------------------------" << endl;
    	cout << "|                        No se puede encolar el                        |" << endl;
		cout << "|                    elemento, la cola esta vacia.                     |" << endl;
    	cout << "------------------------------------------------------------------------" << endl;
        return;
    }
    int elemento;
    cout << "------------------------------------------------------------------------" << endl;
	cout << "|                   Ingrese el elemento a desencolar:                  |" << endl;
	cout << "------------------------------------------------------------------------" << endl;
    cout << " ";
    cin >> elemento;
    system("cls");
    bool encontrado = false;
    int i;
    for (i = cabeza; i <= fin; i++) {
        if (cola[i] == elemento) {
            encontrado = true;
            break;
        }
    }
    if (encontrado) {
        for (int j = cabeza; j < i; j++) {
            cabeza++;
            cout << "------------------------------------------------------------------------" << endl;
			cout << "|                      Desencolando el elemento:"<<cola[j]<<"                      |" << endl;
    		cout << "------------------------------------------------------------------------" << endl;
            mostrarCola();
        }
        for (int j = i; j < fin; j++) {
            cola[j] = cola[j + 1];
        }
        fin--;
    } else {
    	cout << "------------------------------------------------------------------------" << endl;
    	cout << "|               El elemento no se encuentra en la cola.                |" << endl;
    	cout << "------------------------------------------------------------------------" << endl;
    }
    mostrarCola();
    cout << endl;
    system("pause");
    system("cls");
}
void localizarElemento(){
    int elemento;
    if (cabeza==-1){
    	cout << "------------------------------------------------------------------------" << endl;
    	cout << "|                  No se puede localizar un elemento,                  |" << endl;
		cout << "|                          la cola está vacía.                         |" << endl;
    	cout << "------------------------------------------------------------------------" << endl;
        return;
    }
    cout << "------------------------------------------------------------------------" << endl;
    cout << "|               Ingrese el elemento que desea localizar:               |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cin>>elemento;
	system("cls");
    for(int i=cabeza; i<=fin; i++){
        if (cola[i]==elemento){
        	cout << "------------------------------------------------------------------------" << endl;
    		cout << "|                 Elemento encontrado en la posicion "<<(i-cabeza+1)<<"                 |" << endl;
			cout << "|                    desde la cabeza a la cola.                        |" << endl;
    		cout << "------------------------------------------------------------------------" << endl;
    		cout << "|                                Cola                                  |" << endl;
    		cout << "------------------------------------------------------------------------" << endl;
    		if(cabeza==-1) {
        		cout << "------------------------------------------------------------------------" << endl;
		    	cout << "|                             Cola vacia                               |" << endl;
    			cout << "------------------------------------------------------------------------" << endl;
        		return;
    		}    		for (int j=cabeza; j<=fin; j++){
    			if(j==0){
    				cout<<"cabeza"<<endl;
    				cout<<" |"<<endl;
				}
				if (cola[j]==elemento){
            		cout<<"Aqui->";
        		}
        		cout<<"["<<cola[j]<<"]";
        		if (cola[j]==elemento){
            		cout<<"<-Aqui\t";
        		}
        		cout<<"\t";
    		}
			cout<<"<--COLA"<<"//"<<(fin-cabeza+1)<<" elemento(s)";
			cout<<endl;
			for (int j=cabeza; j<=fin; j++){
				if (cola[j]==elemento){
            		cout<<"\t";
        		}
        		cout<<" ^"<<"\t";
        		if (cola[j]==elemento){
            		cout<<"\t";
        		}
    		}
    		cout<<endl;
			for (int j=cabeza; j<=fin; j++){
				if (cola[j]==elemento){
            		cout<<"\t";
        		}
        		cout<<" |"<<"\t";
        		if (cola[j]==elemento){
            		cout<<"\t";
        		}
    		}
    		cout<<endl;
    		for (int j=cabeza; j<=fin; j++){
				if (cola[j]==elemento){
            		cout<<"\t";
        		}
        		cout<<j+1<<"\t";
        		if (cola[j]==elemento){
            		cout<<"\t";
        		}
    		}
    		cout<<endl;
    		system("pause");
		    system("cls");
            return;
        }
    }
    cout << "------------------------------------------------------------------------" << endl;
    cout << "|               El elemento no se encuentra en la cola.                |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    system("pause");
    system("cls");
}
void numerarElementos(){
    if (cabeza == -1) {
        cout << "------------------------------------------------------------------------" << endl;
		cout << "|                             Cola vacia                               |" << endl;
    	cout << "------------------------------------------------------------------------" << endl;
        return;
    }
    cout << "------------------------------------------------------------------------" << endl;
	cout << "|                      Cantidad de elementos:"<<(fin - cabeza + 1)<<"                        |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
	cout << "|                           Cola numerada:                             |" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    mostrarCola();
    for (int j=cabeza; j<=fin; j++){
       	cout<<" ^"<<"\t";
   	}
    cout<<endl;
	for (int j=cabeza; j<=fin; j++){
        cout<<" |"<<"\t";
    }
    cout<<endl;
    for (int i = cabeza, j = 1; i <= fin; i++, j++) {
        cout << " "<< j <<"\t";
    }
    cout << endl;
    system("pause");
    system("cls");
}
void menu(){
    int opcion;
    system("Title CODIGO DE WINTER");
    do {
        cout << "------------------------------------------------------------------------" << endl;
        cout << "|                                Menu                                  |" << endl;
        cout << "------------------------------------------------------------------------" << endl;
        cout << "|              1. E n c o l a r  U n  E l e m e n t o                  |" << endl;
        cout << "|              2. D e s e n c o l a r  U n  E l e m e n t o            |" << endl;
        cout << "|              3. L o c a l i z a r  U n  E l e m e n t o              |" << endl;
        cout << "|              4. N u m e r a r  L o s  E l e m e n t o s              |" << endl;
        cout << "|              5. S a l i r  D e l  P r o g r a m a                    |" << endl;
        cout << "------------------------------------------------------------------------" << endl;
        cout << " \1 \2 \3 \4 \5 \6 \1 \2 \3 \4 \5 \6 \1 \2 \3 \4 \5 \6 \1 \2 \3 \4 \5 \6 \1 \2 \3 \4 \5 \6 \1 \2 \3 \4 \5 \6"<<endl;
        mostrarCola();
        cout << "------------------------------------------------------------------------" << endl;
		cout << "|                       Ingrese la opcion deseada                      |" << endl;
   		cout << "------------------------------------------------------------------------" << endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
            	system("Title Encolar Elemento");
            	system("Color a0");
                encolarElemento();
                system("Color e0");
                break;
            case 2:
            	system("Title Desencolar Elemento");
            	system("Color 30");
                desencolarElemento();
                system("Color e0");
                break;
            case 3:
            	system("Title Localizar Elemento");
            	system("Color 70");
                localizarElemento();
                system("Color e0");
                break;
            case 4:
            	system("Title Numerar elementos");
            	system("Color 90");
				system("cls");
                numerarElementos();
                system("Color e0");
                
                break;
            case 5:
            	system("Color c0");
	            cout << "------------------------------------------------------------------------" << endl;
				cout << "|                       Saliendo del programa...                       |" << endl;
    			cout << "------------------------------------------------------------------------" << endl;
                break;
            default:
				system("cls");
            	cout << "------------------------------------------------------------------------" << endl;
	    		cout << "|                           Opcion invalida,                           |" << endl;
				cout << "|                           intente de nuevo.                          |" << endl;
	    		cout << "------------------------------------------------------------------------" << endl;
                break;
        }
    } while (opcion != 5);
}
int main(){
	system("Color f0");
    system("Title Codigo de Winter");
    menu();
    return 0;
}
