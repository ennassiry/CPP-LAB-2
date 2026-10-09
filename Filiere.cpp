#include <iostream> 
class Etudiant{
    private:
std::string nom , cin;
double note;
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
    int getNote(){
        return note;
    }

    
    void setNote(double n){
        if(n < 0 || n > 20){
            std::cout<<"la note invalide";
        }
        note = n;
    }

    void afficher(){
    
        std::cout<<"Etudiant : "<<getNom()<<"("<<getCin()<<") "<<" - note"<<getNote();

    }
};

class Filiere{
private:
    std::string nomFiliere ;
    Etudiant etudiant;
public:
    void setNomFiliere(std::string n){
          nomFiliere = n;
    }
    void setEtudiant(Etudiant e){
       etudiant = e;
    }
    void afficher(){
        std::cout<<"Filiere : "<<nomFiliere<<"\n";
        std::cout<<"Etudiant : "<<etudiant.getNom()<<" ( "<<etudiant.getCin()<<") "<<" - note"<<etudiant.getNote();

    }

};
int main() {
    Etudiant e;
    e.setNom("Yassine");
    e.setCin("C78912");
    e.setNote(15.5);

    Filiere f;
    f.setNomFiliere("Genie Informatique");
    f.setEtudiant(e);

    f.afficher();
    return 0;
}
