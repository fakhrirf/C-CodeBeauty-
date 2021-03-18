#include <iostream>
#include<list>

// Constructor

using namespace std;

class YoutubeChannel {
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string>PublishedVideoTitles;
protected:
    string OwnerName;
public:    
    YoutubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
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
};

class CookingYoutubeChannel:public YoutubeChannel {
public: 
    CookingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){
    }
    void Practice(){
        cout << OwnerName <<" is practicing cooking, learning new recipes, experimenting with spices..." << endl;
    }
};


int main()
{
    CookingYoutubeChannel cookingYtChannel("Amy's Kitchen","Amy");
    CookingYoutubeChannel cookingYtChannel2("John's Kitchen","Amy");
    // cookingYtChannel.PublishVideo("Apple pie");
    // cookingYtChannel.PublishVideo("Chocolate cake");
    // cookingYtChannel.Subscribe();
    // cookingYtChannel.Subscribe();
    // cookingYtChannel.getInfo();
    YoutubeChannel ytChannel("CodeBeauty", "Saldina");
    

    system("pause>0");
}