#include <iostream> // kulanýcýdan veri alýp yazdýrýr.
#include <conio.h> // input-output, text iþleme.
#include <thread> // iþlemlerin birbirini beklememesini saðlýyor.
#include <chrono> // zaman kütüphanesi.

void say() {
    for (int i = 1; i <= 10; ++i) { // sayinin 1'den 10'a kadar 1'er artarak devam ettirir.
        std::cout << i << " ";
        std::this_thread::sleep_for(std::chrono::seconds(1)); // sayinin saniyelik artýþýný saðlar.
        if (_kbhit()) {
            char key = _getch(); // ekrandan tek bir deðerle çýkmak için getch kullan
            if ((key == 'Z' || key == 'z') && i < 5) { // sayi 10'a doðru giderken 5'ten küçükken z ye basýnca programdan çýkar.
                std::cout << std::endl << "Programdan cikiliyor..." << std::endl;
                exit(0);
            }
            else if ((key == 'Z' || key == 'z') && i >= 5) { // sayi 5'ten büyükken z ye basýlýrsa en baþa dönüp 1'den baþlar.
                std::cout << std::endl << "Basa donuluyor..." << std::endl;
                i = 0;
                continue;
            }
        }
    }
    std::cout << std::endl;
}

int main() {
    char key;

    while (true) {
        key = _getch();

        if (key == 'A' || key == 'a') { // Kullanýcý a'ya basarsa merhaba yazdýrýr.
            std::cout << "Merhaba." << std::endl;
        }
        else if (key == 'B' || key == 'b') { // Kullanýcý b'ye basýnca hoþçakal yazdýrýr. 
            std::cout << "Hoscakal." << std::endl;
        }
        else if (key == 'C' || key == 'c') { // Kullanýcý c'ye basarsa programý kapatýr.
            std::cout << "Kapatildi." << std::endl;
            break;
        }
        else if (key == 'X' || key == 'x') { // Kullanýcý x'e bastýðýnda program sayýlarý saymaya baþlar.
            say();
        }
    }

    return 0;
}