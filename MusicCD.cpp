#include "MusicCD.h"

MusicCD::MusicCD()
{
    time = 0;
}

MusicCD::MusicCD(string title, string author, int year, float price, int time)
    :Item(title, author, year, price)
{
    this->time = time;
}

void MusicCD::setTime(int time)
{
    this->time = time;
}

int MusicCD::getTime() const
{
    return time;
}

void MusicCD::showInfo() const
{
    cout << "\n----------------------------------\n";
    cout << "\tMusicCD";
    Item::showInfo();
    cout << "Time: " << time << endl << endl;
}
