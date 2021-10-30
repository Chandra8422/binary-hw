binarysearch(int a[10],int n)
{
    int i,mid,se,l,u,found=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubble(a,n);
    printf("enter value n:\n");
    scanf("%d",&se);
    l=0;
    u=n-1;
    while(l<=u)
    {
        mid=(l+u)/2;
        if(se<a[mid])
         u=mid-1;
        else if(se>a[mid])
         l=mid+1;
        else
        {
            found=1;
            break;
        }
    }     
        if(found==1)

        {
    
         printf("the element %d found ",se);
        } 
        else 
        {
         printf("not found");
        }
    

}