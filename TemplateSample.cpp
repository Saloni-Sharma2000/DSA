#include <iostream>
using namespace std;
template<typename T,typename V>
class Pair{
    private:
        T x;
        V y;
    public:
        void setX(T value)
        {
            x=value;
        }
        void setY(V value)
        {
            y=value;
        }
        T getX()
        {
            return x;    
        }
        V getY()
        {
            return y;
        }
};
int main() {
    // Write C++ code here
    Pair<Pair<int,int>,int> p1;
    p1.setY(30);
    Pair<int,int> p2;
    p2.setX(10);
    p2.setY(20);
    p1.setX(p2);
    cout << "Hello world!"<<endl;
    cout <<p1.getX().getX()<<" "<<p1.getX().getY()<<" "<<p1.getY();

    return 0;
}
