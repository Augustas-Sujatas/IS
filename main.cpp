#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // valiutu kursai
    double GBP_Bendras = 0.8729;
    double GBP_Pirkti = 0.8600;
    double GBP_Parduoti = 0.9220;



    double USD_Bendras = 1.1793;
    double USD_Pirkti = 1.1460;
    double USD_Parduoti = 1.2340;

    double INR_Bendras = 104.6918;
    double INR_Pirkti = 101.3862;
    double INR_Parduoti = 107.8546;



    int pasirinkimas;
    string valiuta;
    double suma;
    double kursas;


    cout << "Valiutos keitykla:" << endl;
    
    cout << "1 - Palyginti pasirinkta kursa" << endl;
    cout << "2 - Pirkti pasirinkta valiuta" << endl;
    cout << "3 - Parduoti pasirinkita valiuta" << endl;
    cout << "Pasirinkimas: ";
    cin >> pasirinkimas;

    cout << "Pasirinkite valiuta (GBP/USD/INR): ";
    
    cin >> valiuta;



    // 3 valiutos
    if (valiuta == "GBP") {
        if (pasirinkimas == 1) kursas = GBP_Bendras;
        if (pasirinkimas == 2) kursas = GBP_Pirkti;
        if (pasirinkimas == 3) kursas = GBP_Parduoti;
    }
    else if (valiuta == "USD") {
        if (pasirinkimas == 1) kursas = USD_Bendras;
        if (pasirinkimas == 2) kursas = USD_Pirkti;
        if (pasirinkimas == 3) kursas = USD_Parduoti;
    }
    else if (valiuta == "INR") {
        if (pasirinkimas == 1) kursas = INR_Bendras;
        if (pasirinkimas == 2) kursas = INR_Pirkti;
        if (pasirinkimas == 3) kursas = INR_Parduoti;
    }
    else {cout << "neteisinga valiuta." << endl;
        return 0;
    }

    // veiksmai
    if (pasirinkimas == 1) {
        cout << "1 EUR = " << kursas << " " << valiuta << endl;
    }
    
    else if (pasirinkimas == 2) {
        cout << "Iveskite EUR suma: ";
        cin >> suma;
        cout << "Gausite: " << suma * kursas << " " << valiuta << endl;
    }
    
    else if (pasirinkimas == 3) {
        cout << "Iveskite " << valiuta << " suma: ";
        cin >> suma;
        cout << "Gausite: " << suma / kursas << " EUR" << endl;
    }
    
    else {
        cout << "Neteisingas pasirinkimas." << endl;
    }

    return 0;
}
