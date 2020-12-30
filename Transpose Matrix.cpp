#include<iostream>
# define N 3
# define M 3
using namespace std;

int main(){
	int n,m,largest=0;
	cout<<"Enter the number of rows: "; cin>>n;
	cout<<"Enter the number of columns: "; cin>>m;
	int a[n][m], at[m][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"A"<<i+1<<j+1<<": "; cin>>a[i][j];
		}
	}
	cout<<"\n\t\tMatrix A\n****************************************************"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n";
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			at[i][j] = a[j][i];
		}
	}
	cout<<"\n\tTranspose of Matrix A\n*************************************************"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"\t"<<at[i][j];
		}
		cout<<"\n";
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(largest < a[i][j]){
				largest = a[i][j];
			}
		}
	}
	cout<<"\nThe largest number in the matrix: "<<largest<<"\n"<<endl;
    system("pause");	
}
