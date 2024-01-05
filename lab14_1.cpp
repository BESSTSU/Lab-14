#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
T sum;
int x;    
for(int i=0;i<N-1;i++)
        {    
           for(int j = 0;j <=i;j++)
            {
                if(d[j]<d[i+1])
                {   sum=d[i+1];
                    x=i;
                    for(int k =j;k<=i;k++)
                    {
                    d[x+1]=d[x];
                    x--;
                    }
                    d[j]=sum;    
                }
            } 
            cout<<"Pass "<<i+1<<":";
            for(int M=0;M<N;M++)
            {cout << d[M]<<" ";}  
            cout<<"\n";  
        }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
