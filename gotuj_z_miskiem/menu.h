#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

class menu
{
    private:
        int wybor;

    public:
        menu();
        virtual ~menu();

        void obsluga();
};
