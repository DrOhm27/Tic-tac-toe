#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    //deklaracija
    int izbor,i,j,m,n,k,l,brojac1=0,brojac2=0,score1=0,score2=0,w=0;
    bool gameover=false;

    //praznjenje matrice
    pocetak:char A[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};  gameover=false; w=0;

    //naslov
    cout<<" |***| TIC TAC TOE |***| "<<endl;

    cout<<endl;

    P:cout<<"Ko je prvi na potezu?"<<endl;

    cout<<"1 -> X"<<endl;
    cout<<"2 -> O"<<endl;

    //izbor ko igra prvi, iks ili oks
    cin>>izbor;

    //provjera da li je izbor manji od 0 ili veci od 2
    if(izbor>2 || izbor<0){cout<<"Greska! Pokusaj ponovo!"<<endl; goto P;}
    if(izbor!=1 && izbor!=2){cout<<"Greska, ponovi unos!"<<endl; goto P;}
    //pocetak switcha
    switch(izbor){

    //pocetak case 1
case 1:
            //operacija zadatka
    pocetakak:

        do{
        unos:cout<<"Izaberite poziciju za X:"<<endl;  //biranje pozicije za x
        cin>>m;
        cin>>n;
        if((m!=0 && m!=1 && m!=2 )|| (n!=0 && n!=1 && n!=2)){
            cout<<"Greska, ponovi unos!"<<endl;
            goto unos;}

        A[m][n]='X';
//ispis matrice
    for(i=0;i<3;i++){
            cout<<endl;
        for(j=0;j<3;j++){
            cout<<setw(3)<<A[i][j]; cout<<"|";
        }
    }

    cout<<endl;


        cout<<"Izaberite poziciju za O:"<<endl; //biranje pozicije za o
        cin>>k;
        cin>>l;
        if(k!=0 && k!=1 && k!=2 || l!=0 && l!=1 && l!=2){
            cout<<"Greska, ponovi unos!"<<endl;
            goto unos;}



        A[k][l]='O';
//ispis matrice
    for(i=0;i<3;i++){
            cout<<endl;
        for(j=0;j<3;j++){
            cout<<setw(3)<<A[i][j]; cout<<"|";
        }
    }

    cout<<endl;

//provjera za pobjedu

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            //dijagonale
            if(A[0][0]=='X' && A[1][1]=='X' && A[2][2]=='X'){gameover=true; brojac1++;}
            else if(A[0][0]=='O' && A[1][1]=='O' && A[2][2]=='O'){gameover=true; brojac2++;}

            else if(A[0][2]=='O' && A[1][1]=='O' && A[2][0]=='O'){gameover=true;brojac2++;}
            else if(A[0][2]=='X' && A[1][1]=='X' && A[2][0]=='X'){gameover=true;brojac1++;}


            //kolone
            else if(A[0][0]=='O' && A[1][0]=='O' && A[2][0]=='O'){gameover=true;brojac2++;}
            else if(A[0][0]=='X' && A[1][0]=='X' && A[2][0]=='X'){gameover=true;brojac1++;}

            else if(A[0][1]=='O' && A[1][1]=='O' && A[2][1]=='O'){gameover=true;brojac2++;}
            else if(A[0][1]=='X' && A[1][1]=='X' && A[2][1]=='X'){gameover=true;brojac1++;}

            else if(A[0][2]=='O' && A[1][2]=='O' && A[2][2]=='O'){gameover=true;brojac2++;}
            else if(A[0][2]=='X' && A[1][2]=='X' && A[2][2]=='X'){gameover=true;brojac1++;}

            //redovi
            else if(A[0][0]=='O' && A[0][1]=='O' && A[0][2]=='O'){gameover=true;brojac2++;}
            else if(A[0][0]=='X' && A[0][1]=='X' && A[0][2]=='X'){gameover=true;brojac1++;}

            else if(A[1][0]=='O' && A[1][1]=='O' && A[1][2]=='O'){gameover=true;brojac2++;}
            else if(A[1][0]=='X' && A[1][1]=='X' && A[1][2]=='X'){gameover=true;brojac1++;}

            else if(A[2][0]=='O' && A[2][1]=='O' && A[2][2]=='O'){gameover=true;brojac2++;}
            else if(A[2][0]=='X' && A[2][1]=='X' && A[2][2]=='X'){gameover=true;brojac1++;}
        }
    }
    }
    while(gameover!=true); //provjera while-a za gameover

    polazak:if(brojac1>brojac2){cout<<"X je pobjednik!"<<endl;score1++; cout<<"Score:"<<score1<<":"<<score2<<endl;} //provjera pobjednika
    else if(brojac2>brojac1){cout<<"O je pobjednik!"<<endl;score2++;cout<<"Score:"<<score1<<":"<<score2<<endl;}//u drugom slucaju




    if(score1<3 || score2<3){
    if(score1==3){cout<<"Igrac 1 je pobjednik!"<<endl; return 0;}
    else if(score2==3){cout<<"Igrac 2 je pobjednik!"<<endl; return 0;}
    goto pocetak;
    }


    return 0;

case 2:
            //operacija zadatka
        do{
       cout<<"Izaberite poziciju 1:"<<endl;
        cin>>m;
        cout<<"Izaberite poziciju 2:"<<endl;
        cin>>n;
        if(m!=0 && m!=1 && m!=2 || n!=0 && n!=1 && n!=2){
            cout<<"Greska, ponovi unos!"<<endl;
            goto unos;}

        A[m][n]='O';

    for(i=0;i<3;i++){
            cout<<endl;
        for(j=0;j<3;j++){
            cout<<setw(3)<<A[i][j];
        }
    }

    cout<<endl;


        cout<<"Izaberite poziciju 1:"<<endl;
        cin>>k;
        cout<<"Izaberite poziciju 2:"<<endl;
        cin>>l;
        if(k!=0 && k!=1 && k!=2 || l!=0 && l!=1 && l!=2){
            cout<<"Greska, ponovi unos!"<<endl;
            goto unos;}

        A[k][l]='X';

    for(i=0;i<3;i++){
            cout<<endl;
        for(j=0;j<3;j++){
            cout<<setw(3)<<A[i][j];
        }
    }

    cout<<endl;

//provjera pozicija za pobjednika
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            //dijagonale
            if(A[0][0]=='X' && A[1][1]=='X' && A[2][2]=='X'){gameover=true;brojac1++;}
            else if(A[0][0]=='O' && A[1][1]=='O' && A[2][2]=='O'){gameover=true;brojac2++;}

            else if(A[0][2]=='O' && A[1][1]=='O' && A[2][0]=='O'){gameover=true;brojac2++;}
            else if(A[0][2]=='X' && A[1][1]=='X' && A[2][0]=='X'){gameover=true;brojac1++;}


            //kolone
            else if(A[0][0]=='O' && A[1][0]=='O' && A[2][0]=='O'){gameover=true;brojac2++;}
            else if(A[0][0]=='X' && A[1][0]=='X' && A[2][0]=='X'){gameover=true;brojac1++;}

            else if(A[0][1]=='O' && A[1][1]=='O' && A[2][1]=='O'){gameover=true;brojac2++;}
            else if(A[0][1]=='X' && A[1][1]=='X' && A[2][1]=='X'){gameover=true;brojac1++;}

            else if(A[0][2]=='O' && A[1][2]=='O' && A[2][2]=='O'){gameover=true;brojac2++;}
            else if(A[0][2]=='X' && A[1][2]=='X' && A[2][2]=='X'){gameover=true;brojac1++;}

            //redovi
            else if(A[0][0]=='O' && A[0][1]=='O' && A[0][2]=='O'){gameover=true;brojac2++;}
            else if(A[0][0]=='X' && A[0][1]=='X' && A[0][2]=='X'){gameover=true;brojac1++;}

            else if(A[1][0]=='O' && A[1][1]=='O' && A[1][2]=='O'){gameover=true;brojac2++;}
            else if(A[1][0]=='X' && A[1][1]=='X' && A[1][2]=='X'){gameover=true;brojac1++;}

            else if(A[2][0]=='O' && A[2][1]=='O' && A[2][2]=='O'){gameover=true;brojac2++;}
            else if(A[2][0]=='X' && A[2][1]=='X' && A[2][2]=='X'){gameover=true;brojac1++;}
        }
    }

    }

    while(gameover!=true); //provjera while-a za gameover

if(brojac1>brojac2){cout<<"X je pobjednik!"<<endl;score1++;} //provjera pobjenika
 else if(brojac2>brojac1){cout<<"O je pobjednik!"<<endl;} //u drugom slucaju
 return 0;
}}






