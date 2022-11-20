#include "pch.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 71

int printRace(int[][SIZE], int, int, int);
int num = rand()%11;
using namespace System;
void espera(int seconds)
{
    clock_t endwait;
    endwait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < endwait);
}
int main(array<System::String^>^ args)
{
    srand(time(0));
    int row, column, raceTrack[3][SIZE];
    int tortu = 1, liebre = 1, finish;

    Console::WriteLine("BANG!!\nY ESTAN FUERA\n\n", "Time: ", 0);
    finish = printRace(raceTrack, tortu, liebre, SIZE);

    if (finish == 1)
        Console::WriteLine("\n!La tortugaaaa ganoooo!\n");
    else if (finish == 2)
        Console::WriteLine("\nLastimosamente gana la liebre\n");
    else
        Console::WriteLine("\nEs un empate\n");


    return 0;
}





int printRace(int rt[][SIZE], int t, int h, int tam)
{
    void espera(int);

    int tortuga[10] = { num};
    int liebre[10] = {num};
    int cont = 1, row, column;

    while (t < tam - 1 && h < tam - 1) {
        for (row = 1; row < 3; row++) {
            for (column = 1; column < tam; column++) {
                if (t != h || t == 1) {
                    if (row == 1 && column == t)
                        Console::Write("T", 'T');
                    else if (row == 2 && column == h)
                        Console::Write("H", 'H');
                    else
                        Console::Write("==");
                }
                else {
                    if (row == 1 && column == t)
                        Console::Write("T", 'T');
                    else if (row == 2 && column == h)
                        Console::Write("", "OUCH!!!");
                    else
                        Console::Write("==");
                }
            }
            Console::Write("\n");
        }
        t += tortuga[rand() % 11];
        h += liebre[rand() % 11];
        if (t < 1) {
            t = 1;
        }
           
        if (h < 1) {
            h = 1;
        }
           
        if (1 < t > tam - 1) {
            t = tam - 1;
        }
          
        if (1 < h > tam - 1) {
            h = tam - 1;
        }
            
        espera(1);
        Console::Write("", "Time: ", cont++);
        
        Console::Write("\n\n\n");
    }

    for (row = 1; row < 3; row++) {
        for (column = 1; column < tam; column++) {
            if (row == 1 && column == t)
                Console::Write("T", 'T');
            else if (row == 2 && column == h)
                Console::Write("H", 'H');
            else
                Console::Write("==");
        }
        Console::Write("\n");
    }

    if (t == tam - 1 && h == tam - 1)
        return 0;
    else if (t == tam )
        return 1;
    else
        return 2;
}


//https://pubs.opengroup.org/onlinepubs/009695399/functions/srand.html //
//https://es.stackoverflow.com/questions/536227/borrar-linea-especifica-de-texto-en-c#:~:text=Cuando%20haces%20line.,menos%20la%20que%20quieres%20eliminar. //
//http://ejercicioscpp.blogspot.com/2012/11/c-ejercicios-basicos-resueltos.html //
//https://foro.elhacker.net/programacion_cc-b49.11025/;sort=subject //
//https://es.stackoverflow.com/questions/189061/la-expresin-debe-tener-un-valor-constante-c //