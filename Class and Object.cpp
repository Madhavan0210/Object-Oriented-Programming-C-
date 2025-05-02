#include<iostream>
#include<vector>
using namespace std;
class YoutubeChannel{
   public:
    string name;
    string ownername;
    int subscriberscount;
    vector<string> publishedvideotitle;
};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    YoutubeChannel ytchannel;
    ytchannel.name="Tamil";
    ytchannel.ownername="Madhavan";
    ytchannel.subscriberscount=1800;
    ytchannel.publishedvideotitle={"Hello viewers","7 days to google","Jobless"};
    cout<<ytchannel.name<<endl;
    cout<<ytchannel.ownername<<endl;
    cout<<ytchannel.subscriberscount<<endl;
    cout<<"videos"<<endl;
    for(string video:ytchannel.publishedvideotitle) cout<<video<<endl;
    return 0;
}