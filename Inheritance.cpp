#include<iostream>
#include<vector>
using namespace std;
/*Inheritance Concept
Dervived class is created from the base class
which has all the methods(public in base class)
*/
class YoutubeChannel{
   private:
    string name;
    int subscriberscount;
    vector<string> publishedvideotitle;
    protected:
    string ownername;
   public:
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
}; 
class CookingYoutubeChannel:public YoutubeChannel{
    public:
    CookingYoutubeChannel(string name1,string ownername1):YoutubeChannel(name1,ownername1)
    {

    }
    void practice()
    {
      cout<<ownername<<" is Practicing Cooking"<<endl;
    }
};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    CookingYoutubeChannel ytchannel1("Tamil Cooks","John");
    ytchannel1.practice();
    CookingYoutubeChannel ytchannel2("Western Foods","Don");
    ytchannel2.practice();
    return 0;
}