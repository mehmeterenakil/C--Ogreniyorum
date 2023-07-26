#include <iostream>

using namespace std;

class RankineCycle {
private:
    double pressure1; // Kondanser giriþ basýncý (Pa)
    double pressure2; // Kondanser çýkýþ basýncý (Pa)
    double temperature1; // Buhar türbini giriþ sýcaklýðý (K)
    double temperature3; // Kondenser giriþ sýcaklýðý (K)
    double efficiency; // Isýl verim (%)

public:
    RankineCycle(double p1, double p2, double t1, double t3, double eff)
        : pressure1(p1), pressure2(p2), temperature1(t1), temperature3(t3), efficiency(eff) {}

    double calculateWork() {
        double work_turbine = (1 - pressure2 / pressure1) * efficiency;
        double work_pump = (1 - pressure2 / pressure1) / efficiency;
        return work_turbine - work_pump;
    }

    double calculateHeatInput() {
        double heat_input = efficiency * calculateWork() / (1 - efficiency);
        return heat_input;
    }
};

int main() {
    double p1 = 100000; // 1 bar basýnç (Pa)
    double p2 = 1000; // 0.01 bar basýnç (Pa)
    double t1 = 500; // 500°C (K)
    double t3 = 40; // 40°C (K)
    double efficiency = 0.8; // %80 verim

    RankineCycle cycle(p1, p2, t1, t3, efficiency);

    cout << "Sogutma Cevrimi Sonucu:" << endl;
    cout << "Yapilan Is: " << cycle.calculateWork() << " J" << endl;
    cout << "Alinan Isi: " << cycle.calculateHeatInput() << " J" << endl;

    return 0;
}