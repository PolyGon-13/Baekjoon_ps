#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100000

char result[SIZE*2];
int stack[SIZE];
int top=-1;

int main()
{
    int i,n;
    scanf("%d",&n);
    int *arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++) // 목표 수열
        scanf("%d",&arr[i]);
        
    int num=1;
    int idx=0;
    int result_idx=0;
    while(1)
    {
        if(top==-1 || stack[top]<arr[idx])
        // 스택에 있는 수가 목표 수보다 낮은 경우
        {
            stack[++top]=num++;
            result[result_idx++]='+';
        }
        else if(stack[top]==arr[idx])
        // 스택 상단부분의 수가 목표 수와 같은 경우
        {
            top--;
            result[result_idx++]='-';
            idx++;
        }
        else
        // 스택의 상단부분의 수가 목표 수보다 높은경우
        {
            printf("NO\n");
            return 0;
        }
        if(result_idx==n*2) 
        // n개의 숫자가 push 1번, pop 1번 수행됨
        // n개의 숫자가 있으면 1부터 n까지 모든 숫자가 결국에는 스택에 1번 push되고, 해당 숫자가 idx일때 1번 pop되는 구조
            break;
    }
    
    for(i=0;i<result_idx;i++)
        printf("%c\n",result[i]);
    
    return 0;
}
// 이때동안 스택 구현 문제들을 풀 때 구조체 선언하고 초기화 및 push,pop함수를 제작해서 문제를 수행했는데, 이런식으로 간단하게 수행할 수도 있음
