//header file to declare member function and variables.
#ifndef BUG_H
#define BUG_H
#include <string>

using namespace std;
class Bug
{
public:
    //constructor declaration:
    Bug(int initial_position);

    //member functions:
    void turn();
    void move();
    int get_position() const;

    private:
    //member variable declaration:
    int p; //for position.
    string direction; //for direction
};
#endif
