
public class j8c {

    public static void main(String Args[]) {
        int j = -3;
        for (int i = 0; i < 3; i++) {
            if ((j + 2) == 3) {

                /*
                 * this extra copy of the if tree is used to simulate how switches flow through
                 * if no break statement is given.
                 */
                if ((j + 2) == 2) {
                    j--;
                } else if ((j + 2) == 0) {
                    j += 2;
                } else {
                    j = 0;
                }
            } else if ((j + 2) == 2) {
                j--;

            } else if ((j + 2) == 0) {
                j += 2;

            } else {
                j = 0;
            }
            if (j > 0) {
                break;
            }
            j = 3 - i;
        }
    }

    int a = 7_000;
}