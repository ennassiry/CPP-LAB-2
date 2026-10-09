#include <iostream> 
class Etudiant{
private:
std::string nom , cin;
double note1 , note2 , note3 ;
public:
    std::string getNom(){
        return nom;
    }
    void setNom(std::string n){
        nom = n;
    }
    std::string getCin(){
        return cin;
    }
    void setCin(std::string c){
        cin = c;
    }
    int getnNote1(){
        return note1;
    }

    int getnNote2(){
        return note1;
    }
    int getnNote3(){
        return note1;
    }
    void setNote1(double n){
        if(n < 0 || n > 20){
            std::cout<<"la note invalide";
        }
        note1 = n;
    }
     void setNote2(double n){
        if(n < 0 || n > 20){
            std::cout<<"la note invalide";
        }
        note2 = n;
    }
     void setNote3(double n){
         if(n < 0 || n > 20){
            std::cout<<"la note invalide";
        }
        note3 = n;
    }
    double calculMoyenne(){
        return (note1+note2+note3)/3;
    }
    void afficher(){
        std::cout<<"Nom : "<<nom<<"\n";
        std::cout<<"Cin : "<<cin<<"\n";
        std::cout<<"Notes : "<<note1<<" | "<<note2<<" | "<<note3<<"\n";
        std::cout<<"Moyenne : "<<calculMoyenne();
    }


};

int main() {
    Etudiant e;
    e.setNom("Lamia");
    e.setCin("AB123456");
    e.setNote1(14);
    e.setNote2(16);
    e.setNote3(18);

    e.afficher();
    return 0;
}