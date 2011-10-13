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

protected:
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

 int main(){



 }
