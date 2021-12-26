package ustc.edu.cn;

import ustc.edu.cn.sort.QuickSort;

public class Main {
    public static void main(String [] args){
        Integer[] a = {5,6,7,832,23,4,12312,6,7,8,9,93,123123,123};
        QuickSort.show(a);
        System.out.println();
        QuickSort.sort(a);
        QuickSort.show(a);
    }
}
