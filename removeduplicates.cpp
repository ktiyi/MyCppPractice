#include <iostream>
using namespace std;
int main(){
	int arr[50];
	int i,j,k,n;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	cout<<"Enter elements in array:"<<endl;
	for(i=0; i<n; i++) {
           cin>>arr[i];
     }
	
	for(i=0; i<n; i++)
	for(j=i+1; j<n; j++)
	if(arr[i]==arr[j]){
		for(k=j; k<n-1; k++)
		arr[k]=arr[k+1];
		n--; 
                j--;
	}
	cout<<"Array elements after removing duplicates:"<<endl;
	for(i=0; i<n; i++) {
              cout<<arr[i]<<" ";
           }
	return 0;
}
