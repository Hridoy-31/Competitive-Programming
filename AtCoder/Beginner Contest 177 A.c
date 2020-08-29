    #include <stdio.h>
     
    int main()
    {
        float d,t,s,r;
        scanf("%f %f %f", &d, &t, &s);
        
        r = d/s;
        
        if (r <= t) {
            printf("Yes");
        }
        else {
            printf("No");
        }
        
        return 0;
        
    }
