#include <iostream>
#include <string>
#include <format>

using namespace std;

// Abstract class (Interface)
// Virtual methods  = 0;
class InstrumentBase
{
protected:
    string name;

public:
    virtual void Play() = 0;
    virtual void Stop() = 0;
};

// Abstract class
class MusicalInstrument : InstrumentBase
{

public:
    MusicalInstrument(string name)
    {
        //InstrumentBase::name = 
        this->name = name;
        cout << "MusicalInstrument constructor ...\n";
    }

    virtual void Pause() = 0;

    virtual void Play() override
    {
        cout << format("Playing {}...\n", this->name);
    }

    void Stop() override
    {
        cout << format("Stoping {}...\n", this->name);
    }
};

class Pluckable
{
protected:
    string stringsType;
public:
    Pluckable()
    {
        cout << "Pluckable constructor ...\n";
    }
};

class StringInstrument : public MusicalInstrument, public Pluckable
{
public:
    StringInstrument(string name) :MusicalInstrument(name)
    {
    }

    void Pause() override
    {
        cout << "Pausing \n";
    }
};

class Violin : public StringInstrument
{
public:
    Violin(): StringInstrument("VIOLIN")
    {
    }

    void Play() override
    {
        StringInstrument::Play();
        cout << "Playing violin ...\n";
    }
};


int main()
{
    //InstrumentBase i1;
    //MusicalInstrument mi{"Instrument 1"};
    //mi.Play();

 /*   StringInstrument si{"Instrument 2"};
    si.Play();*/

    Violin v;
    v.Play();

    cout << "READY!\n";
}