import java.io.*;
import java.math.*;
import java.util.*;
import java.util.ArrayList;

class Meeting{

    private int startTime;
    private int endTime;

    public Meeting(int startTime, int endTime) {
        // number of 30 min blocks past 9:00 am
        this.startTime = startTime;
        this.endTime   = endTime;
    }

    public int getStartTime() {
        return startTime;
    }

    public void setStartTime(int startTime) {
        this.startTime = startTime;
    }

    public int getEndTime() {
        return endTime;
    }

    public void setEndTime(int endTime) {
        this.endTime = endTime;
    }
}



class test{
    public static void main(String args[]){
        //Meeting m = new Meeting(2, 3);
        
        ArrayList<Meeting> arr = new ArrayList<>();
        

        arr.add(new Meeting(1, 5));
        arr.add(new Meeting(2, 3));
        // arr.add(new Meeting(4, 8));
        // arr.add(new Meeting(10, 12));
        // arr.add(new Meeting(9, 10));

        mergeOverlap(arr);
    }

    static void mergeOverlap(ArrayList<Meeting> arr){
        ArrayList<Meeting> res = new ArrayList<>();

        int a = 0;
        int b = 0;
        for(int i=0;i<arr.size();i++){
            int c = arr.get(i).getStartTime();
            int d = arr.get(i).getEndTime();

            if( a > c){
                if(d >= b){
                    res.add(new Meeting(c,d));
                }else
                    res.add(new Meeting(c,b));
            }else if(b >= c){
                if(d >= b)
                    res.add(new Meeting(a,d));
                else
                    res.add(new Meeting(a,b));
            }
            a = c;
            b = d;
        }

        for(Meeting x:res){
            System.out.println(x.getStartTime()+ " "+x.getEndTime());
        }
    }
}

