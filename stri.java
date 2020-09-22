import java.io.*; 
class stri { 
static int countOccurences(String str, String word)  
{ 
    String a[] = str.split(" "); 
    int count = 0; 
    for (int i = 0; i < a.length; i++)  
    { 
    if (word.equals(a[i])) 
        count++; 
    } 
    return count; 
} 
public static void main(String args[])  
{ 
    String str = "Spring is a beautiful season"; 
    String word = "season"; 
    System.out.println("The number of occurences are: ");
    System.out.println(countOccurences(str, word)); 
} 
}
