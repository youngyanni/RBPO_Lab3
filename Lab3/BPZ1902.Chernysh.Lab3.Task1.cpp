module BPZ1902.Chernysh.Lab3.Task1;

namespace RBPO {
	namespace Lab3 {
		namespace Task1 {
			double f1(double x) {
				return -sqrt(x);
			}
			double f2(double x) {
				return (x > 3.6) ? (45 * x * x + 5) : (5 * x / (10 * x * x + 1));
			}
			double a(int i) {
				return  (pow(-1.0, i) * ( (i*i+1) / (double)(i*i*i+3)));	
			}
			double f3(int n) {
				double sum = 0.0;
				for (int i = 0; i <= n; i++) {
					sum += a(i);
				}
				return sum;
			}
			double f4(double eps) {
				double prev = a(0);
				double next = a(1);
				double sum = prev+next;
				for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
					sum += a(i);
				}
				return sum;
			}
		}
	}
}
