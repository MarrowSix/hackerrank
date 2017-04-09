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
  		// Write your constructor
        Student(string firstName, string lastName, int identification, vector<int> scores):
            Person(firstName, lastName, identification),
            testScores (scores) {}
  		// Write char calculate()
        char calculate() {
            int len = testScores.size();
            int sum = 0;
            for (int i=0; i<len; i++) {
                sum += testScores[i];
            }
            sum /= len;
            char avg;
            if (sum >= 90 && sum <=100) {
                avg = 'O';
            } else if (sum >= 80 && sum < 90) {
                avg =  'E';
            } else if (sum >= 70 && sum < 80) {
                avg =  'A';
            } else if (sum >= 55 && sum < 70) {
                avg = 'P';
            } else if (sum >= 40 && sum < 55) {
                avg = 'D';
            } else if (sum < 40) {
                avg = 'T';
            }
            return avg;
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