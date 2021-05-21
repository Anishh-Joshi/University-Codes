#include <iostream>
using namespace std;
class Video {
private:
    
    int numberOfViews, likes, dislikes;

public:
    string Title;
    Video();
    Video(string Title, int numberOfViews, int likes, int dislikes)
    {
        this->Title = Title;
        this->numberOfViews = numberOfViews;
        this->likes = likes;
        this->dislikes = dislikes;
    }
    friend bool operator > (const Video& video1, const Video& video2);
};
bool operator>(const Video& video1, const Video& video2)
{
    if (video1.numberOfViews < video2.numberOfViews){
        return false;
    }
    if (video1.likes < video2.likes)
        return false;
    if (video1.dislikes > video2.dislikes)
        return false;
    return true;
}
int main()
{
    Video video1("Despacito",1000,10,10),video2("Friends",10000, 2000, 0);
    bool catcher = video2> video1;
    if (catcher) {
        cout <<video2.Title<< " is the loved video" << endl;
    }
    else {
        cout <<video2.Title<< " isn not the loved video" << endl;
    }
}