 #include <stdio.h>
    void main ()
    {
 
        int num[20];
 
        int i, j, a, n;
        printf("Enter the value of N\n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &num[i]);
 
        /*  sorting begins ... */
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (num[i] < num[j]) 
                {
                    a = num[i];
                    num[i] = num[j];
                    num[j] = a;
                }
            }
        }
        printf("The Second Largest number is:%d",num[1]);
    }