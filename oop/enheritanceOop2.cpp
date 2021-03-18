#include <iostream>
#include<list>

// Construtor

using namespace std;

class YoutubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string>PublishedVideoTitles;
protected:
    // string OwnerName;
    int ContentQuality;
public:    
    YoutubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
    } 

    void getInfo(){
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        
        for(string videoTitle : PublishedVideoTitles){
            cout << videoTitle << endl;
        }
    }  
    
    void Subscribe(){
        SubscribersCount++;
    }
    
    void Unsubscribe(){
        if(SubscribersCount>0)
            SubscribersCount--;
    }
    void PublishVideo(string title){
        PublishedVideoTitles.push_back(title);
        
    }
    void CheckAnalytics() {
        if(ContentQuality<5)
            cout << Name << " has bad quality content." << endl;
        else 
            cout << Name << " has great quality content." << endl;
    }
};

class CookingYoutubeChannel:public YoutubeChannel {
public: 
    CookingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){
    }
    void Practice(){
        cout << OwnerName <<" is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        ContentQuality++;
    }
};

class SingerYoutubeChannel:public YoutubeChannel {
public: 
    SingerYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){
    }
    void Practice(){
        cout << OwnerName <<" is taking singing classes, learning new songs, learning how to dance..." << endl;
        ContentQuality++;
    }
};


int main()
{
    CookingYoutubeChannel cookingYtChannel("Amy's Kitchen","Amy");
    SingerYoutubeChannel singersYtChannel2("John's Sings","John");

    cookingYtChannel.Practice();
    singersYtChannel2.Practice();
    singersYtChannel2.Practice();
    singersYtChannel2.Practice();
    singersYtChannel2.Practice();
    singersYtChannel2.Practice();

    YoutubeChannel * yt1 = &cookingYtChannel;
    YoutubeChannel * yt2 = &singersYtChannel2;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();



    system("pause>0");
}