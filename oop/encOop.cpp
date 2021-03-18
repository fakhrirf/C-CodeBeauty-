#include <iostream>
#include<list>

// Construstor

using namespace std;

class YoutubeChannel {
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string>PublishedVideoTitles;
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

int main()
{
    YoutubeChannel ytChannel("CodeBeauty", "Saldina");
    ytChannel.PublishVideo("C++ For Beginners");
    ytChannel.PublishVideo("HTML & CSS for beginners");
    ytChannel.PublishVideo("C++ OOP");
    ytChannel.Unsubscribe();
    ytChannel.getInfo();
 



    system("pause>0");
}