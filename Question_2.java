
package interviewq;

interface Input {
    public void add(char c);
    public String getValue();
} 

class TextInput implements Input {
    String result = "" ;
    @Override
    public void add(char c) {
        result += c ; 
    }

    @Override
    public String getValue() {
        return result ;
    }

}
class  NumericInput implements Input {
    String result = "";
    @Override
    public void add(char c) {
        if ( c >= '0' && c <= '9' ) result += c ;
    }

    @Override
    public String getValue() {
        return result ;
    }

}

public class Question_2 {

    public static void main(String[] args) {
        Input input = new NumericInput();
        input.add('1');
        input.add('a');
        input.add('9');
        System.out.println(input.getValue());
        input = new TextInput();
        input.add('1');
        input.add('a');
        input.add('9');
        input.add('$');
        input.add('&');
        System.out.println(input.getValue());       
    }
    
    
}
