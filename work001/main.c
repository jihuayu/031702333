#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
struct node{
    int num;
    int i;
};
int comp(const void* a,const void* b){
    return ((struct node*)b)->num - ((struct node*)a)->num==0?((struct node*)b)->i - ((struct node*)a)->i:((struct node*)b)->num - ((struct node*)a)->num;
}
int main() {
    struct node nums[10];
    for(int i = 0; i<10 ;i++){
        nums[i].num=0;
        nums[i].i=i;
    }
    char num[MAX] = {0};
    scanf_s("%s",&num,MAX);
    for(int i=0;i<MAX;i++){
       if(num[i]==0)break;
       nums[num[i]-'0'].num++;
    }
    qsort(nums,10, sizeof(nums[0]),comp);
    for(int i = 0; i<10 ;i++){
        while(nums[i].num--){
            printf("%d",nums[i].i);
        }
    }
    return 0;
}