#include <iostream>
using namespace std;

class remoteLampu {
private:
    string saklarNo[10];
public:
    void setSaklarNo(int i, string value) {
         saklarNo[i] = value
    }
    string getSaklarNo(int i) {
        return skalarNo[i];
    }
};

int main() {
    remoteLampu lampuRumah;

    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
}