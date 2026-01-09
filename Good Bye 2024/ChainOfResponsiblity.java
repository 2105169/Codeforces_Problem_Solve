interface Chain{
    public void setNextChain(Chain nexChain);
    public void calculate(Numbers request);
}

class Numbers{
    private int number1, number2;
    private String calculated;

    public Numbers(int num1, int num2, String calculate){
        number1 = num1;
        number2 = num2;
        calculated = calculate;
    }

    public int getNumber1(){
        return number1;
    }

    public int getNumber2(){
        return number2;
    }

    public String getCalculation(){
        return calculated;
    }
}

class AddNumbers implements Chain{
    private Chain nextChain;

    public void setNextChain(Chain nexChain){
        this.nextChain = nexChain;
    }
    
    public void calculate(Numbers numbers){
        if(numbers.getCalculation()=="add"){
            int x = numbers.getNumber1() + numbers.getNumber2();
            System.out.println(numbers.getNumber1() + " + "+ numbers.getNumber2() + " = "+ x);
        }
        else{
            nextChain.calculate(numbers);
        }
    }
}

class SubNumbers implements Chain{
    private Chain nextChain;

    public void setNextChain(Chain nexChain){
        this.nextChain = nexChain;
    }
    
    public void calculate(Numbers numbers){
        if(numbers.getCalculation()=="sub"){
            int x =numbers.getNumber1()- numbers.getNumber2();
            System.out.println(numbers.getNumber1() + " - "+ numbers.getNumber2() + " = "+ x);
        }
        else{
            nextChain.calculate(numbers);
        }
    }
}

class MulNumbers implements Chain{
    private Chain nextChain;

    public void setNextChain(Chain nexChain){
        this.nextChain = nexChain;
    }
    
    public void calculate(Numbers numbers){
        if(numbers.getCalculation()=="mul"){
            System.out.println(numbers.getNumber1() + " * "+ numbers.getNumber2() + " = "+ numbers.getNumber1()*numbers.getNumber2());
        }
        else{
            nextChain.calculate(numbers);
        }
    }
}

class DivNumbers implements Chain{
    private Chain nextChain;

    public void setNextChain(Chain nexChain){
        this.nextChain = nexChain;
    }
    
    public void calculate(Numbers numbers){
        if(numbers.getCalculation()=="div"){
            System.out.println(numbers.getNumber1() + " / "+ numbers.getNumber2() + " = "+ numbers.getNumber1()/numbers.getNumber2());
        }
        else{
            System.out.println("Not applicable");
        }
    }
}


class ChainOfResponsibilty{
    public static void main(String []args){
        Chain add = new AddNumbers();
        Chain sub = new SubNumbers();
        Chain mul = new MulNumbers();
        Chain div = new DivNumbers();

        add.setNextChain(sub);
        sub.setNextChain(mul);
        mul.setNextChain(div);

        Numbers numbers = new Numbers(10, 2, "div");
        add.calculate(numbers);
    }
}