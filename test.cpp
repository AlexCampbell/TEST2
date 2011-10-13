#include <iostream>
#include <set>


class Territory{
protected:
    bool selected;
    std::set<Territory> neighbors;
public:
    void select(void);
    void unselect(void);
    bool whetherselected(void);
}x, y, z;


class Sectors{
public:
    bool controled;
protected:
    void control(void)
    void uncontrol(void)
    bool whetercontroled(void)
std::set<Territory> countries;
};

void Territory::select(void)
{
    selected = 1;
}

void Territory::unselect(void)
{
    selected = 0;
}

bool Territory::whetherselected(void)
{
    return(selected);
}

void Sectors::control(void)
{
    controled = 1;
}

void Territory::uncontrol(void)
{
    controled = 0;
}

bool Territory::whethercontroled(void)
{
    return(controled);
}

 int main(){



 }
