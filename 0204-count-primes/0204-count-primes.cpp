class Solution {
public:
    int countPrimes(int n) {
        if(n<=0){
            return 0;
        }
        vector<bool> isprime(n,true);
        isprime[0]=isprime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(isprime[i]){
                for(int j=2*i;j<n;j+=i){
                    isprime[j]=0;
                }
            }
        }
        int count=0;
        for(bool i:isprime){
            if(i==1){
                count++;
            }
        }
        return count;
    }
};