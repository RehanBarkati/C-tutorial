#include<iostream>
#include<cstring>
using namespace std;

class cwh{
    protected:
      string title;
      float rating;
   public:
      cwh(string s,float r ){
          title=s;
          rating=r;
      }
      virtual void display()=0  ;// do nothing function-> pure virtual function.
};

class cwhvideo : public cwh{
    float videolength;
     public:
       cwhvideo(string title,float r,float vl):cwh(title,r){
           videolength=vl;
       }
       void display(){
           cout<<"This is an amazing video with title "<<title<<endl;
           cout<<"ratings: "<<rating<<endl;
           cout<<"The length of this video is "<<videolength<<" minutes"<<endl;
       }
};
class cwhText : public cwh{
     int words;
     public:
       cwhText(string title,float r,int wc):cwh(title,r){
           words=wc;
       }
       void display(){
           cout<<"This is an amazing text tutorial with title "<<title<<endl;
           cout<<"ratings of this text tutorial : "<<rating<<endl;
           cout<<"The length of this texts is "<<words<<" words"<<endl;
       }
};
int main(){

    string title=new char[30];
    float rating,vlen;
    int words;

    //code with harry video

    title="Django tutorial";
    vlen=4.56;
    rating=4.89;
     cwhvideo djvideo(title,rating,vlen);
     djvideo.display();

     //code with harry video

    title="Django tutorial text";
    words=436;
    rating=4.89;
     cwhText djText(title,rating,words);
     djText.display();

     cwh* tuts[2];
     tuts[0]=&djvideo;
     tuts[1]=&djText;

     tuts[0]->display();
     tuts[1]->display();

    
     return 0;
}