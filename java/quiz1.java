import java.io.*;
import java.util.*;
class readCsv{
    public static void main (String[] args) throws IOException{
        String ln;
        double [] [] data = new double [150] [4];
        final String filename = "D:\\C,C++,python Prog\\java\\iris.csv";
        FileReader fr = new FileReader (filename);
        BufferedReader br = new BufferedReader (fr);
        for (int i = 0; i < 150; ++i){
            ln = br.readLine () ;
            String[] dl = ln.split (",");
            for (int j = 0; j < 4; ++j){
                data[i] [j] = Double.parseDouble (dl[j]);
            }
        }
        System.out.print ("att1 att2 att3 att4 ") ;
        System.out.println();
        for (int i= 0; i < data.length; ++i){
            for (int j = 0; j < data[i].length; ++j){
                System.out.print (data[i][j]+"  ") ;
            }
            System.out.println();
        }
        int[] result = new int[data.length];
        int[] result1 = new int[data.length];
        int sum = 0, avg = 0;
        for (int i= 0; i < data.length; ++i){
            int min = (int) data[0][i];
            int max = (int) data[0][i];
        for (int j = 0; j < data[i].length; ++j){
            if (data[j][i] < min) {
                min = (int) data[j][i];
            }
            result[i] =min;
            if (data[j][i] > max) {
                max = (int) data[j][i];
            }
            result1[i] = max;
            sum = (int) (sum + data[i][j]);
            float v = (float)(data[i][j] - min/(max - min));
            System.out.printf("%.3f ",v);
        }
        System.out.println("min="+min);
        System.out.println("max="+max);
        avg = sum / data[i].length;
        sum = 0;
        System.out.println("average="+avg);
        System.out.println("The Data Set after Normalization: ");
        }
    }
}