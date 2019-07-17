/*A modified Kaprekar number is a positive whole number with a special property.
If you square it, then split the number into two integers and sum those integers, 
you have the same value you started with.
*/

#include<stdio.h>
long splits(long sq);
long countDig(long num);
long square(long num);
long mypow(long x,long y);
int flag=0;
int main()
{
    long p,i,q;
   // printf(" %d" , mypow(10,2));
   // return 0;
    //printf("%ld",sizeof(long ) );
//    printf("Enter num..");
    scanf("%ld %ld",&p,&q);

    for(i=p;i<=q;i++)
    {
    long sq =square(i);
    long res=splits(sq);
        if(res == i)
        {
            flag = 1;
            printf("%ld ",i);
        }
    }
    //    printf("Digits(%d) = %d",num,digits);
    if(flag==0)
    {
        printf("INVALID RANGE");
    }
    return 0;
}

long square(long num)
{
    return (num * num);
}

long mypow(long x,long y)
{
    long i;
    int res = x;
    for( i=1;i<y;i++)
        res = res * x;
    return res;
}

long splits(long sq)
{
    long digits = countDig(sq);
    long den= mypow(10, (digits+1)/2);
    long right = sq%den;
    long left = sq/den;
    return (left + right);
}

long countDig(long num)
{
    if(num ==0)
        return 0;
    num=num/10;
    return 1+countDig(num);
}
