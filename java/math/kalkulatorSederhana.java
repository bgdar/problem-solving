
public class kalkulatorSederhana {

  public static void main(String[] args) {
    System.out.println("hellor tets");

    int result = KalkulatorProgram(12, 2, '-');
    System.out.println("pengurangan " + result);

    int result2 = KalkulatorProgram(121, 221, '/');
    System.out.println("pembagian :" + result2);

  }

  public static int KalkulatorProgram(int a, int b, char operator) {

    switch (operator) {
      case '+':
        System.out.println("penambahan \n");
        return a + b;
      case '-':
        System.out.println("pengurangan \n");
        return a - b;
      case '*':
        System.out.println("Perkalian \n");
        return a * b;
      case '/':
        // jika nilai yang akan di bagi bukan 0
        if (b != 0) {
          return a / b;
        } else {
          System.out.println("pembagian dengan 0 \n");
          return 0;
        }
      default:
        System.out.println("operator tidak di kenal \n");
        return 0;

    }

  }
}
