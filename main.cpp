#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void manoStudijos()

{
    string vardas = "Tomas";
    string priezastis = "aplamai nebuvau apsisprendes pilnai, todel tiesiog pasirinkau programavima.";

    cout << "Sveiki as esu " << vardas << " ir pasirinkau sia studiju programa nes " << priezastis << endl;

}
void kolegija() {
    string vk = "Vilniaus Kolegija ";
    cout << vk;
}

void fakultetas() {
    string eif = "Elektronikos ir informatikos fakultetas";
    cout << eif;
}
int random() {
    return(1+rand() % 6);

}




int main() {
    manoStudijos();
    manoStudijos();

    kolegija();
    fakultetas();

    cout << endl;

    }
    
    return 0;

}
