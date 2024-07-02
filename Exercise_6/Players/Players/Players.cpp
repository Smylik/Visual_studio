
#include <iostream>

using namespace std;

class player
{
private:
    string name;
    int score;
public:

    player() :name(""), score(0) {}; // конструктор

    void setname()
    {
        cout << "Set Player's name: " << endl;
        cin >> name;
    }

    void setscore()
    {
        cout << "Set Player's score: " << endl;
        cin >> score;
    }

    void infout()
    {
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
    }

    int getscore() const { return score; }
};

void sort(player* plptr, int size) // сортировка по типу пузырька
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (plptr[j].getscore() < plptr[j + 1].getscore())
            {
                player tmp = plptr[j];
                plptr[j] = plptr[j + 1];
                plptr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int size;
    
    cout << "Enter how many players will participate: " << endl;
    cin >> size;

    player* plptr = new player[size];
    for (int i = 0; i < size; ++i)
    {
        plptr[i] = *new player;
        plptr[i].setname();
        plptr[i].setscore();
    }
    
    sort(plptr, size);

    for (int j = 0; j < size; ++j)
    {
        plptr[j].infout();
    }

    delete[]plptr;

    return 0;
}
