#include <iostream>
#include<list>

// Construstor

using namespace std;

class YoutubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string>PublishedVideoTitles;
    
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
};

int main()
{
    YoutubeChannel ytChannel("CodeBeauty", "Saldina");
    ytChannel.PublishedVideoTitles.push_back("C++ For Beginners");
    ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");
    YoutubeChannel ytChannel2("AnySings", "Amy");

    ytChannel.getInfo();
    ytChannel2.getInfo();



    system("pause>0");
}