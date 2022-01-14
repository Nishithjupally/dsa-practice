string Solution::fractionToDecimal(int A, int B) {
    long long int n = A, d = B;
    bool neg = false;
    if((n<0 && d>0 ) || (n>0 && d<0))
    {
        neg = true;
    }
    n = abs(n);
    d = abs(d);
    map<int, int> m;  
    string ans = "";
    long long int q = n/d;
    ans.append(to_string(q));
    n = n%d;
    int x = ans.length()+1;
    m[n] = x;
    n*=10;
    
    bool rep = false;
    int rep_pos;
    bool flag = true;
    while(n>0){
        if(flag){
            ans.append(".");
            flag = false;
        }
        long long int q = n/d;
        string tmp = to_string(q);
        ans.append(tmp);
        n = n%d;
        if(m[n]){
            rep = true;
            rep_pos = m[n];
            break;  
        } 
        x = ans.length();
        m[n] = x;
        n = n*10;
        
    }
    if(rep){
        ans.append(")");
    
        ans.insert(rep_pos, "(");
    }
    if(neg){
        ans.insert(0, "-");
    }
    return ans;
}

string Solution::fractionToDecimal(int numerator, int denominator) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    string sol = "";
    
    long long int num = numerator;
    long long int den = denominator;
    
    bool neg = false;
    
    if(num < 0){
        neg = true;    
        num = 0 - num;
    }
    if(den < 0){
        if(neg){
            neg = false;
        }
        else{
            neg = true;
        }
        den = 0 - den;
    }
    
    unordered_map<int, int> myMap;
    
    long long int initial = num/den;
    
    if(num == 0){
        return "0";
    }
    
    if(neg){
        sol = sol + "-";
    }
    
    sol = sol + to_string(initial);
    
    num = num%den;
    
    if(num == 0){
        return sol;
    }
    
    sol = sol + ".";
    
    bool repeat = false;
    int val;
    while(num != 0 && repeat == false){
        num = num*10;
        if(myMap.find(num) != myMap.end()){
            repeat = true;
            val = myMap[num];
            break;
        }
        else{
            myMap.insert({num, sol.size()});    
        }
        int temp = num/den;
        sol = sol + to_string(temp);
        num = num%den;
    }
    
    if(repeat){
        sol = sol + ")";
        sol.insert(val, "(");
    }
    
    return sol;
}