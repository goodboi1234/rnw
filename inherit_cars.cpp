#include <iostream>
#include <map>
using namespace std;

class Tata {
public:
    map<string, string> elements;
    Tata() {
        elements["engine"] = "default_engine";
        elements["jumpers"] = "default_jumpers";
        elements["headlights"] = "default_headlights";
        elements["gearbox"] = "default_gearbox";
        elements["fuels"] = "default_fuels";
        elements["size"] = "default_size";
    }
};

class Jaguar : public Tata {
public:
    map<string, string> jaguar_elements;
    Jaguar() {
        jaguar_elements["engine"] = elements["engine"];
        jaguar_elements["jumpers"] = elements["jumpers"];
        jaguar_elements["headlights"] = elements["headlights"];
        jaguar_elements["gearbox"] = elements["gearbox"];
        jaguar_elements["fuels"] = elements["fuels"];
        jaguar_elements["size"] = "too small";
    }

    void what_init() {
        cout << "Manufactured by JRR Group" << endl << "Owned by Tata Motors";
    }
};

int main() {
    Jaguar jaguar;
    for (const auto& plain : jaguar.jaguar_elements) {
        cout << plain.first << ": " << plain.second << endl;
    }

    jaguar.what_init();

    return 0;
}
