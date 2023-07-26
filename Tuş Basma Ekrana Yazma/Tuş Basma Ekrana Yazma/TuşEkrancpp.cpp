#include <iostream> // kulan�c�dan veri al�p yazd�r�r.
#include <conio.h> // input-output, text i�leme.
#include <thread> // i�lemlerin birbirini beklememesini sa�l�yor.
#include <chrono> // zaman k�t�phanesi.

void say() {
    for (int i = 1; i <= 10; ++i) { // sayinin 1'den 10'a kadar 1'er artarak devam ettirir.
        std::cout << i << " ";
        std::this_thread::sleep_for(std::chrono::seconds(1)); // sayinin saniyelik art���n� sa�lar.
        if (_kbhit()) {
            char key = _getch(); // ekrandan tek bir de�erle ��kmak i�in getch kullan
            if ((key == 'Z' || key == 'z') && i < 5) { // sayi 10'a do�ru giderken 5'ten k���kken z ye bas�nca programdan ��kar.
                std::cout << std::endl << "Programdan cikiliyor..." << std::endl;
                exit(0);
            }
            else if ((key == 'Z' || key == 'z') && i >= 5) { // sayi 5'ten b�y�kken z ye bas�l�rsa en ba�a d�n�p 1'den ba�lar.
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

        if (key == 'A' || key == 'a') { // Kullan�c� a'ya basarsa merhaba yazd�r�r.
            std::cout << "Merhaba." << std::endl;
        }
        else if (key == 'B' || key == 'b') { // Kullan�c� b'ye bas�nca ho��akal yazd�r�r. 
            std::cout << "Hoscakal." << std::endl;
        }
        else if (key == 'C' || key == 'c') { // Kullan�c� c'ye basarsa program� kapat�r.
            std::cout << "Kapatildi." << std::endl;
            break;
        }
        else if (key == 'X' || key == 'x') { // Kullan�c� x'e bast���nda program say�lar� saymaya ba�lar.
            say();
        }
    }

    return 0;
}