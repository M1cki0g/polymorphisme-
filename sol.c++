#include <iostream>

using namespace std;


class forme{
public:
    void virtual aire(){
    cout<<"aire forme"<<endl;
    }
};

class triangle:public forme{
float base;
float hauteur;
public:
    triangle(float a , float b){
    base = a;
    hauteur = b;
    }
    void aire(){
    cout<<"aire triangle"<<endl;
    }
};

class Cercle:public forme{
float rayon;
public:
    Cercle(float a){
    rayon = a;
    }
    void aire(){
    cout<<"aire Cercle"<<endl;
    }
};

class Rectangle:public forme{
float longueur;
float largeur;
public:
     Rectangle(float a , float b){
    longueur = a;
    largeur = b;
    }
    void aire(){
    cout<<"aire Rectangle"<<endl;
    }
};

class carre:public forme{
float cote;
public:
    carre(float a){
    cote = a;
    }
    void aire(){
    cout<<"aire carre"<<endl;
    }
};

int main()
{
forme *t[4];
t[0]=new Cercle(6);
t[1]=new Rectangle(5 , 4);
t[2]=new triangle(2 , 7);
t[3]=new carre(3);

t[0]->aire();
t[1]->aire();
t[2]->aire();
t[3]->aire();

        return 0;
}
