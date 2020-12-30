#include<iostream>

using namespace std;
int main(){
	int n1,m1,n2,m2;
	cout<<"Enter the number of rows for Matrix A: "; cin>>n1;
	cout<<"Enter the number of columns for Matrix A: "; cin>>m1;
	cout<<"Enter the number of rows for Matrix B: "; cin>>n2;
	cout<<"Enter the number of columns for Matrix B: "; cin>>m2;
	int a[n1][m1], b[n2][m2], c[n1][m2];	
	cout<<"\n";
	
	if(m1 != n2){
		cout<<"These matrices cannot be multiplied!(The number of columns of A != The number of rows of B)"<<endl;
		cout<<"\n";
	}
	else{
		cout<<"\n";
		
	    for(int i=0; i<n1; i++){
		    for(int j=0; j<m1; j++){
			    cout<<"A"<<i+1<<j+1<<": "; cin>>a[i][j];
		    }
	    }
	    
	    cout<<"\n";
	    
	    for(int i=0; i<n2; i++){
		    for(int j=0; j<m2; j++){
			    cout<<"B"<<i+1<<j+1<<": "; cin>>b[i][j];
		    }
	    }
	   
	   for(int i=0; i<n1; i++){
	   	   for(int j=0; j<m2; j++){
	   	   	   c[i][j] = 0;
	   	   	   for(int k=0; k<m1; k++){
	   	   	   	   c[i][j] += a[i][k]*b[k][j];
			   }
	   	   	   
		   }
	   }
	   
	   cout<<"\n\t\tMatrix A\n********************************************"<<endl;
	   for(int i=0; i<n1; i++){
		    for(int j=0; j<m1; j++){
			    cout<<"\t"<<a[i][j];
		    }
		    cout<<"\n";
	    }
	    
	    cout<<"\n\t\tMatrix B\n********************************************"<<endl;
	    for(int i=0; i<n2; i++){
		    for(int j=0; j<m2; j++){
			    cout<<"\t"<<b[i][j];
		    }
		    cout<<"\n";
	    }
	    
	    cout<<"\n\t\tMatrix AxB\n***********************************************"<<endl;
	   for(int i=0; i<n1; i++){
	   	   for(int j=0; j<m2; j++){
	   	   	   cout<<"\t"<<c[i][j];
		   }
		   cout<<"\n";
	   }
    }
	system("pause");
}
