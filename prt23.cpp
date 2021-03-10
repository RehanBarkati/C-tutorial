#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
    
    int getHeight(Node* root){
          if(root==NULL){
              return 0;
          }
          else{
              int a=getHeight(root->left);
              int b=getHeight(root->right);
              
            return  (a>b) ? (a+1) :  (b+1) ;
          }
      }
      
      void printlevelOrder(Node *root,int h){
          for(int i=1;i<=h;i++){
              printGivenLevel(root,i);
          }
      }
      
    
     void levelOrder(Node * root){
      int h=getHeight(root);
      printlevelOrder(root,h);
    }
     void printGivenLevel(Node *root,int level){
          if(root==NULL){
              return ;
          }
          else if (level==1){
              cout<<root->data;
          }
          else{
              printGivenLevel(root->left,level-1);
              printGivenLevel(root->right,level-1);
          }
      }
     
      
	

};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}