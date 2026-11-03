//Georgy Rached, Quiz 3, November 3

#include <iostream>
#include <string>
using namespace std;

class Tank
{
    private:
        string name;
        double capacity;   
        double level;    

    public:
        Tank() { name = "unnamed" ; capacity = 100; level = 0;}

        Tank(const string &n, double cap) : name(n), level(0)
        {
            if (cap <= 0)
                {capacity = 100;}
            else
                {capacity = cap;}
        }

        bool fill(double liters)
        {
            if (liters <= 0 || (level + liters) > capacity)
                return false;
            else
                {level = level + liters;
                 return true;}
        }

        bool drain(double liters)
        {
            if (liters <= 0 || (level - liters) < 0)
                return false;
            else
                {level = level - liters;
                return true;}
        }

        double percent() const
        {
            if (capacity == 0) {return 0;};
            return ((level / capacity) * 100.0);
        }

        bool isEmpty() const
        {
            return (level == 0);
        }

        string getName() const
        {
            return name;
        }

        int getLevel() const
        {
            return level;
        }

        int getCapacity() const
        {
            return capacity;
        }

        void print() const
        {
            cout<< name<< ": " <<level<< " / " <<capacity<< " L (" <<percent()<< "%)";

            if (isEmpty())
            {
                cout << " EMPTY";
            }
            cout << endl;
        }
};

int main()
{
    Tank spare;
    Tank loop("Cooling loop", 250);
    Tank bad("Test tank", -5);
    
    spare.print();
    loop.print();
    bad.print();
//-------------------------
    if (loop.fill(200))
    {
        cout << "fill 200 L: ok" << endl;
        loop.print();
    }
    else
        {cout << "fill 200 L: refused" << endl;}
//-------------------------
    if (loop.fill(80))
    {
        cout << "fill 80 L: ok" << endl;
        loop.print();
    }
    else
        {cout << "fill 80 L: refused" << endl;}
//-------------------------
    if (loop.drain(120))
    {
        cout << "drain 120 L: ok" << endl;
        loop.print();
    }
    else
        {cout << "drain 120 L: refused" << endl;}
//-------------------------
    if (loop.drain(100))
    {
        cout << "drain 100 L: ok" << endl;
        loop.print();
    }
    else
        {cout << "drain 100 L: refused" << endl;}
//-------------------------
    if (spare.fill(30))
    {
        cout << "fill 30 L into spare: ok" << endl;
        spare.print();
    }
    else
        {cout << "fill 30 L into spare: refused" << endl;}
//-------------------------
}
