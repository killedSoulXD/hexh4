#include<iostream>
using namespace std;
void form(int arr[],int num,int h,int l){
	if(num == 1){
        arr[h] = num;
		return ;
	}
	if(num%2 == 0){
		arr[h] = num;
		h-=1;
	}
	else{
		arr[l] = num;
		l+=1;
	}
	form(arr,num-1,h,l);
}
int main() {
	int q,l=0;
	cin >> q;
	int arr[q];
	form(arr,q,q-1,l);
    for(int i=0;i<q;i++)
        cout<<arr[i]<<endl;
	return 0;
}