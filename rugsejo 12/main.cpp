#include <atomic>
#include <iostream>
int main()
{
using namespace std;
    string vardas,pavarde,amzius,grupe,kursas,programa;
    vardas = "Tomas";
    pavarde = "Gudan";
    amzius = "19";
    grupe = "PI24";
    kursas= "pirmas";
    programa = "Programu sistemos";

    cout << "Vardas: " << vardas << endl;
    cout << "Pavarde: " << pavarde << endl;
    cout << "Amzius: " << amzius << endl;
    cout << "Grupe: " << grupe << endl;
    cout << "Kursas: " << kursas << endl;
    cout << "Studiju Programa: " << programa << endl;

    cout << "----------------------------------" << endl;

    string KZ;
    KZ = "Kauno Zalgiris ikurtas 1994 metais, klubas turi savo arena kuri isikurusi Kauno mieste.";
    cout << KZ << endl;

    cout << "----------------------------------" << endl;

    string opel;
    opel = "Automobilis OPEL ZAFIRA yra pagamintas 2010 metais. Jo motoras 2.0 llitrazo. Automobilis yra sidabrinės spalvos, taciau gali buti ir kitokiu spalvu.";
    cout << opel;

    cout << "----------------------------------" << endl;

    int a,b;
    double c;

    a = 13, b = 5, c = 17.5;

    cout << a + b - c << endl;
    cout << 15 / 2.0 + c << endl;
    cout << a / static_cast<double>(b) + 2 * c << endl;
    cout << 14 % 3 + 6.3 + b / a << endl;
    cout << static_cast<int>(c) % 5 + a - b << endl;
    cout << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;

    cout << "----------------------------------" << endl;

    int num1,num2,num3,num4,num5,num6;
    num1 = 2, num2 = 4, num3 = 6, num4 = 8, num5 = 10;
    num6 = num1 + num2 + num3 + num4 + num5;
    cout << "Viduris: " << num6 / 5 << endl;

    cout << "----------------------------------" << endl;

    int n,sum=0,m;
    cout << "Irasykite dvizenkli skaiciu: " << endl;
    cin >> n; //tarkim 12
    while(n>0)    // N didesnis uz nuli
    {
        m = n % 10;            // m yra = 12 - 1 * 10 = 2
        sum = sum + m;          // sum = 2+1=3
        n = n / 10;           // n yra lygus 12 / 10 = 1
    }
    cout << "Skaiciaus skaitmenu suma yra: " << sum << endl; //sum =3

}
