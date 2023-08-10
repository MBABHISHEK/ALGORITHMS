/*program to implement the element uniqueness with bruteforce*/
import java.util.Scanner;

public class Main {

    static void uniqueness(int [] arr)
    {
        int n=arr.length;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    System.out.println("the elements are not unique");
                    return;
                }

            }

        }

        System.out.println("the elements are  unique");
    }
    public static void main(String[] args) {

         Scanner sc = new Scanner(System.in);

        System.out.println("ENTER THE NUMBER OF ELEMENTS OF THE ARRAY");
        int n =sc.nextInt();
        int [] arr =new int[n];
        System.out.println("ENTER THE ELEMENTS OF THE ARRAY");
        for (int i=0;i<n;i++)
            arr[i]=sc.nextInt();

        uniqueness(arr);
        for(int i:arr)
            System.out.print(i+" ");
    }
}
