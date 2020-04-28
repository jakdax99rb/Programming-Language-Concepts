class q5 {
    public static void main(String Args[]) {

        int[][] x = { { 0, 0, 0, 1 }, { 0, 0, 0, 0 }, { 622, 127, 77, 955 }, { 0, 0, 0, 1 } };

        int n = 3;

        for (int i = 0; i <= n; i++) {

            boolean isZero = true;

            for (int j = 0; j <= n; j++) {

                if (x[i][j] != 0) {

                    isZero = false;

                }
            }

            if (isZero) {

                System.out.println("First all-zero row is:" + i);
                break;

            }
        }
    }
}