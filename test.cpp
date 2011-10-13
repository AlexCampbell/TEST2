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
protected:
    bool controled;
    std::set<Territory> countries;
public:
    void control(void)
    void uncontrol(void)
    bool whetercontroled(void)
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

void Sectors::uncontrol(void)
{
    controled = 0;
}

bool Sectors::whethercontroled(void)
{
    return(controled);
}

 int main(){



 }
