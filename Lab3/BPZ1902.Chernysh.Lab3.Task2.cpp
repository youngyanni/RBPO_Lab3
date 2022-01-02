
module BPZ1902.Chernysh.Lab3.Task2;

namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
			double f1(double x) {
				return -sqrt(x);
			}
			double f2(double x) {
				if (x > 3.6) {
					return 45 * x * x + 5;
				}
				else {
					return 5 * x / (10 * x * x + 1);
				}
			}
			double a(int i) {
				return  (pow(-1.0, i) * ((i * i + 1) / (double)(i * i * i + 3)));
			}
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				while (i <= n) {
					sum += a(i);
					i++;
				}
				return sum;
			}
			double f4(double eps) {
				double prev = a(0);
				double next = a(1);
				double sum = prev + next;
				int i = 2;
				while (abs(a(i) - a(i - 1)) > eps) {
					sum += a(i);
					i++;
				}
				return sum;
			}
		}
	}
}
