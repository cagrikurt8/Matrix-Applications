#include<iostream>
# define N 3
# define M 3
using namespace std;

int main(){
	int n,m;
	cout<<"Enter the number of rows: "; cin>>n;
	cout<<"Enter the number of columns: "; cin>>m;
	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"A"<<i+1<<j+1<<": "; cin>>a[i][j];
		}
	}
	cout<<"\n\t\tMatrix A\n************************************************"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n";
	}
    system("pause");	
}
