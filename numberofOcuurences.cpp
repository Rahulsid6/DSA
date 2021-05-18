//N = 7, X = 2
//Arr[] = {1, 1, 2, 2, 2, 2, 3}
//Output: 4
int count(int a[], int n, int x) {
	    int l=0,r=n-1;
	    int ans1,ans2;
	    while(l<=r)
	    {
	        int mid=(l+r)/2;
	        if(a[mid]<=x)
	        {
	            l=mid+1;
	        }
	        else
	        {
	            r=mid-1;
	        }
	    }
	    ans1=r;
	    l=0;r=n-1;
	    while(l<=r)
	    {
	        int mid=(l+r)/2;
	        if(a[mid]>=x)
	        {
	            r=mid-1;
	        }
	        else
	        {
	            l=mid+1;
	        }
	    }
	    ans2=l;

	    return ans1-ans2+1;
	    
	}
