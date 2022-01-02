module BPZ1902.Chernysh.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f2(double x) {
				if (x > 3.6) {
					return 45 * x * x + 5;
				}
				else {
					return 5 * x / (10 * x * x + 1);
				}
			}
		}
	}
}