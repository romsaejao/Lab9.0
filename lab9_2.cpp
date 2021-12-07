#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
char findGrade(float a)
{
char x;
    if(a>90)
    {
        x = 'A';
    }
     if(a>75&&a<=90)
    {
        x = 'B';
    }
     if(a>60&&a<=75)
    {
        x = 'C';
    }
     if(a>45&&a<=60)
    {
        x = 'D';
    }
     if(a<=45)
    {
        x = 'F';
    }
    return x;
}

int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	string a[N] = {};
    double b[N] = {};
	while(i < N){
	    
		cout << "Name of student " << i+1 << ": ";
	    cin.ignore();
		getline(cin,a[i+1]);
		cout << "Score of student " << i+1 << ": ";
        cin>>b[i+1];
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
