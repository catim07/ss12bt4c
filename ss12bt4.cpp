#include<stdio.h>
void numMax(int array[],int n){
	int max=array[0];
	for(int i=1;i<n;i++){
		if(array[i]>max){
			max=array[i];
		}
	}
	printf("so lon nhat trong mang la: %d",max);
}
int main(){
	int array[]={31,0,7,2,6,9,8};
	int n=sizeof(array)/sizeof(array[0]);
	numMax(array,n);
	return 0;
}
