//To check which row has highest number of 1's
//(Array Element should be 1 or 0).

#include <stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    
    int a[r][c];
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=0,ans=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=a[i][j];
            if(sum>max){
                max=sum;
                ans=i+1;
            }
        }
    }printf("Highest Number of 1's is in %d row",ans);
    

    return 0;
}