#include <iostream>
using namespace std;

//Made by Gianmarco Caruso//

void fillMatrix(int **matrix, int n, int m){
    //Questa funziona fillMatrix riempie la matrice con numeri casuali compresi tra 0 e 199//
    //srand(time(0)) viene utilizzata per settare il seed ed avere sequenze pseudo-casuali sempre diverse ogni volta che lanci il programma//
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Stai utilizzando la funzione fillMatrix(), la funzione carica la matrice con valori casuali compresi tra 0 e 199!!!" << endl;
    srand(time(0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){          //i e j sono gli indici della matrice, dove con n indichiamo le righe e con m le colonne//
            matrix[i][j] = rand()%200; //rand()%200 genera numeri pseudo-casuali nell'intervallo 0 - 199
        }
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void printMatrix(int **matrix, int n, int m){
    //Questa funzione printMatrix semplicemente stampa a schermo la matrice//
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Stai utilizzando la funzione printMatrix(), la funzione fa la stampa della matrice passata come parametro!!!" << endl;
    cout << "Ecco la tua matrice !!!" << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "matrix[" << i << "]["<< j << "]:" << matrix[i][j] << " |";
        }
        cout << endl;
    }
    cout << endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << matrix[i][j] << " | ";
        }
        cout << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void printCube(int ***cube, int n, int m, int q){
    //Questa funzione printMatrix semplicemente stampa a schermo la matrice//
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Stai utilizzando la funzione printCube(), la funzione fa la stampa del cubo passato come parametro!!!" << endl;
    cout << "Ecco il tuo cubo !!!" << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<q;k++){
                cout << "cube[" << i << "][" << j << "][" << k << "]: " << cube[i][j][k] << " | ";
            }
            cout << endl;
        }
    }

    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void fillCube(int ***Cube, int n, int m, int q){
    //Questa funziona fillMatrix riempie la matrice con numeri casuali compresi tra 0 e 199//
    //srand(time(0)) viene utilizzata per settare il seed ed avere sequenze pseudo-casuali sempre diverse ogni volta che lanci il programma//
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Stai utilizzando la funzione fillCube(), la funzione carica il cubo con valori casuali compresi tra 0 e 199!!!" << endl;
    srand(time(0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<q;k++){
                Cube[i][j][k] = rand()%200;
            }//i e j sono gli indici della matrice, dove con n indichiamo le righe e con m le colonne//
            //rand()%200 genera numeri pseudo-casuali nell'intervallo 0 - 199
        }
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void colounsVisit(int **A, int n, int m){
    //Questa funzione colounsVisit fa la somma degli elementi di ogni singola colonna//
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Stai utilizzando la funzione colounsVisit(), la funzione fa la somma degli elementi colonna per colonna!!!" << endl;
    int sum;
    for(int i=0;i<m;i++){
        sum = 0;
        for(int j=0;j<n;j++){
            cout << A[j][i] << " ";
            sum += A[j][i];
        }
        cout << endl;
        cout << "Somma " << i + 1 << " colonna: " << sum << endl;
        cout << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void rowsVisit(int **A, int n, int m){
    //Questa funzione rowsVisit fa la somma degli elementi di ogni singola riga//
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Stai utilizzando la funzione rowsVisit(), la funzione fa la somma degli elementi riga per riga!!!" << endl;
    int sum;
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=0;j<m;j++){
            cout << A[i][j] << " ";
            sum += A[i][j];
        }
        cout << endl;
        cout << "Somma " << i + 1 << " riga: " << sum << endl;
        cout << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void principalDiagonal(int **matrix, int n, int m){
    //Stampo la diagonale principale//
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Diagonale principale:" << endl;
    if(n == m){
        //Per trovare gli elementi della diagonale principale gli indici devono corrispondere (i == j)//
        for(int i=0;i<n;i++){
            cout << "matrix[" << i << "][" << i << "]: " << matrix[i][i] << endl;
        }
    }
    else{
        cout << "La matrice deve essere quadrata per utilizzare la funzione principalDiagonal()!!!" << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;

}

void secondaryDiagonal(int **matrix, int n, int m){
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Diagonale secondaria:" << endl;
    if(n == m){
        for(int i=0;i<n;i++){
            cout << "matrix[" << i << "][" << n-i-1 << "]: " << matrix[i][n-i-1] << endl;
        }
    }
    else{
        cout << "La matrice deve essere quadrata per utilizzare la funzione secondaryDiagonal()!!!" << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;

}

void subMatrix(int **matrix, int n, int m){
    int sub = 0;
    if(m > n){
        cout << "------------------------------------------------------------------------------------------------------------" << endl;
        sub = m - n + 1;
        cout << "Il numero di sottomatrici n x n e' " << sub << endl;
    }
    else{
        cout << " il numero di colonne deve essere maggiore del numero di righe per utilizzare la funzione subMatrix()!!!" << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void subDiagonalPrincipals(int **matrix, int n, int m){
    if(m > n){
        cout << "------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Digonali principai sottomatrici quadrate n x n:" << endl;
        for(int x=0;x<m-n+1;x++){
            cout << x + 1 << " diagonale principale sottomatrice" << endl;
            for(int j=0;j<n;j++){
                cout << "matrix[" << x + j << "][" << j << "]: " << matrix[j][j + x] << endl;
            }
            cout << endl;
        }
    }
    else{
        cout << "il numero di colonne deve essere maggiore del numero di righe per utilizzare la funzione subDiagonalPrincipals()!!!" << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void subDiagonalsSecondary(int **matrix, int n, int m){
    if(m > n){
        cout << "------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Digonali secondarie sottomatrici quadrate n x n:" << endl;
        for(int x=0;x<m-n+1;x++){
            cout << x + 1 << " diagonale secondaria sottomatrice" << endl;
            for(int j=0;j<n;j++){
                cout << "matrix[" << x + j << "][" << j << "]: " << matrix[j][n - j - 1 + x] << endl;
            }
            cout << endl;
        }
    }
    else{
        cout << "il numero di colonne deve essere maggiore del numero di righe per utilizzare la funzione subDiagonalSecondary()!!!" << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void visitaCoppieRiga(int **matrix, int n){
    for(int i=0;i<n;i++){
        cout << "Riga:" << i+1 << endl;
        for(int j=0;j<n-1;j++){
            cout << j+1 << " Coppia: " << matrix[i][j] << " - " << matrix[i][j+1] << endl;
        }
        cout << endl;
    }
}

void visitaCoppieColonne(int **matrix, int n){
    for(int j=0;j<n;j++){
        cout << "Colonna:" << j+1 << endl;
        for(int i=0;i<n-1;i++){
            cout << i+1 << " Coppia: " << matrix[i][j] << " - " << matrix[i+1][j ] << endl;
        }
        cout << endl;
    }
}

void tutteSequenzeContigueColonne(int **matrix, int n, int m){
    if(n == m){
        cout << "------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Stai utilizzando la funzione tutteSequenzeContigueColonne(), la funzione mostre tutte le possibili sequenze contigue facendo una visita per colonne!!!" << endl;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                cout <<  " sequenza contigua "  << j + 1 << "a colonna "<< endl;
                for(int x=i;x<n;x++){
                    cout << "matrix[" << x << "][" << j << "]: " << matrix[x][j] << endl;
                }
                cout << endl;
            }
        }
    }
    else{
        cout << "Per utilizzare la funzione la matrice deve essere quadrata!!! (n x n)" << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;

}

void tutteSequenzeContigueRiga(int **matrix, int n, int m){
    if(n == m){
        cout << "------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Stai utilizzando la funzione tutteSequenzeContigueRiga(), la funzione mostre tutte le possibili sequenze contigue facendo una visita per righe!!!" << endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout <<  " sequenza contigua "  << i + 1 << "a riga "<< endl;
                for(int x=j;x<m;x++){
                    cout << "matrix[" << x << "][" << i << "]: " << matrix[i][x] << endl;
                }
                cout << endl;
            }
        }
    }
    else{
        cout << "Per utilizzare la funzione la matrice deve essere quadrata!!! (n x n)" << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void kSequenzeContigueColonne(int **matrix, int n, int m, int k){
    if(n == m){
        cout << "------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Stai utilizzando la funzione kSquenzeContigueColonne(), la funzione mostra le sequenze contigue di lunghezza k visitando la matrice per colonne !!!" << endl;
        cout << "k: " << k << endl << endl;
        for(int j=0;j<n;j++){
            for(int i=0;i<n-k+1;i++){
                for(int x=0;x<k;x++){
                    cout << matrix[x+i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    else{
        cout << "La matrice deve essere quadrata(n x n) per utilizzare la funzione!!!" << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void kSequenzeContigueRighe(int **matrix, int n, int m, int k){
    if(n == m){
        cout << "------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Stai utilizzando la funzione kSquenzeContigueRighe(), la funzione mostra le sequenze contigue di lunghezza k visitando la matrice per righe !!!" << endl;
        cout << "k: " << k << endl << endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-k+1;j++){
                for(int x=0;x<k;x++){
                    cout << matrix[i][j+x] << " ";
                }
                cout << endl;
            }
        }
    }
    else{
        cout << "La matrice deve essere quadrata(n x n) per utilizzare la funzione!!!" << endl;
    }
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void triangolareSuperiore(int **matrix, int n, int m){
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Stai utilizzando la funzione triangolareSuperiore(), la funione torna 0 se la matrice non è una triangolare superiore, 1 se lo è !!!" << endl;
    bool triangolare_sup = true;
    if(n == m){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if( i != j && j > i && matrix[i][j] != 0){
                    triangolare_sup = false;
                }
            }
        }
    }
    else{
        cout << "Per utilizzare la funzione la matrice deve essere quadrata!!! (n x n)" << endl;
        triangolare_sup = false;
    }
    cout << triangolare_sup << endl;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void triangolareInferiore(int **matrix, int n, int m){
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Stai utilizzando la funzione triangolareInferiore(), la funione torna 0 se la matrice non è una triangolare inferiore, 1 se lo è !!!" << endl;
    bool triangolare_inf = true;
    if(n == m){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if( i != j && i > j && matrix[i][j] != 0){
                    triangolare_inf = false;
                }
            }
        }
    }
    else{
        cout << "Per utilizzare la funzione la matrice deve essere quadrata!!! (n x n)" << endl;
        triangolare_inf = false;
    }
    cout << triangolare_inf << endl;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

bool stringaPalindroma(string s){
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Stai utilizzando la funzione stringaPalindroma(), la funione torna 0 se la stringa selezionata non e' una stringa palindroma, 1 se lo e' !!!" << endl;
    string p = "";
    for(int i=0;i<s.length();i++){
        p = s[i] + p;
    }
    return p == s;
}




int main() {

    int n,m;
    //Faccio scegliere all'utente dimensione matrice//
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Scegli dimensione righe della matrice: ";
    cin >> n;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Scegli dimensione colonne della matrice: ";
    cin >> m;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << endl;
    //Da riga 75 a riga 78 alloco dinamicamente la matrice//
    int **A = new int *[n];
    for(int i=0;i<n;i++){
        A[i] = new int[m];
    }

    int x,y,z;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Scegli il numero delle facce del Cubo: ";
    cin >> x;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Scegli il numero delle righe delle facce del cubo: ";
    cin >> y;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Scegli il numero delle colonne delle facce del cubo: ";
    cin >> z;

    //Dal rigo 378 al rigo 385 alloco dinamicamente il Cubo//
    int ***Cube = new int **[y];
    for(int i=0;i<x;i++){
        Cube[i] = new int*[y];
        for(int j=0;j<y;j++){
            Cube[i][j] = new int[x];
        }
    }

    //Richiamo le varie funzioni//
    fillMatrix(A,n,m);
    cout << endl;;

    printMatrix(A,n,m);
    cout << endl;

    colounsVisit(A,n,m);
    cout << endl;
    rowsVisit(A,n,m);
    cout << endl;

    principalDiagonal(A,n,m);
    cout << endl;
    secondaryDiagonal(A,n,m);
    cout << endl;

    subMatrix(A,n,m);
    cout << endl;

    subDiagonalPrincipals(A,n,m);
    cout << endl;
    subDiagonalsSecondary(A,n,m);
    cout << endl;

    tutteSequenzeContigueColonne(A,n,m);
    cout << endl;
    tutteSequenzeContigueRiga(A,n,m);
    cout << endl;

    triangolareSuperiore(A,n,m);
    cout << endl;
    triangolareInferiore(A,n,m);
    cout << endl;

    /*
    cout << "Inserisci una stringa per utilizzare la funzione stringaPalindroma(): ";
    string prova = "";
    cin >> prova;
    cout << stringaPalindroma(prova);
     */

    cout << endl;
    kSequenzeContigueColonne(A,n,m,3);

    cout << endl;
    kSequenzeContigueRighe(A,n,m,3);

    fillCube(Cube,x,y,z);
    printCube(Cube,x,y,z);

    return 0;
}
