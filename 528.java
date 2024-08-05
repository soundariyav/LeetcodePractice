class Solution {
    double b [];
Random rnd;

    public Solution(int[] w) {
        /*
        1. FIND SUM, S
        2. FIND A[i]/S FOR EACH i, IN A NEW ARRAY
        3. FIND RUNNING SUM UPTO A[i] FOR EACH i, IN A NEW ARRAY
        */
        rnd = new Random();
         rnd.setSeed(0);
        double count =0;
        double a [] = new double[w.length];
        b = new double[w.length+1];
        for(int i=0;i<w.length;i++)
        {
            count = count+w[i];

        }
        count = count*1.0;
        //System.out.println(count);
        for(int i=0;i<w.length;i++)
        {
           double res= w[i]/count;
           //System.out.println("The numerator is " + w[i]);
           //System.out.println("the denomis" + count);
           a[i]= res;

           //System.out.println(res);
        }
       // System.out.println(Arrays.toString(a));
        for(int i=0;i<=w.length;i++)
        {
            b[0]=0;
            if(i==w.length)
            {
                b[w.length]= 1;
            }
            else
            {
                double val= a[i]+b[i];
                b[i+1]=val;

                //System.out.println(val);
            }

        }
        System.out.println(Arrays.toString(b));

    }

    public int binarys(double d, double[] a, int low, int high){
        /*
        must return the first index i such that, a[i]<=d<=a[i+1]
        */
        if(low>high)
        {
            return -1;

        }
        else
        {
            int mid = (low+high)/2;
            if(mid+1<a.length)
            {
            if((a[mid]<= d)&& (d<=a[mid+1]))
            {
                return mid;
            }
            }
            else if(mid-1>=0)
            {
                if((a[mid-1]<= d)&& (d<=a[mid]))
            {
                return mid-1;
            }
            }
            if(d<a[mid])
            {
            return binarys(d,a, low, mid-1);
            }
            else if(d>a[mid])
            {
            return binarys(d, a, mid+1,high);
            }
        }
        return -1;
    }
    
    public int pickIndex() {
         
         double tops= rnd.nextDouble();
         System.out.println(tops);
         return binarys(tops,b,0,b.length-1);

       // for(int i=0;i<b.length-1;i++)
        //{
          //  if((tops>b[i]) && (tops<b[i+1]))
            //{
              //  return i;            }
     }
        //return 0;

    }

