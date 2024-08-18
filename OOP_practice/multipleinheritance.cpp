#include <iostream>
using namespace std;

    class Cricketer{
public:
int runs;
int wickets;
int average;
    };
class Engineer{
    public:
int experience;
string domain;

};
class best : public Engineer, Cricketer{ //multiple inheritance
public:
string name;
};
int main()
{
    best c1;
    c1.name = "someone";
    c1.runs= 32323;
    c1.domain = "raunak.atwebpages.com";

}