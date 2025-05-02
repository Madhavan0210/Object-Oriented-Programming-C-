#include<iostream>
#include<vector>
using namespace std;
class Instrument{
  public: 
  virtual void makesound()=0;
};
class Accerdion:public Instrument{
    public:
    void makesound()
    {
        cout<<"Accerdion playing........"<<endl;
    }
};
class Guitar:public Instrument{
    public:
    void makesound()
    {
        cout<<"Guitar playing........"<<endl;
    }
};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    Instrument *l1=new Accerdion();
    Instrument *l2=new Guitar();
    l1->makesound();
    l2->makesound();
    return 0;
}