import java.util.*;
class CandidateCode{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        long N=sc.nextLong();
        long IR[] = new long[(int)N];
        long IA[] = new long[(int)N];
        for(long i=0;i<N;i++)
            IR[(int)i]=sc.nextLong();
        for(long i=0;i<N;i++)
            IA[(int)i]=sc.nextLong();
        long A[]=new long[(int)N];
        for(long i=0;i<N;i++)
           A[(int)i]=IA[(int)i] / IR[(int)i]; 
        Arrays.sort(A);
        System.out.println(A[0]);
    }
}
