class submatrix
{

    static void print(int ar[][] , int l)
    {
        for(int i = 0 ; i < l ; i++){

            for(int j = 0 ; j < l ;j++)
            System.out.print(ar[i][j]+ " ");
        System.out.println();
        }
        System.out.println();                
    }

    public static void main(String args[])
    {
        int ar[][] = {
                        {1,2,3,4},
                        {2,3,5,6},
                        {3,4,5,6}
                     };


        int l = 2 , index_x = 0, index_y = 0;

        while(l<=4 && l<=3)
        {
            int a[][] = new int[l][l];
            for(int i = index_x ; i < l + index_x ; i++)
            {
                for(int j = index_y; j < l+index_y ; j++)
                {
                    System.out.print(ar[i][j]+ " ");
                }
                System.out.println();
            }
            System.out.println("\n\n\n");
            // print(a , l);

            index_y++;
            if((index_y + l) > 4)
            {
                index_x++;
                if((index_x + l) > 3)
                {
                    l++;
                    index_x  = 0;
                    index_y = 0;
                    continue;
                }
                index_y = 0;
                continue;
            }


        }
        
    }
}