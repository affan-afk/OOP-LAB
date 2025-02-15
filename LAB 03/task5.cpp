//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
class MusicPlayer{
    private:
    string playlist[100] = {""};
    string currentlyPlayingSong = "";
    public:
    void addSong(string song){
        for (int i = 0; i < 100; i++)
        {
            if (playlist[i] == song)
            {
                cout<<"-- "<<song<< " -- is already present in the playlist!"<<endl;
                return;
            }
        }
        
        for (int i = 0; i < 100; i++)
        {
            if (playlist[i] == "")
            {
                playlist[i] = song;
                cout<<"-- "<<song<< " -- was successfully added to the playlist!"<<endl;
                return; 
            }
        }
        cout<<"Playlist Full!"<<endl;
    }
    void removeSong(string song){
        for (int i = 0; i < 100; i++)
        {
            if (playlist[i] == song)
            {
                playlist[i] = "";
                cout<<"-- "<<song<< " -- was successfully removed from the playlist!"<<endl;
                return; 
            }
        }
        cout<<"Song not present in playlist!"<<endl;
    }
    void playSong(string song){
        if (currentlyPlayingSong == song)
        {
            cout<<"-- "<<song<< " -- is already playing!"<<endl;
            return;
        }
        for (int i = 0; i < 100; i++)
        {
            if (playlist[i] == song)
            {
                cout<<"-- "<<song<< " -- is now playing!"<<endl;
                currentlyPlayingSong = song;
                return; 
            }
        }
        cout<<"-- "<<song<< " -- not Found!"<<endl;
    }
    void displayPlaylist(){
        int count = 1;
        for (int i = 0; i < 100; i++)
        {
            if (playlist[i] != "")
            {
                cout<<count<<". "<<playlist[i]<<endl;
                count++;
            }
        }
        if (count == 1)
        {
            cout<<"Playlist Empty!"<<endl;
        }
        
    }
};
int main(){
    MusicPlayer imran_ki_playlist;
    imran_ki_playlist.addSong("shape of you");
    imran_ki_playlist.addSong("blinding lights");
    imran_ki_playlist.addSong("levitating");
    imran_ki_playlist.addSong("someone like you");
    imran_ki_playlist.addSong("counting stars");
    imran_ki_playlist.playSong("bad blood");
    imran_ki_playlist.playSong("end of beginning");
    imran_ki_playlist.addSong("shape of You");
    imran_ki_playlist.removeSong("havana");
    imran_ki_playlist.removeSong("despacito");
    imran_ki_playlist.playSong("shape of you");
    imran_ki_playlist.playSong("blinding lights");
    imran_ki_playlist.displayPlaylist();
    return 0;
}
