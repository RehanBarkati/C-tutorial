#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        	
         Student(string p,string q,int r,vector<int> &scores):Person(p,q,r){
                 testScores=scores;
         }
        
        char calculate(){
            int sum=0;
            int p=testScores.size();
            float q;
            for(int i=0;i<p;i++){
                sum+=testScores[i];
            }
            q=(float)sum/p ;
            
            if(q>=90 && q<=100){
                return 'O';
            }
            else if(q<90 && q>=80){
                return 'E';
            }
            else if(q<80 && q>=70){
                return 'A';
            }
            else if(q<70 && q>=55){
                return 'P';
            }
            else if(q<55 && q>=40){
                return 'D';
            }
            else{
                return 'T';
            }
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}