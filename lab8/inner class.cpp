//inner class
#include <iostream>
using namespace std;
class Outer
{
    public:
    void Fun ()
    {
        i.Display ();
    }
    class Inner
    {
        public:
        void Display ()
        {
            cout << "Display of Inner" << endl;
        }
    };
    Inner i;
};
int main()
{
    Outer::Inner i;
    i.Display();
    return 0;
}
