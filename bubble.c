bubble(int a[10],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

        }
    }
}