#include <iostream>
using namespace std;

struct Iron {
    string brand;
    string model;
    string color;
    int minTemp;
    int maxTemp;
    bool hasSteam;
    int power;
};

void Show(Iron& iron)
{
    cout << "Brand : " << iron.brand << endl;
    cout << "Model : " << iron.model << endl;
    cout << "Color : " << iron.color << endl;
    cout << "Min temp : " << iron.minTemp << endl;
    cout << "Max temp : " << iron.maxTemp << endl;
    cout << "Has steam : " << (iron.hasSteam ? "Yes" : "No") << endl;
    cout << "Power : " << iron.power << endl;
    cout << "-------------------------" << endl;
}

void Init(Iron& iron)
{
    cout << "Enter brand : "; cin >> iron.brand;
    cout << "Enter model : "; cin >> iron.model;
    cout << "Enter color : "; cin >> iron.color;
    cout << "Enter min temp : "; cin >> iron.minTemp;
    cout << "Enter max temp : "; cin >> iron.maxTemp;
    cout << "Has steam (1 - Yes, 0 - No) : "; cin >> iron.hasSteam;
    cout << "Enter power : "; cin >> iron.power;
}

int main()
{
    Iron myIron = { "Philips", "Azur", "Blue", 100, 220, true, 2400 };
    Show(myIron);
    Init(myIron);
    cout << endl;
    Show(myIron);
    Iron* iron_ptr = &myIron;
    cout << "Brand via pointer: " << iron_ptr->brand << endl;
    cout << "Power via pointer: " << iron_ptr->power << endl;
    Iron copyIron = myIron;
    cout << "Copied iron model: " << copyIron.model << endl;
    return 0;
}