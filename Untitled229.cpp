#include<stdio.h>
int min(int a,int b){
    if(a>b) return b;
    return a;
}
int main(){
    int a;scanf("%d",&a);
    int i=0;
    while(i<2*a-1){
        int arr[2001]={0};
        int j=0;
        if(i<a){
        for(int k=0;k<a;k++){
            arr[k]=a-min(i,k);
            arr[2*a-2-k]=arr[k];
        }
//       while(j<2*a-1){
//           printf("%d ",arr[j]);
//          j++;
//        }
//       printf("\n");
//        i++;
	}
        else{
            for(int k=0;k<a;k++){
            arr[k]=a-min(2*a-2-i,k);
            arr[2*a-2-k]=arr[k];
        }}
        while(j<2*a-1){
            printf("%d ",arr[j]);
            j++;
        }
        printf("\n");
        i++;
        
    }
}
