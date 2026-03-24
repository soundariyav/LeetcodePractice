class Transaction{
    public String name;
    public int time;
    public int amount;
    public String city;
    public Transaction(){
        
    }
}
class Solution {
    public List<String> invalidTransactions(String[] t) {
         List<Transaction>ans = new ArrayList<Transaction>();
         List<String>c = new ArrayList<String>();
         HashSet<Integer>st = new HashSet<>();
         for(int i=0;i<t.length;i++){
            int count = 0;
            Transaction p = new Transaction();
            StringBuilder sb = new StringBuilder();
            for(int j=0;j<t[i].length();j++){
                if (t[i].charAt(j) == ',') {
                    if(count==0){
                         String name = sb.toString();
                         p.name = name;
                         sb = new StringBuilder();
                        
                    }
                    else if(count==1){
                        String id = sb.toString();
                        int minutes = Integer.parseInt(id);
                        p.time = minutes;
                        sb = new StringBuilder();
                    }
                    else if(count==2){
                        String a = sb.toString();
                        int amount = Integer.parseInt(a);
                        p.amount = amount;
                        sb = new StringBuilder();
                    }
                     else if(count==3){
                        String city = sb.toString();
                        p.city = city;
                        sb = new StringBuilder();
                    }
                    count++;
                }
                else{
                    sb.append(t[i].charAt(j));
                }
            }
            String city = sb.toString();
            p.city = city;
            ans.add(p);
        }
        for(int i=0;i<ans.size();i++){
            if(ans.get(i).amount>1000){
                 st.add(i);
                 System.out.println("Adding i " + i);
            }
            String name = ans.get(i).name;
            int time = ans.get(i).time;
            String city = ans.get(i).city;
            for(int j=i+1;j<ans.size();j++){
                if((ans.get(j).name.equals(name) && !ans.get(j).city.equals(city)) && (Math.abs(ans.get(j).time - time)<=60)){
                    st.add(j);
                    st.add(i);
                    System.out.println("Adding j " + j);
                }
            }
        }
        for(Integer i : st){
            int index = i;
            c.add(t[index]);
        }
        return c;
    }
}
