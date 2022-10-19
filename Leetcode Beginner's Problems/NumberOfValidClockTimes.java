class Solution {
    public int countTime(String time) {
        char h1 = time.charAt(0);
        char h2 = time.charAt(1);
        char m1 = time.charAt(3);
        char m2 = time.charAt(4);
        int valid=1;
        if(h1=='?' && h2=='?')
            valid=valid*24;
        else if(h1!='?' && h2=='?'){
            if(h1=='0' || h1=='1')
                valid=valid*10;
            else
                valid=valid*4;
        }
        else if(h1=='?' && h2!='?'){
            if(Character.getNumericValue(h2)<=3)
                valid=valid*3;
            else
                valid=valid*2;
        }
        if(m1=='?' && m2=='?')
            valid=valid*60;
        else if(m1!='?' && m2=='?')
            valid=valid*10;
        else if(m1=='?' && m2!='?')
            valid=valid*6;
        return valid;
    }
}
