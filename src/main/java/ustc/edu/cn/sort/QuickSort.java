package ustc.edu.cn.sort;

/**
 * 快速排序算法
 *
 * 核心思想： 分治法思想，将数组分成两个部分加上加一个基准点，基准点左面的数据值都小于等于基准点，基准点右面的值都小于等于基准点。
 *
 * 递归执行切分算法，将整个数据都排定。
 *
 * 切分算法核心操作： 从左向右寻找大于或者等于基准点的值, 再从➡右向左扫描知道找到一个小于等于基准点的元素，这两个元素都没有被排定，所以交换两个元素位置，两个元素都被排定。
 * 如此继续可以保证左面对数组一直都小于等于基准点，右面的元素大于等于基准点。
 * 当两个指针相遇的时候，将基准点与左子数组最右侧的元素进行交换。
 */
public class QuickSort extends Sort {

    public static void sort(Comparable a[]) {
        sort(a, 0, a.length - 1);
    }

    static void sort(Comparable a[], int low, int high) {
        if (low >= high) return;

        int j = partion(a, low, high);

        sort(a, low, j - 1);
        sort(a, j + 1, high);
    }

    private static int partion(Comparable[] a, int low, int high) {
        int i = low;
        int j = high + 1;
        Comparable v = a[low];

        while (true) {
            // pay attention for this condition
            // if(i==high) search until to right boundary
            // if(j==low)  search until to left  boundary
            while (less(a[++i], v)) if (i == high) break;
            while (less(v, a[--j])) if (j == low) break;
            if (i >= j) break;
            exchange(a, i, j);
        }

        exchange(a, low, j);
        return j;
    }
}
