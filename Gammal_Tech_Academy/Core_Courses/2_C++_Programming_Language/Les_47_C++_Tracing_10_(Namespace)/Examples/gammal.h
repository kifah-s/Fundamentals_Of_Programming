#include <iostream>
#include <string>

using namespace std;

#define c(x) cout << x << endl

namespace gammal_tech
{
    long long int members = 10987283902983;

    template <typename G>

    void gammal_print(G g)
    {
        c(g);
    }

    void print(string x)
    {
        if (x == "hi")
            c("Welcome to Gammal Tech");
        else if (x == "mt")
            c("Membership type: ");
        else
            gammal_print(x);
    }

    class gammal
    {
    private:
        string membership;

    public:
        gammal(string x)
        {
            if (x == "C" || x == "year")
                membership = x;
            else
                gammal_print("Error");
        }

        void membership_type()
        {
            gammal_print(membership);
        }
        
        void upgrade()
        {
            if (membership == "C")
                gammal_print("upgrade to yearly membership");
            else if (membership == "Year")
                gammal_print("upgrade to lifetime");
        }
    };
}