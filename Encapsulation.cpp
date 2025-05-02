/*Encapsulation means hiding the class data that can be accesed only by class methods*/
#include<iostream>
#include<vector>
using namespace std;
class YoutubeChannel{
   private:
    string name;
    string ownername;
    int subscriberscount;
    vector<string> publishedvideotitle;
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
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    YoutubeChannel ytchannel1("Code","Madhavan");
    ytchannel1.subscribe();
    ytchannel1.subscribe();
    ytchannel1.subscribe();
    ytchannel1.subscribe();
    ytchannel1.subscribe();
    ytchannel1.unsubscribe();
    ytchannel1.publishvideo("The last video");
    ytchannel1.publishvideo("The second last video");
    ytchannel1.getinfo();
    return 0;
}