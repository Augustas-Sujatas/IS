#include <iostream>
#include <iomanip>   // dël setprecision
using namespace std;

int main() {

    // Valiutø kursai
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

    cout << "=== VALIUTOS KEITYKLA ===" << endl;
    cout << "1 - Palyginti valiutos kursa" << endl;
    cout << "2 - Pirkti valiuta" << endl;
    cout << "3 - Parduoti valiuta" << endl;
    cout << "Pasirinkite veiksma (1/2/3): ";
    cin >> pasirinkimas;

    cout << "Pasirinkite valiuta (GBP/USD/INR): ";
    cin >> valiuta;

    cout << fixed << setprecision(2); // apvalinimas iki 2 skaièiø po kablelio

    if (valiuta == "GBP") {

        if (pasirinkimas == 1) {
            cout << "1 EUR = " << GBP_Bendras << " GBP" << endl;
        }
        else if (pasirinkimas == 2) {
            double eurai;
            cout << "Iveskite EUR suma: ";
            cin >> eurai;
            cout << "Gausite " << eurai * GBP_Pirkti << " GBP" << endl;
        }
        else if (pasirinkimas == 3) {
            double kiekis;
            cout << "Iveskite GBP suma: ";
            cin >> kiekis;
            cout << "Gausite " << kiekis / GBP_Parduoti << " EUR" << endl;
        }
        else {
            cout << "Neteisingas pasirinkimas." << endl;
        }

    }
    else if (valiuta == "USD") {

        if (pasirinkimas == 1) {
            cout << "1 EUR = " << USD_Bendras << " USD" << endl;
        }
        else if (pasirinkimas == 2) {
            double eurai;
            cout << "Iveskite EUR suma: ";
            cin >> eurai;
            cout << "Gausite " << eurai * USD_Pirkti << " USD" << endl;
        }
        else if (pasirinkimas == 3) {
            double kiekis;
            cout << "Iveskite USD suma: ";
            cin >> kiekis;
            cout << "Gausite " << kiekis / USD_Parduoti << " EUR" << endl;
        }
        else {
            cout << "Neteisingas pasirinkimas." << endl;
        }

    }
    else if (valiuta == "INR") {

        if (pasirinkimas == 1) {
            cout << "1 EUR = " << INR_Bendras << " INR" << endl;
        }
        else if (pasirinkimas == 2) {
            double eurai;
            cout << "Iveskite EUR suma: ";
            cin >> eurai;
            cout << "Gausite " << eurai * INR_Pirkti << " INR" << endl;
        }
        else if (pasirinkimas == 3) {
            double kiekis;
            cout << "Iveskite INR suma: ";
            cin >> kiekis;
            cout << "Gausite " << kiekis / INR_Parduoti << " EUR" << endl;
        }
        else {
            cout << "Neteisingas pasirinkimas." << endl;
        }

    }
    else {
        cout << "Neteisinga valiuta." << endl;
    }

    return 0;
}
