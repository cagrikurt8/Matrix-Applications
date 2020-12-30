#include<iostream>
# define N 3
# define M 3
using namespace std;

int main(){
	int n,m=3;
	cout<<"How many students there are? "; cin>>n;
	int a[n][m], g[n][1];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"Enter the "<<i+1<<". student's project, midterm and final grade: "; cin>>a[i][j]; 
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<1; j++){
			g[i][1] = (a[i][j]*0.10) + (a[i][j+1]*0.40) + (a[i][j+2]*0.50);
		}
	}
	
	cout<<"\n\t\Students' Grades-Project-Midterm-Final-Success\n*********************************************************"<<endl;
	for(int i=0; i<n; i++){
		cout<<i+1<<". student's grades: ";
		for(int j=0; j<1; j++){
			cout<<"\t"<<a[i][j]<<"\t"<<a[i][j+1]<<"\t"<<a[i][j+2]<<"\t"<<g[i][1];
		}
		cout<<"\n";
	}
    system("pause");	
}
