#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include "Item.h"
#include "MusicCD.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    MusicCD a("Театр демона","Король и Шут", 1990,100,120);
    a.showInfo();

    return 0;
}