#include <bits/stdc++.h>
using namespace std;

class person {
	string fname;
	string lname;
	int id;

	public: person(string fn, string ln, int id ){
		fname= fn;
		lname= ln;
		id = id;
	}

	void printPerson() {
		cout<<"Name:" <<fname << " "<<lname<<"\n";
		cout<<"ID:" <<id<<"\n";
	}

};


class student: public person {
	std::vector<int> scores;

	public: student(string fn, string ln, int id, std::vector<int> testScores): person(fn,ln,id) {
		scores = testScores;
		
	}

	char calculate() {
		int avg=0;
		char grade;
		

		for(int i=0; i<scores.size(); i++){
        		avg += scores[i];
        	}

        	avg /= scores.size();

		if(avg<=100 && avg>=90)
          	  grade='O';
         		else if(avg<90 && avg>=80)
           		 grade='E';
        		 else if(avg<80 && avg>=70)
           		 grade='A';
        			 else if(avg<70 && avg>=55)
          			  grade='P';
         				else if(avg<55 && avg>=40)
            			grade='D';
        	 else
          		  grade='T';
        return grade;
	}
};


int main() {
	string fn;
	string ln;
	int id;
	int numScores;
	
	cin>>fn>>ln;
	cin>>id;
	cin>>numScores;
	std::vector<int> scores;;
	for(int i=0; i<numScores; i++){
		int sc;
		cin>>sc;
		scores.push_back(sc);

	}

	student* s= new student(fn,ln,id,scores);
	s->printPerson();
	cout<<"Grade:"<<s->calculate();


return 0 ;

}




