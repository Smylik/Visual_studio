#include <iostream>

using namespace std;

class animal
{
public:
    virtual void voice()
    {
        cout << "sound check" << endl;
    };

    virtual ~animal() {};
};

class dog :public animal
{
public:
    void voice() override
    {
        cout << "bark" << endl;
    };
};

class cat :public animal
{
public:
    void voice() override
    {
        cout << "lazania" << endl;
    };
};

class chicken :public animal
{
public:
    void voice() override
    {
        cout << "clock" << endl;
    };
};

int main()
{
    animal* flock[4];

    flock[0] = new animal;
    flock[1] = new dog;
    flock[2] = new cat;
    flock[3] = new chicken;

    for (int i = 0; i < 4; ++i)
        flock[i]->voice();

    for (int i = 0; i < 4; ++i)
        delete flock[i];

    return 0;
}

