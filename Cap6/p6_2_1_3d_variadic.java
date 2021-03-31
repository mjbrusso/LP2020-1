
class p6_2_1_3d_variadic {
    public static void main(String[] args) {
        int m;
        m = FindMax(702, 422, 631, 10, 892, 104, 772);
        System.out.println("The largest value is: " + m);
    }

    static int FindMax(int... vl) {
        int largest = Integer.MIN_VALUE;
        for (int val : vl) {
            largest = (largest > val) ? largest : val;
        }
        return largest;
    }
}
