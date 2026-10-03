

/*biblioteka -> zbiór komend stworzonych przez producenta do obsługi programowania*/
#include <iostream>
//using namespace std;

/*główna funkcja programu*/
int main() {
    std::cout << "Working..." << std::endl;
    /*cout -> funkcja wypisująca tekst w wierszu poleceń */
    /*endl -> funkcja przenosząca tekst do następnej linii */
    int a = 0; // <- deklaracja zmiennej
    //std::cin >> a;
    /* int -> nazwa zmiennej liczby  całkowitej*/
    /*cin -> funkcja popierająca dane z klawiatury*/
    int b = 0;
    int c = 0;

    c = a + b;// <- operacja przypisania 
    /*w tej linijce w zmiennej c znajduje się wartość sumy liczby a i b*/

    /* operacje na zmiennej typu int
    "+" -> dodwanie
    "-" -> odejmowanie
    "*" -> mnożenie
    "/" -> dzielenie
    "%" -> reszta z dzielenia(modulo)
    */
    //tak


    //return 0; // <- zabijająca program 

    /*and i or są spójnikami logicznymi */
    /*Funkcja warunkowa:*/
    bool p;/* 0/1 -> prawda albo fałsz*/
    p = 1; // -> p jest prawdziwe
    p = true; // to samo 
    p = 0; // p jest fałśzem 
    p = false;// to samo 

    if (p == true) {
        a = 5;
    }
    else {
        b = 5;
    }
    /* AND -> wykona się jedynie kiedy obydwa zdania będą prawdzie */
    if (p == true and a > b) { // and  ==  &&
        a = 5;
    }
    else {
        b = 5;
    }
    /*Or -> nie wykona się jedynie kiedy zdanie będą fałszywe  */
    if (p == true or a < b) { // or == ||
        a = 5;
    }
    else {
        b = 5;
    }

    /*Pętla while wykorzystuje warunek logiczny i wykonuje kojelne pętle dopóki warunek jest prawdziwy*/
    a = 1;
    while (a < 100)
    { // <-  sprawdza i idzie na dół
        a += 1;
        std::cout << a;
        std::cout << " ";
    }

    do { // <- idzie na dół i sprawdza
    } while (p);

    std::cout << std::endl;
    for (int i = 0;i < 10; i += 1) {
        std::cout << i << " ";
    }

    while (a < 10) {
        if (a % 2 == 0) { // a jest przyste
            // rysuje biały kafelek 
        }
        else { // a jest nieparzyste
            // rysuje czarny kafelek
        }
        a += 1;
    }

    a = 1; //miejsca na czarne kafelki
    b = 2; // miejsca na białę kafelki 

    while (a < 4) {
        //rysujemy czarny kafelek
        a += 2;
        if (a == 3) {
            while (b <= 4) {
                //ryaujemy białe kafelki 
                b += 2;
            }
        }
    }


    a = 1;
    while (a <= 4) {
        //rysujemy czarny kafelek
        a += 2;
    }
    b = 2;
    while (b <= 4) {
        //rysujemy białe kafelki 
        b += 2;
    }
}

/*Zadania do przeciiczenia, jeśli chcesz :) */

/*Zad 1. Napisz program który pobiera dwie liczby całkowite z klawiatury(a,b) i znajduje reszte z dzielenia liczby a przez b, wynik wypisz do wierszu polecenia*/

