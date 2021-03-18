#include <iostream>
#include<list>

using namespace std;

class YoutubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string>PublishedVideoTitles;
    
};

int main()
{
    YoutubeChannel ytChannel;
    ytChannel.Name="CodeBeauty";
    ytChannel.OwnerName="Saldina";
    ytChannel.SubscribersCount= 1800;
    ytChannel.PublishedVideoTitles={"C++ for beginners video 1", "HTML & CSS video 1", "C++ OOP Video 1"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    
    for(string videoTitle : ytChannel.PublishedVideoTitles){
        cout << videoTitle << endl;

    }

    system("pause>0");
}