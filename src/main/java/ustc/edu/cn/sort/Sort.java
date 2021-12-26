package ustc.edu.cn.sort;

public abstract class Sort {
    public static boolean less(Comparable a, Comparable b) {
        return a.compareTo(b) < 0;
    }

    public static void exchange(Comparable[] a, int i, int j) {
        Comparable t = a[i];
        a[i] = a[j];
        a[j] = t;
    }

    public static void show(Comparable[] a) {
        for (int i = 0; i < a.length; ++i) {
          System.out.print(a[i]+" ");
        }
    }

    public static void sort(Comparable[] a){
        // for son override
    };
}
