#include<iostream>
#include<vector>
using namespace std;
class YoutubeChannel{
   public:
    string name;
    string ownername;
    int subscriberscount;
    vector<string> publishedvideotitle;
    //Constructor
    YoutubeChannel(string name1,string ownername1)
    {
        name=name1;
        ownername=ownername1;
        subscriberscount=0;
    }
    //Methods
    void getinfo()
    {
        cout<<name<<endl;
        cout<<ownername<<endl;
        cout<<subscriberscount<<endl;
        for(string video:publishedvideotitle) cout<<video<<endl;
    }
};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    YoutubeChannel ytchannel1("Code","Madhavan");
    ytchannel1.publishedvideotitle.push_back("C++ Tutorial");
    ytchannel1.publishedvideotitle.push_back("Java Tutorial");
    ytchannel1.publishedvideotitle.push_back("Javascript Tutorial");
    YoutubeChannel ytchannel2("Drawings","abc");
    ytchannel2.publishedvideotitle.push_back("Leo");
    ytchannel2.publishedvideotitle.push_back("Mersal");
    ytchannel2.publishedvideotitle.push_back("Goat");
    ytchannel1.getinfo();
    ytchannel2.getinfo();
    return 0;
}