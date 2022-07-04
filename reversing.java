import java.util.Scanner;

public class reversing {
    public static void main(String[] args) {
        Scanner entry = new Scanner(System.in);
        System.out.print("enter a word:");
        String word=entry.nextLine();
        word = word.trim();
        String result = ""; 
        char[] ch=word.toCharArray(); 
        for(int i=ch.length-1;i>=0;i--){
            result+=ch[i];
        }
        System.out.println("reversed word:"+result.trim());
        }
}
