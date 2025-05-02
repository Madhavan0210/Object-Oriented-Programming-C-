/*Same member but different behaviour
*/
#include<iostream>
#include<vector>
using namespace std;
class YoutubeChannel{
    private:
     string name;
     int subscriberscount;
     vector<string> publishedvideotitle;
     protected:
     string ownername;
     int quality;
    public:
    //Constructor
    YoutubeChannel(string name1,string ownername1)
    {
        name=name1;
        ownername=ownername1;
        subscriberscount=0;
        quality=0;
    }
    //Methods
    void getinfo()
    {
        cout<<name<<endl;
        cout<<ownername<<endl;
        cout<<subscriberscount<<endl;
        for(string video:publishedvideotitle) cout<<video<<endl;
    }
    void subscribe()
    {
     subscriberscount++;
    }
    void unsubscribe()
    {
     if(subscriberscount>0) subscriberscount--;
    }
    void publishvideo(string video)
    {
     publishedvideotitle.push_back(video);
    }
    void checkquality()
    {
      if(quality>=5) cout<<name<<" has Great Content"<<endl;
      else cout<<name<<" has Bad Content"<<endl;
    }
}; 
class CookingYoutubeChannel:public YoutubeChannel{
    public:
    CookingYoutubeChannel(string name1,string ownername1):YoutubeChannel(name1,ownername1)
    {

    }
    void practice()
    {
      cout<<ownername<<" is Practicing Cooking"<<endl;
      quality++;
    }
};
class SingingYoutubeChannel:public YoutubeChannel{
    public:
    SingingYoutubeChannel(string name1,string ownername1):YoutubeChannel(name1,ownername1)
    {

    }
    void practice()
    {
      cout<<ownername<<" is Practicing Singing"<<endl;
      quality++;
    }
};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    CookingYoutubeChannel ytchannel1("Tamil Cooks","John");
    ytchannel1.practice();
    ytchannel1.practice();
    ytchannel1.practice();
    ytchannel1.practice();
    ytchannel1.practice();
    SingingYoutubeChannel ytchannel2("Western Foods","Don");
    ytchannel2.practice();
    YoutubeChannel *yt1=&ytchannel1;
    YoutubeChannel *yt2=&ytchannel2;
    yt1->checkquality();
    yt2->checkquality();
    return 0;
}