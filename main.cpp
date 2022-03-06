#include <iostream>

using namespace std;

int main()
{
    float hoogte;
    float breedte;
    float breedtestof;
    float kostenpermeter;

    cout << "\n\nHoogte: ";
    cin >> hoogte;
    cout << "Breedte: ";
    cin >> breedte;
    cout << "Breedtestof: ";
    cin >> breedtestof;
    cout << "Prijs per meter: ";
    cin >> kostenpermeter;

    float meterstof = (breedte * hoogte) / breedtestof;
    float kosten = meterstof * kostenpermeter;
    cout << "Je hebt " << meterstof << " meter stof nodig en die kost €" << kosten << endl;
}
