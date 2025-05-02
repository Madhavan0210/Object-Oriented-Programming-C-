#include<iostream>
#include<vector>
using namespace std;
class Instrument{
  public: 
  virtual void makesound()
  {
    cout<<"Instrument playing......."<<endl;
  }
};
class Accerdion:public Instrument{
    public:
    void makesound()
    {
        cout<<"Accerdion playing........"<<endl;
    }
};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    Instrument *l1=new Accerdion();
    l1->makesound();
    return 0;
}