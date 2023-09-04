class Solution {
public:
    string intToRoman(int nums) {

        string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hundreds[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thousands[]={"","M","MM","MMM"};

        return thousands[nums/1000] + hundreds[(nums%1000)/100] + tens[(nums%100)/10] + ones[nums%10];

        
    }
};